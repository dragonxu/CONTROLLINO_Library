/** @file Controllino.h
 *  @brief CONTROLLINO PLC extension for the Arduino IDE
 *
 *  CONTROLLINO - First software open-source PLC (ARDUINO compatible)
 *  
 *  This header file contains constants, macros and functional prototypes
 *  useful for programming of the CONTROLLINO devices in the Arduino IDE.
 *
 *  https://controllino.biz/
 *  https://github.com/CONTROLLINO-PLC/CONTROLLINO_Library
 *  https://www.arduino.cc/
 *
 *  @author CONTROLLINO design team
 *  @version   1.0.0
 *  @date      2017-01-05
 *  @bug No known bugs.
 */


#ifndef Controllino_h
#define Controllino_h

#include "SPI.h"

/*
 * For backwards compatibility
 */
#if ARDUINO > 22
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

/*
 * There must be selected proper HW variant of the CONTROLLINO
 */
#if defined(CONTROLLINO_MINI)
  #elif defined(CONTROLLINO_MAXI) 
    #elif defined(CONTROLLINO_MEGA) 
      #else 
        #error Please, select one of the CONTROLLINO variants in Tools->Board
#endif

/** @brief Set of macros mapping CONTROLLINO aliases to Arduino pin numbers
 *
 *  For CONTROLLINO MINI
 */

#ifdef CONTROLLINO_MINI

  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_00 2
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_00 2
  
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_01 3
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_01 3
  
  #define CONTROLLINO_SCREW_TERMINAL_RELAY_02 4
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_02 4
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_02 4
  
  #define CONTROLLINO_SCREW_TERMINAL_RELAY_03 5
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_03 5
  #define CONTROLLINO_PIN_HEADER_PWM_00 5
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_03 5
  #define CONTROLLINO_SCREW_TERMINAL_PWM_00 5
  
  #define CONTROLLINO_SCREW_TERMINAL_RELAY_04 6
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_04 6
  #define CONTROLLINO_PIN_HEADER_PWM_01 6
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_04 6
  #define CONTROLLINO_SCREW_TERMINAL_PWM_01 6
  
  #define CONTROLLINO_SCREW_TERMINAL_RELAY_05 7
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_05 7
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_05 7
  
  #define CONTROLLINO_SCREW_TERMINAL_RELAY_00 8
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_00 8
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_00 8
  
  #define CONTROLLINO_SCREW_TERMINAL_RELAY_01 9
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_01 9
  #define CONTROLLINO_PIN_HEADER_PWM_02 9
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_01 9
  #define CONTROLLINO_SCREW_TERMINAL_PWM_02 9
  
  #define CONTROLLINO_PIN_HEADER_PWM_03 10
  #define CONTROLLINO_PIN_HEADER_SS 10
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_08 10
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_08 10
  
  #define CONTROLLINO_PIN_HEADER_PWM_04 11
  #define CONTROLLINO_PIN_HEADER_MOSI 11
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_09 11
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_09 11
  
  #define CONTROLLINO_PIN_HEADER_MISO 12
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_10 12
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_10 12
  
  #define CONTROLLINO_PIN_HEADER_SCK 13
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_11 13
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_11 13
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_00 14
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_00 14
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_00 14
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_00 14
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_01 15
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_01 15
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_01 15
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_01 15
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_02 16
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_02 16
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_02 16
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_02 16
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_03 17
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_03 17
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_03 17
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_03 17
  
  #define CONTROLLINO_PIN_HEADER_SDA 18
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_06 18
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_06 18
  
  #define CONTROLLINO_PIN_HEADER_SCL 19
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_07 19
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_07 19
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_IN_06 20
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_IN_06 20
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_IN_07 21
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_IN_07 21
  
  #define CONTROLLINO_D0 4
  #define CONTROLLINO_D1 5
  #define CONTROLLINO_D2 6
  #define CONTROLLINO_D3 7
  #define CONTROLLINO_D4 8
  #define CONTROLLINO_D5 9
  #define CONTROLLINO_D6 18
  #define CONTROLLINO_D7 19
  
  #define CONTROLLINO_A0 14
  #define CONTROLLINO_A1 15
  #define CONTROLLINO_A2 16
  #define CONTROLLINO_A3 17
  #define CONTROLLINO_A4 20
  #define CONTROLLINO_A5 21
  #define CONTROLLINO_IN0 2
  #define CONTROLLINO_IN1 3

