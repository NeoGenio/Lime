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

#include "log.h"

namespace Lime
{
    void Logger::log(const char *message, LogLevel level)
    {
        if (level == LogLevel::error || level == LogLevel::warn || level == LogLevel::fatal)
            printf("\033[1;%im%s\033[m", level, message);
        else
            printf("\033[0;%im%s\033[m", level, message);
    }
}