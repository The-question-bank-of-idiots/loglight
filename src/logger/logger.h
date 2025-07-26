#pragma once

#include <string>
#include <fmt/core.h>

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
    template<typename... Args>
    inline void info(const std::string& fmt, Args&&... args) {
        log(LogLevel::INFO, fmt::format(fmt, std::forward<Args>(args)...));
    }

    template<typename... Args>
    inline void warning(const std::string& fmt, Args&&... args) {
        log(LogLevel::WARNING, fmt::format(fmt, std::forward<Args>(args)...));
    }

    template<typename... Args>
    inline void error(const std::string& fmt, Args&&... args) {
        log(LogLevel::ERROR, fmt::format(fmt, std::forward<Args>(args)...));
    }

protected:
    virtual void log(LogLevel level, const std::string& message) = 0;
};

} // namespace loglight