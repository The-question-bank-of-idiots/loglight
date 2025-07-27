//
// Created by PolarLightDance on 25-7-26.
//

#include "interface/loglight.h"

int main() {
    // create a console logger
    auto consoleLogger = std::dynamic_pointer_cast<loglight::ConsoleLogger>(loglight::LoggerFactory::createConsoleLogger());

    // log
    consoleLogger->info("Welcome to loglight");
    consoleLogger->info("This is an info message");
    consoleLogger->warning("This is a warning message");
    consoleLogger->error("This is an error message");

    consoleLogger->info("This is a info message with arguments: {}", 1);
    consoleLogger->warning("This is a warning message with arguments: {}, {}", 1, 2);
    consoleLogger->error("This is an error message with arguments: {}, {}, {}", 1, 2, std::string("hello"));

    consoleLogger->setLogLevel(loglight::LogLevel::DEBUG);
    consoleLogger->info("This is a info message, you should not see this message");
    consoleLogger->debug("This is a debug message, you should see this message");
    consoleLogger->warning("This is a warning message, you should see this message");
    consoleLogger->error("This is an error message, you should see this message");

    consoleLogger->setConsoleColor(false);
    consoleLogger->debug("This is a debug message, you should see this message, but without color");

    return 0;
}