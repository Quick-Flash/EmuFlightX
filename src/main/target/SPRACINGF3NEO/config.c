/*
 * This file is part of Cleanflight and Betaflight and EmuFlight.
 *
 * Cleanflight and Betaflight and EmuFlight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight and EmuFlight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdbool.h>
#include <stdint.h>

#include "platform.h"

#include "drivers/serial.h"

#include "pg/rx.h"
#include "rx/rx.h"

#include "io/serial.h"
#include "telemetry/telemetry.h"

#ifdef USE_TARGET_CONFIG

#include "config_helper.h"

#define GPS_UART                            SERIAL_PORT_USART3

#define TELEMETRY_UART                      SERIAL_PORT_UART5
#define TELEMETRY_PROVIDER_DEFAULT          FUNCTION_TELEMETRY_SMARTPORT

static targetSerialPortFunction_t targetSerialPortFunction[] = {
    { SERIAL_PORT_USART1, FUNCTION_MSP },
    { TELEMETRY_UART,     TELEMETRY_PROVIDER_DEFAULT },
    { GPS_UART,           FUNCTION_GPS },
};

void targetConfiguration(void)
{
    targetSerialPortFunctionConfig(targetSerialPortFunction, ARRAYLEN(targetSerialPortFunction));
    telemetryConfigMutable()->halfDuplex = true;
}
#endif