#endif

/** @brief Set of macros mapping CONTROLLINO aliases to Arduino pin numbers
 *
 *  For CONTROLLINO MAXI
 */

#ifdef CONTROLLINO_MAXI

  #define CONTROLLINO_PIN_HEADER_PWM_00 2
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_00 2
  #define CONTROLLINO_SCREW_TERMINAL_PWM_00 2
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_00 2
  
  #define CONTROLLINO_PIN_HEADER_PWM_01 3
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_01 3
  #define CONTROLLINO_SCREW_TERMINAL_PWM_01 3
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_01 3
  
  #define CONTROLLINO_PIN_HEADER_PWM_02 4
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_02 4
  #define CONTROLLINO_SCREW_TERMINAL_PWM_02 4
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_02 4
  
  #define CONTROLLINO_PIN_HEADER_PWM_03 5
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_03 5
  #define CONTROLLINO_SCREW_TERMINAL_PWM_03 5
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_03 5
  
  #define CONTROLLINO_PIN_HEADER_PWM_04 6
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_04 6
  #define CONTROLLINO_SCREW_TERMINAL_PWM_04 6
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_04 6
  
  #define CONTROLLINO_PIN_HEADER_PWM_05 7
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_05 7
  #define CONTROLLINO_SCREW_TERMINAL_PWM_05 7
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_05 7
  
  #define CONTROLLINO_PIN_HEADER_PWM_06 8
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_06 8
  #define CONTROLLINO_SCREW_TERMINAL_PWM_06 8
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_06 8
  
  #define CONTROLLINO_PIN_HEADER_PWM_07 9
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_07 9
  #define CONTROLLINO_SCREW_TERMINAL_PWM_07 9
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_07 9
  
  #define CONTROLLINO_PIN_HEADER_PWM_08 10
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_08 10
  #define CONTROLLINO_SCREW_TERMINAL_PWM_08 10
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_08 10
  
  #define CONTROLLINO_PIN_HEADER_PWM_09 11
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_09 11
  #define CONTROLLINO_SCREW_TERMINAL_PWM_09 11
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_09 11
  
  #define CONTROLLINO_PIN_HEADER_PWM_10 12
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_10 12
  #define CONTROLLINO_SCREW_TERMINAL_PWM_10 12
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_10 12
  
  #define CONTROLLINO_PIN_HEADER_PWM_11 13
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_11 13
  #define CONTROLLINO_SCREW_TERMINAL_PWM_11 13
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_11 13
  
  
  #define CONTROLLINO_RS485_TX 14
  
  #define CONTROLLINO_RS485_RX 15
  
  #define CONTROLLINO_UART_TX 16
  
  #define CONTROLLINO_UART_RX 17
  
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_16 18
  #define CONTROLLINO_PIN_HEADER_INT_00 18
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_16 18
  #define CONTROLLINO_SCREW_TERMINAL_INT_00 18
  
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_17 19
  #define CONTROLLINO_PIN_HEADER_INT_01 19
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_17 19
  #define CONTROLLINO_SCREW_TERMINAL_INT_01 19
  
  #define CONTROLLINO_PIN_HEADER_SDA 20
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_25 20
  
  #define CONTROLLINO_PIN_HEADER_SCL 21
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_24 21
  
  #define CONTROLLINO_RELAY_00 22
  
  #define CONTROLLINO_RELAY_01 23
  
  #define CONTROLLINO_RELAY_02 24
  
  #define CONTROLLINO_RELAY_03 25
  
  #define CONTROLLINO_RELAY_04 26
  
  #define CONTROLLINO_RELAY_05 27
  
  #define CONTROLLINO_RELAY_06 28
  
  #define CONTROLLINO_RELAY_07 29
  
  #define CONTROLLINO_RELAY_08 30
  
  #define CONTROLLINO_RELAY_09 31
  
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_12 42
  
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_13 43
  
  #define CONTROLLINO_PIN_HEADER_PWM_12 44
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_14 44
  
  #define CONTROLLINO_PIN_HEADER_PWM_13 45
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_15 45
  
  #define CONTROLLINO_PIN_HEADER_MISO 50
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_29 50
  
  #define CONTROLLINO_PIN_HEADER_MOSI 51
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_28 51
  
  #define CONTROLLINO_PIN_HEADER_SCK 52
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_27 52
  
  #define CONTROLLINO_PIN_HEADER_SS 53
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_26 53
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_00 54
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_00 54
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_00 54 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_00 54
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_00 54
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_00 54
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_01 55
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_01 55
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_01 55 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_01 55
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_01 55
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_01 55
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_02 56
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_02 56
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_02 56 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_02 56
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_02 56
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_02 56
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_03 57
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_03 57
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_03 57 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_03 57
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_03 57
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_03 57
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_04 58
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_04 58
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_04 58 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_04 58
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_04 58
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_04 58
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_05 59
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_05 59
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_05 59 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_05 59
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_05 59
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_05 59
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_06 60
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_06 60
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_06 60 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_06 60
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_06 60
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_06 60
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_07 61
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_07 61
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_07 61 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_07 61
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_07 61
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_07 61
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_08 62
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_08 62
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_08 62 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_08 62
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_08 62
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_08 62
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_09 63
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_09 63
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_09 63 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_09 63
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_09 63
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_09 63
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_10 64
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_10 64
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_10 64
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_11 65
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_11 65
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_11 65
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_12 66
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_12 66
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_12 66
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_13 67
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_13 67
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_13 67
  
  #define CONTROLLINO_D0 2
  #define CONTROLLINO_D1 3
  #define CONTROLLINO_D2 4
  #define CONTROLLINO_D3 5
  #define CONTROLLINO_D4 6
  #define CONTROLLINO_D5 7
  #define CONTROLLINO_D6 8
  #define CONTROLLINO_D7 9
  #define CONTROLLINO_D8 10
  #define CONTROLLINO_D9 11
  #define CONTROLLINO_D10 12
  #define CONTROLLINO_D11 13
  
  #define CONTROLLINO_A0 54
  #define CONTROLLINO_A1 55
  #define CONTROLLINO_A2 56
  #define CONTROLLINO_A3 57
  #define CONTROLLINO_A4 58
  #define CONTROLLINO_A5 59
  #define CONTROLLINO_A6 60
  #define CONTROLLINO_A7 61
  #define CONTROLLINO_A8 62
  #define CONTROLLINO_A9 63
  #define CONTROLLINO_IN0 18
  #define CONTROLLINO_IN1 19
  
  #define CONTROLLINO_MINUS 14
  #define CONTROLLINO_PLUS 15
  
  #define CONTROLLINO_R0 22
  #define CONTROLLINO_R1 23
  #define CONTROLLINO_R2 24
  #define CONTROLLINO_R3 25
  #define CONTROLLINO_R4 26
  #define CONTROLLINO_R5 27
  #define CONTROLLINO_R6 28
  #define CONTROLLINO_R7 29
  #define CONTROLLINO_R8 30
  #define CONTROLLINO_R9 31
  

