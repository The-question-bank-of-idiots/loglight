//
// Created by PolarLightDance on 25-7-26.
//

#include "interface/loglight.h"

int main() {
    // create a console logger
    auto consoleLogger = loglight::LoggerFactory::createConsoleLogger();

    // log
    consoleLogger->info("Welcome to loglight");
    consoleLogger->info("This is an info message");
    consoleLogger->warning("This is a warning message");
    consoleLogger->error("This is an error message");

    return 0;
}