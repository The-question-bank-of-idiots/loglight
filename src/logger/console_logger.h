#pragma once

#include "logger.h"

namespace loglight {
class ConsoleLogger : public Logger {
public:
    ConsoleLogger() = default;

    void setConsoleColor(bool enable);

protected:
    
    // Logger
    void log(LogLevel level, const std::string& message) override;

private:
    bool m_enableColor = true;
};
}