#endif

/** @brief Set of macros mapping CONTROLLINO aliases to Arduino pin numbers
 *
 *  For CONTROLLINO MEGA
 */

#ifdef CONTROLLINO_MEGA

  #define CONTROLLINO_PIN_HEADER_PWM_00 2
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_00 2
  #define CONTROLLINO_SCREW_TERMINAL_PWM_00 2
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_00 2
  
  #define CONTROLLINO_PIN_HEADER_PWM_01 3
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_01 3
  #define CONTROLLINO_SCREW_TERMINAL_PWM_01 3
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_01 3
  
  #define CONTROLLINO_PIN_HEADER_PWM_02 4
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_02 4
  #define CONTROLLINO_SCREW_TERMINAL_PWM_02 4
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_02 4
  
  #define CONTROLLINO_PIN_HEADER_PWM_03 5
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_03 5
  #define CONTROLLINO_SCREW_TERMINAL_PWM_03 5
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_03 5
  
  #define CONTROLLINO_PIN_HEADER_PWM_04 6
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_04 6
  #define CONTROLLINO_SCREW_TERMINAL_PWM_04 6
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_04 6
  
  #define CONTROLLINO_PIN_HEADER_PWM_05 7
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_05 7
  #define CONTROLLINO_SCREW_TERMINAL_PWM_05 7
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_05 7
  
  #define CONTROLLINO_PIN_HEADER_PWM_06 8
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_06 8
  #define CONTROLLINO_SCREW_TERMINAL_PWM_06 8
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_06 8
  
  #define CONTROLLINO_PIN_HEADER_PWM_07 9
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_07 9
  #define CONTROLLINO_SCREW_TERMINAL_PWM_07 9
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_07 9
  
  #define CONTROLLINO_PIN_HEADER_PWM_08 10
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_08 10
  #define CONTROLLINO_SCREW_TERMINAL_PWM_08 10
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_08 10
  
  #define CONTROLLINO_PIN_HEADER_PWM_09 11
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_09 11
  #define CONTROLLINO_SCREW_TERMINAL_PWM_09 11
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_09 11
  
  #define CONTROLLINO_PIN_HEADER_PWM_10 12
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_10 12
  #define CONTROLLINO_SCREW_TERMINAL_PWM_10 12
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_10 12
  
  #define CONTROLLINO_PIN_HEADER_PWM_11 13
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_11 13
  #define CONTROLLINO_SCREW_TERMINAL_PWM_11 13
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_OUT_11 13
  
  
  #define CONTROLLINO_RS485_TX 14
  
  #define CONTROLLINO_RS485_RX 15
  
  #define CONTROLLINO_UART_TX 16
  
  #define CONTROLLINO_UART_RX 17
  
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_16 18
  #define CONTROLLINO_PIN_HEADER_INT_00 18
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_16 18
  #define CONTROLLINO_SCREW_TERMINAL_INT_00 18
  
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_17 19
  #define CONTROLLINO_PIN_HEADER_INT_01 19
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_17 19
  #define CONTROLLINO_SCREW_TERMINAL_INT_01 19
  
  #define CONTROLLINO_PIN_HEADER_SDA 20
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_25 20
  
  #define CONTROLLINO_PIN_HEADER_SCL 21
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_24 21
  
  #define CONTROLLINO_RELAY_00 22
  
  #define CONTROLLINO_RELAY_01 23
  
  #define CONTROLLINO_RELAY_02 24
  
  #define CONTROLLINO_RELAY_03 25
  
  #define CONTROLLINO_RELAY_04 26
  
  #define CONTROLLINO_RELAY_05 27
  
  #define CONTROLLINO_RELAY_06 28
  
  #define CONTROLLINO_RELAY_07 29
  
  #define CONTROLLINO_RELAY_08 30
  
  #define CONTROLLINO_RELAY_09 31
  
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_12 42
  
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_13 43
  
  #define CONTROLLINO_PIN_HEADER_PWM_12 44
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_14 44
  
  #define CONTROLLINO_PIN_HEADER_PWM_13 45
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_15 45
  
  #define CONTROLLINO_PIN_HEADER_MISO 50
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_29 50
  
  #define CONTROLLINO_PIN_HEADER_MOSI 51
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_28 51
  
  #define CONTROLLINO_PIN_HEADER_SCK 52
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_27 52
  
  #define CONTROLLINO_PIN_HEADER_SS 53
  #define CONTROLLINO_PIN_HEADER_DIGITAL_OUT_26 53
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_00 54
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_00 54
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_00 54 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_00 54
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_00 54
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_00 54
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_01 55
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_01 55
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_01 55 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_01 55
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_01 55
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_01 55
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_02 56
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_02 56
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_02 56 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_02 56
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_02 56
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_02 56
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_03 57
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_03 57
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_03 57 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_03 57
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_03 57
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_03 57
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_04 58
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_04 58
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_04 58 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_04 58
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_04 58
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_04 58
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_05 59
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_05 59
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_05 59 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_05 59
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_05 59
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_05 59
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_06 60
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_06 60
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_06 60 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_06 60
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_06 60
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_06 60
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_07 61
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_07 61
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_07 61 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_07 61
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_07 61
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_07 61
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_08 62
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_08 62
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_08 62 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_08 62
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_08 62
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_08 62
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_09 63
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_09 63
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_ADC_IN_09 63 
  #define CONTROLLINO_SCREW_TERMINAL_ANALOG_ADC_IN_09 63
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_09 63
  #define CONTROLLINO_SCREW_TERMINAL_DIGITAL_IN_09 63
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_10 64
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_10 64
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_10 64
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_11 65
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_11 65
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_11 65
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_12 66
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_12 66
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_12 66
  
  #define CONTROLLINO_PIN_HEADER_ANALOG_ADC_IN_13 67
  #define CONTROLLINO_PIN_HEADER_DIGITAL_ADC_IN_13 67
  #define CONTROLLINO_PIN_HEADER_DIGITAL_IN_13 67
  
  #define CONTROLLINO_D0 2
  #define CONTROLLINO_D1 3
  #define CONTROLLINO_D2 4
  #define CONTROLLINO_D3 5
  #define CONTROLLINO_D4 6
  #define CONTROLLINO_D5 7
  #define CONTROLLINO_D6 8
  #define CONTROLLINO_D7 9
  #define CONTROLLINO_D8 10
  #define CONTROLLINO_D9 11
  #define CONTROLLINO_D10 12
  #define CONTROLLINO_D11 13
  #define CONTROLLINO_D12 42
  #define CONTROLLINO_D13 43
  #define CONTROLLINO_D14 44
  #define CONTROLLINO_D15 45
  #define CONTROLLINO_D16 46
  #define CONTROLLINO_D17 47
  #define CONTROLLINO_D18 48
  #define CONTROLLINO_D19 49
  
  #define CONTROLLINO_A0 54
  #define CONTROLLINO_A1 55
  #define CONTROLLINO_A2 56
  #define CONTROLLINO_A3 57
  #define CONTROLLINO_A4 58
  #define CONTROLLINO_A5 59
  #define CONTROLLINO_A6 60
  #define CONTROLLINO_A7 61
  #define CONTROLLINO_A8 62
  #define CONTROLLINO_A9 63
  #define CONTROLLINO_A10 64
  #define CONTROLLINO_A11 65
  #define CONTROLLINO_A12 66
  #define CONTROLLINO_A13 67
  #define CONTROLLINO_A14 68
  #define CONTROLLINO_A15 69
  #define CONTROLLINO_I16 38
  #define CONTROLLINO_I17 39
  #define CONTROLLINO_I18 40
  #define CONTROLLINO_IN0 18
  #define CONTROLLINO_IN1 19
  
  #define CONTROLLINO_MINUS 14
  #define CONTROLLINO_PLUS 15
  
  #define CONTROLLINO_R0 22
  #define CONTROLLINO_R1 23
  #define CONTROLLINO_R2 24
  #define CONTROLLINO_R3 25
  #define CONTROLLINO_R4 26
  #define CONTROLLINO_R5 27
  #define CONTROLLINO_R6 28
  #define CONTROLLINO_R7 29
  #define CONTROLLINO_R8 30
  #define CONTROLLINO_R9 31
  #define CONTROLLINO_R10 32
  #define CONTROLLINO_R11 33
  #define CONTROLLINO_R12 34
  #define CONTROLLINO_R13 35
  #define CONTROLLINO_R14 36
  #define CONTROLLINO_R15 37

