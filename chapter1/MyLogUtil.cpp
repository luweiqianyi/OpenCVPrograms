//#include"./stdafx.h"
#include "MyLogUtil.h"
#include <boost/log/core.hpp>
#include <boost/log/exceptions.hpp>
// boost::log::trivial::severity_level::trace=0,
// boost::log::trivial::severity_level::debug=1,
// boost::log::trivial::severity_level::info=2,
// boost::log::trivial::severity_level::warning=3,
// boost::log::trivial::severity_level::error=4,
// boost::log::trivial::severity_level::fatal=5

void MyLogUtil::setLoggingLevel(My_severity_level log_level_threshold)
{
	My_Log::core::get()->set_filter(boost::log::trivial::severity >= log_level_threshold);
}

void MyLogUtil::initialLogConfig(const char* filePath, My_severity_level log_level_threshold)
{
	My_Log::register_simple_formatter_factory<My_Log::trivial::severity_level, char>("Severity");
	My_Log::add_file_log(
		My_Log::keywords::file_name=filePath,
		My_Log::keywords::open_mode = std::ios_base::app | std::ios_base::out,
		My_Log::keywords::format = "[%TimeStamp%]  [ThreadID=%ThreadID%]  [Severity=%Severity%] \
[ProcessID=%ProcessID%]  [LineID=%LineID%]  %Message%"
	);
	setLoggingLevel(log_level_threshold);
	My_Log::add_common_attributes();
}


MyLogUtil::MyLogUtil(const char* filePath, My_severity_level log_level_threshold)
{
	initialLogConfig(filePath,log_level_threshold);
}

MyLogUtil::~MyLogUtil()
{
}

// boost::log::trivial::severity_level::trace=0,
// boost::log::trivial::severity_level::debug=1,
// boost::log::trivial::severity_level::info=2,
// boost::log::trivial::severity_level::warning=3,
// boost::log::trivial::severity_level::error=4,
// boost::log::trivial::severity_level::fatal=5
void MyLogUtil::printLog(const char* msg, My_severity_level log_level)
{
	switch (log_level) {
	case My_severity_level::trace:
		BOOST_LOG_TRIVIAL(trace) << msg;
		break;
	case My_severity_level::debug:
		BOOST_LOG_TRIVIAL(debug)<<msg;
		break;
	case My_severity_level::info:
		BOOST_LOG_TRIVIAL(info) << msg;
		break;
	case  My_severity_level::warning:
		BOOST_LOG_TRIVIAL(warning) << msg;
		break;
	case My_severity_level::error:
		BOOST_LOG_TRIVIAL(error) << msg;
		break;
	case My_severity_level::fatal:
		BOOST_LOG_TRIVIAL(fatal) << msg;
		break;
	}
	
}
