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



// ����BUG������
// issue1: 
// value����boost::proto�ĳ�Ա
// �������: https://github.com/boostorg/proto/pull/2/files
// �޸�boost/proto/expr.hpp��boost/proto/generate.hpp��
//  #if BOOST_WORKAROUND(BOOST_MSVC, BOOST_TESTED_AT(1700))
// Ϊ#if BOOST_WORKAROUND(BOOST_MSVC, < 1800)