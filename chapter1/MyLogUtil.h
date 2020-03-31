#pragma once

#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>

/*
* CopyRight by MunXin Technology
* Created by Nicklaus
* Date: 2020.03.31
*/	
/*Reference link:https://www.scalyr.com/blog/getting-started-quickly-c++-logging*/
namespace My_Log = boost::log;
using My_severity_level = My_Log::trivial::severity_level;
class MyLogUtil
{
private:
	void setLoggingLevel(My_severity_level log_level_threshold);	
	void initialLogConfig(const char* filePath, My_severity_level log_level_threshold);
public:
	MyLogUtil(const char* filePath,My_severity_level log_level_threshold);
	~MyLogUtil();
	void printLog(const char* msg,My_severity_level log_level);
};



// 常见BUG解决情况
// issue1: 
// value不是boost::proto的成员
// 解决方案: https://github.com/boostorg/proto/pull/2/files
// 修改boost/proto/expr.hpp与boost/proto/generate.hpp下
//  #if BOOST_WORKAROUND(BOOST_MSVC, BOOST_TESTED_AT(1700))
// 为#if BOOST_WORKAROUND(BOOST_MSVC, < 1800)