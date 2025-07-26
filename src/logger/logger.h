#pragma once

#include <string>

namespace loglight {

enum class LogLevel {
    INFO,
    WARNING,
    ERROR
};

class Logger{
public:
    virtual ~Logger() = default;

    // 基础日志记录方法
    inline void info(const std::string& message) {
        log(LogLevel::INFO, message);
    }

    inline void warning(const std::string& message) {
        log(LogLevel::WARNING, message);
    }

    inline void error(const std::string& message) {
        log(LogLevel::ERROR, message);
    }

protected:
    virtual void log(LogLevel level, const std::string& message) = 0;
};

} // namespace loglight