#endif

/** @brief Initializes RTC library, SPI bus and RTC chip (RV-2123)
 *
 *  @param aChipSelect is ignored. Kept for backwards compatibility only.
 *  
 *  @return Always returns 0
 */
char Controllino_RTC_init(unsigned char aChipSelect);

/** @brief Sets time and date to the RTC chip (RV-2123)
 *
 *  See http://www.microcrystal.com/images/_Product-Documentation/02_Oscillator_&_RTC_Modules/02_Application_Manual/RV-2123-C2_App-Manual.pdf
 *  for more information.
 *
 *  @param aDay day 01 - 31
 *  @param aWeekDay weekday 00 - 06
 *  @param aMonth month 01 - 12
 *  @param aYear year 00 - 99
 *  @param aHour hours 01 - 12, or 00 - 23 (depending of 12H/24H mode)
 *  @param aMinute minutes 00 - 59
 *  @param aSecond seconds 00 - 59
 *  
 *  @return Returns 0 when succeeded, or -1 if the RTC library was not initialized before
 */
char Controllino_SetTimeDate(unsigned char aDay, unsigned char aWeekDay,unsigned char aMonth, unsigned char aYear, unsigned char aHour, unsigned char aMinute, unsigned char aSecond);

/** @brief Reads out the time and date from the RTC chip (RV-2123)
 *
 *  See http://www.microcrystal.com/images/_Product-Documentation/02_Oscillator_&_RTC_Modules/02_Application_Manual/RV-2123-C2_App-Manual.pdf
 *  for more information.
 *
 *  @param aDay pointer to day 01 - 31
 *  @param aWeekDay pointer to weekday 00 - 06
 *  @param aMonth pointer to month 01 - 12
 *  @param aYear pointer to year 00 - 99
 *  @param aHour pointer to hours 01 - 12, or 00 - 23 (depending of 12H/24H mode)
 *  @param aMinute pointer to minutes 00 - 59
 *  @param aSecond pointer to seconds 00 - 59
 *  
 *  @return Returns 0 when succeeded, or -1 if the RTC library was not initialized before
 */
