/*
 *   Copyright (c) 2021 NeoGenio

 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.

 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.

 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <iostream>

#include <log.h>

int main()
{
    Lime::Logger *logger = new Lime::Logger();

    logger->log("Success\n", Lime::LogLevel::success);
    logger->log("Info\n", Lime::LogLevel::info);
    logger->log("Trace\n", Lime::LogLevel::trace);
    logger->log("Debug\n", Lime::LogLevel::debug);
    logger->log("Warn\n", Lime::LogLevel::warn);
    logger->log("Error\n", Lime::LogLevel::error);
    logger->log("Fatal\n", Lime::LogLevel::fatal);

    return 0;
}
