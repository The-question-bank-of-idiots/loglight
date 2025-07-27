#pragma once

#include <string>
#include <fmt/core.h>

namespace loglight {

enum class LogLevel {
    INFO,
    DEBUG,
    WARNING,
    ERROR
};

class Logger{
public:
    Logger() = default;
    virtual ~Logger() = default;

    // 基础日志记录方法
    // info
    template<typename... Args>
    inline void info(fmt::format_string<Args...> format, Args&&... args) {
        if (getLogLevel() <= LogLevel::INFO) {
            log(LogLevel::INFO, fmt::format(format, std::forward<Args>(args)...));
        }
    }

    // debug
    template<typename... Args>
    inline void debug(fmt::format_string<Args...> format, Args&&... args) {
        if (getLogLevel() <= LogLevel::DEBUG) {
            log(LogLevel::DEBUG, fmt::format(format, std::forward<Args>(args)...));
        }
    }

    // warning
    template<typename... Args>
    inline void warning(fmt::format_string<Args...> format, Args&&... args) {
        if (getLogLevel() <= LogLevel::WARNING) {
            log(LogLevel::WARNING, fmt::format(format, std::forward<Args>(args)...));
        }
    }

    // error
    template<typename... Args>
    inline void error(fmt::format_string<Args...> format, Args&&... args) {
        if (getLogLevel() <= LogLevel::ERROR) {
            log(LogLevel::ERROR, fmt::format(format, std::forward<Args>(args)...));
        }
    }

    // set log level
    void setLogLevel(LogLevel level) {
        m_logLevel = level;
    }

    // get log level
    LogLevel getLogLevel() const {
        return m_logLevel;
    }

protected:
    virtual void log(LogLevel level, const std::string& message) = 0;

    LogLevel m_logLevel = LogLevel::INFO;
};

} // namespace loglight