char Controllino_ReadTimeDate(unsigned char *aDay, unsigned char *aWeekDay, unsigned char *aMonth, unsigned char *aYear, unsigned char *aHour, unsigned char *aMinute, unsigned char *aSecond);

/** @brief Reads out the day value from the RTC chip (RV-2123)
 *
 *  @return Returns day 01 - 31, or -1 if the RTC library was not initialized before
 */
char Controllino_GetDay( void );

/** @brief Reads out the weekday value from the RTC chip (RV-2123)
 *
 *  @return Returns weekday 00 - 06, or -1 if the RTC library was not initialized before
 */
char Controllino_GetWeekDay( void );

/** @brief Reads out the month value from the RTC chip (RV-2123)
 *
 *  @return Returns month 01 - 12, or -1 if the RTC library was not initialized before
 */
char Controllino_GetMonth( void );

/** @brief Reads out the year value from the RTC chip (RV-2123)
 *
 *  @return Returns year 00 - 99, or -1 if the RTC library was not initialized before
 */
char Controllino_GetYear( void );

/** @brief Reads out the hours value from the RTC chip (RV-2123)
 *
 *  @return Returns hours 01 - 12, or 00 - 23 (depending of 12H/24H mode), or -1 if the RTC library was not initialized before
 */
char Controllino_GetHour( void );

