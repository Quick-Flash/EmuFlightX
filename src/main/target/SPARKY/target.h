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

#pragma once

#define TARGET_BOARD_IDENTIFIER "SPKY" // SParKY


#define LED0_PIN                PB4  // Blue (Rev 1 & 2) - PB4
#define LED1_PIN                PB5  // Green (Rev 1) / Red (Rev 2) - PB5

#define USE_BEEPER
#define BEEPER_PIN              PA1
#define BEEPER_INVERTED

// MPU6050 interrupts
#define USE_EXTI
#define USE_GYRO_EXTI
#define GYRO_1_EXTI_PIN         PA15
#define USE_MPU_DATA_READY_SIGNAL

// MPU 9150 INT connected to PA15, pulled up to VCC by 10K Resistor, contains MPU6050 and AK8975 in single component.
#define USE_GYRO
#define USE_GYRO_MPU6050
#define GYRO_1_ALIGN            CW270_DEG

#define USE_ACC
#define USE_ACC_MPU6050

#define USE_BARO
#define USE_BARO_MS5611
#define USE_BARO_BMP280

#define USE_MAG
#define USE_MAG_AK8975

#define MAG_AK8975_ALIGN        CW180_DEG_FLIP

#define USE_VCP
#define USE_UART1 // Conn 1 - TX (PB6) RX PB7 (AF7)
#define USE_UART2 // Input - RX (PA3)
#define USE_UART3 // Servo out - 10/RX (PB11) 11/TX (PB10)
#define USE_SOFTSERIAL1
#define USE_SOFTSERIAL2

#define SERIAL_PORT_COUNT       6

#define AVOID_UART2_FOR_PWM_PPM

#define USE_ESCSERIAL
#define ESCSERIAL_TIMER_TX_PIN  PB15  // (HARDARE=0)

#define UART1_TX_PIN            PB6
#define UART1_RX_PIN            PB7

#define UART2_TX_PIN            PA2 // PA2 - Clashes with PWM6 input.
#define UART2_RX_PIN            PA3

#define UART3_TX_PIN            PB10 // PB10 (AF7)
#define UART3_RX_PIN            PB11 // PB11 (AF7)

// Note: PA5 and PA0 are N/C on the sparky - potentially use for ADC or LED STRIP?

#define USE_I2C
#define USE_I2C_DEVICE_2
#define I2C_DEVICE              (I2CDEV_2)
#define I2C2_SCL                PA9
#define I2C2_SDA                PA10

#define USE_ADC
#define ADC_INSTANCE            ADC2
#define VBAT_ADC_PIN            PA4
#define CURRENT_METER_ADC_PIN   PA7

#define DEFAULT_RX_FEATURE      FEATURE_RX_PPM

//#define USE_RANGEFINDER
//#define USE_RANGEFINDER_HCSR04
//#define RANGEFINDER_HCSR04_ECHO_PIN          PB1
//#define RANGEFINDER_HCSR04_TRIGGER_PIN       PA2

// available IO pins (from schematics)
//#define TARGET_IO_PORTA (BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15))
//#define TARGET_IO_PORTB (BIT(0)|BIT(1)|BIT(10)|BIT(11)|BIT(14)|BIT(15)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9))
// !!TODO - check following lines are correct
#define TARGET_IO_PORTA         (BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15))
#define TARGET_IO_PORTB         (BIT(0)|BIT(1)|BIT(6)|BIT(10)|BIT(11)|BIT(14)|BIT(15)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(12)|BIT(13))
#define TARGET_IO_PORTF         (BIT(0)|BIT(1)|BIT(4))

#define USABLE_TIMER_CHANNEL_COUNT 11
#define USED_TIMERS             (TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(15) | TIM_N(16) | TIM_N(17))
