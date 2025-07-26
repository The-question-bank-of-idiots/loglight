#include "console_logger.h"

#include <iostream>

namespace loglight {
void ConsoleLogger::log(LogLevel level, const std::string& message)
{
    std::string color;
    switch (level) {
        case LogLevel::INFO:
            color = "\033[32m";
            break;  // 绿色
        case LogLevel::WARNING:
            color = "\033[33m";
            break;  // 黄色
        case LogLevel::ERROR:
            color = "\033[31m";
            break;  // 红色
    }
    std::cout << color << message << "\033[0m" << std::endl;
}
}