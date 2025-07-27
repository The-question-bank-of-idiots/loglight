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
    inline void info(fmt::format_string<Args...> format, Args&&... args) {
        log(LogLevel::INFO, fmt::format(format, std::forward<Args>(args)...));
    }

    template<typename... Args>
    inline void warning(fmt::format_string<Args...> format, Args&&... args) {
        log(LogLevel::WARNING, fmt::format(format, std::forward<Args>(args)...));
    }

    template<typename... Args>
    inline void error(fmt::format_string<Args...> format, Args&&... args) {
        log(LogLevel::ERROR, fmt::format(format, std::forward<Args>(args)...));
    }

protected:
    virtual void log(LogLevel level, const std::string& message) = 0;
};

} // namespace loglight