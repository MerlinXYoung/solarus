/*
 * Copyright (C) 2006-2014 Christopho, Solarus - http://www.solarus-games.org
 *
 * Solarus is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Solarus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include "SolarusFatal.h"

namespace Solarus {

/**
 * \brief Creates a fatal error that should stop Solarus.
 * \param error_message A message describing the error.
 */
SolarusFatal::SolarusFatal(const std::string& error_message):
    error_message(error_message) {

}

/**
 * \brief Returns the error message.
 * \return A message describing the error.
 */
const char* SolarusFatal::what() const noexcept {
  return error_message.c_str();
}

}
