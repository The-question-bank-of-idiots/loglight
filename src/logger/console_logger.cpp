#include "console_logger.h"

#include <iostream>

namespace loglight {
void ConsoleLogger::setConsoleColor(bool enable)
{
    m_enableColor = enable;
}

void ConsoleLogger::log(LogLevel level, const std::string& message)
{
    if (m_enableColor) {
        std::string color;
        switch (level) {
            case LogLevel::INFO:
                color = "\033[32m";
                break; // 绿色
            case LogLevel::DEBUG:
                color = "\033[34m";
                break; // 蓝色
            case LogLevel::WARNING:
                color = "\033[33m";
                break; // 黄色
            case LogLevel::ERROR:
                color = "\033[31m";
                break; // 红色
        }
        std::cout << color << message << "\033[0m" << std::endl;
    } else {
        std::cout << message << std::endl;
    }
}
}