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

#include <stdint.h>

#include "platform.h"
#include "drivers/io.h"

#include "drivers/dma.h"
#include "drivers/timer.h"
#include "drivers/timer_def.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    DEF_TIM(TIM2, CH1, PA15, TIM_USE_LED,           0, 0), // ONBOARD LED

    DEF_TIM(TIM1, CH1, PA8, TIM_USE_ANY,            0, 0), // CAM CONTROL

    // MOTORS

    DEF_TIM(TIM8, CH3, PC8,  TIM_USE_MOTOR,         0, 0), //S1
    DEF_TIM(TIM8, CH4, PC9,  TIM_USE_MOTOR,         0, 0), //S2
    DEF_TIM(TIM3, CH3, PB0,  TIM_USE_MOTOR,         0, 0), //S3
    DEF_TIM(TIM3, CH4, PB1,  TIM_USE_MOTOR,         0, 0), //S4
};