/** @brief Reads out the minutes value from the RTC chip (RV-2123)
 *
 *  @return Returns minutes 00 - 59, or -1 if the RTC library was not initialized before
 */
char Controllino_GetMinute( void );

/** @brief Reads out the seconds value from the RTC chip (RV-2123)
 *
 *  @return Returns seconds 00 - 59, or -1 if the RTC library was not initialized before
 */
char Controllino_GetSecond( void );

/** @brief Reads time and date from RTC chip and prints it on serial line
 *
 *  This function expects that the serial line was initialized before calling it.
 *  Format is DD/MM/YY   HH:MM:SS
 *
 *  @return Returns seconds 0, or -1 if the RTC library was not initialized before
 */
char Controllino_PrintTimeAndDate( void );

/** @brief Initialization of the SPI slave select pin for the RTC chip (RV-2123)
 *
 *  For experienced users only.
 *
 *  @return Returns 0 when succeeded, or -2 if there is not selected proper CONTROLLINO board
 */
char Controllino_RTCSSInit( void );

/** @brief Control of SPI slave select pin for the RTC chip (RV-2123)
 *
 *  @param mode 0 for RTC chip SPI bus disable, 1 for RTC SPI bus enable
 *
 *  @return Returns 0 when succeeded, -1 for unsupported mode, or -2 if there is not selected proper CONTROLLINO board
 */
char Controllino_SetRTCSS(char mode);

#if defined(CONTROLLINO_MAXI) || defined(CONTROLLINO_MEGA)
/** @brief Initialization of the RS485 bus
 *
 *  Serial3 still needs to be initialized separately. This only inits RE and DE pins.
 *
 *  @return Always returns 0 
 */
char Controllino_RS485Init( void );

/** @brief Control of RS485 bus RE signal 
 *
 *  @param mode 0 for RS485 Receive Enable Active, 1 for Receive Enable Inactive 
 *
 *  @return Returns 0 when succeeded, -1 for unsupported mode
 */
char Controllino_SwitchRS485RE(char mode);

/** @brief Control of RS485 bus DE signal 
 *
 *  @param mode 0 for RS485 Data transmission Enable Inactive, 1 for Data transmission Enable Active
 *
 *  @return Returns 0 when succeeded, -1 for unsupported mode
 */
char Controllino_SwitchRS485DE(char mode);

#endif



#endif