/*********************************************************************
 * io_cfg.h
 ********************************************************************/

#ifndef IO_CFG_H
#define IO_CFG_H

//***********************************************************
//* Includes
//***********************************************************

#include "typedefs.h"

//***********************************************************
//* Compilation options
//***********************************************************
//
// Type of model (Choose one)
#define STANDARD			// Standard aeroplane config
//#define FWING				// Flying Wing config
//#define STD_FLAPERON		// Standard aeroplane config with separate aileron control - needs CPPM

// Board orientation options
//#define VERTICAL			// Mount PCB vertically with arrow facing upwards and pitch gyro aft.

// Optional extensions (Choose where fitted)
//#define CPPM_MODE 		// Uncomment this for PPM support on CH2 (elevator)
//#define ACCELEROMETER		// Uncomment this when using an accelerometer module (enables autolevel if CPPM, removes pots)
//#define MEMS_MODULE 		// Uncomment this when using the MEMS module (MEMS gyros are reversed)
//#define CAMERA			// Uncomment this for using M4 to M6 for camera control (TBD)

//***********************************************************
//* Pin definitions
//***********************************************************

#define RX_ROLL			REGISTER_BIT(PIND,1)
#define RX_PITCH		REGISTER_BIT(PIND,2)
#define RX_COLL			REGISTER_BIT(PIND,3)
#define RX_YAW			REGISTER_BIT(PINB,7)
#define RX_ROLL_DIR 	REGISTER_BIT(DDRD,1)
#define RX_PITCH_DIR 	REGISTER_BIT(DDRD,2)
#define RX_COLL_DIR 	REGISTER_BIT(DDRD,3)
#define RX_YAW_DIR 		REGISTER_BIT(DDRB,7)

#define	GYRO_ROLL 		REGISTER_BIT(PINC,2)
#define GYRO_PITCH 		REGISTER_BIT(PINC,1)
#define GYRO_YAW 		REGISTER_BIT(PINC,0)
#define	GYRO_ROLL_DIR 	REGISTER_BIT(DDRC,2)
#define GYRO_PITCH_DIR 	REGISTER_BIT(DDRC,1)
#define GYRO_YAW_DIR	REGISTER_BIT(DDRC,0)

#define	GAIN_ROLL 		REGISTER_BIT(PINC,3)
#define GAIN_PITCH 		REGISTER_BIT(PINC,4)
#define GAIN_YAW 		REGISTER_BIT(PINC,5)
#define	GAIN_ROLL_DIR 	REGISTER_BIT(DDRC,3)
#define GAIN_PITCH_DIR 	REGISTER_BIT(DDRC,4)
#define GAIN_YAW_DIR	REGISTER_BIT(DDRC,5)

#define M1				REGISTER_BIT(PORTB,2)
#define M2				REGISTER_BIT(PORTB,1)
#define M3				REGISTER_BIT(PORTB,0)
#define M4				REGISTER_BIT(PORTD,7)
#define M5				REGISTER_BIT(PORTD,6)
#define M6				REGISTER_BIT(PORTD,5)

#define M1_DIR 			REGISTER_BIT(DDRB,2)
#define M2_DIR 			REGISTER_BIT(DDRB,1)
#define M3_DIR 			REGISTER_BIT(DDRB,0)
#define M4_DIR 			REGISTER_BIT(DDRD,7)
#define M5_DIR 			REGISTER_BIT(DDRD,6)
#define M6_DIR 			REGISTER_BIT(DDRD,5)

#define THR				REGISTER_BIT(PORTD,3)	// THR output for throttle
#define THR_DIR 		REGISTER_BIT(DDRD,3)

#define LED 			REGISTER_BIT(PORTB,6)
#define LED_DIR 		REGISTER_BIT(DDRB,6)

#define LCD_TX 			REGISTER_BIT(PORTB,4)
#define LCD_TX_DIR		REGISTER_BIT(DDRB,4)

#define LVA				REGISTER_BIT(PORTD,4)	// LVA analog input
#define LVA_DIR			REGISTER_BIT(DDRD,4)

//***********************************************************

enum GyroArrayIndex { ROLL = 0, PITCH, YAW, ALT };
enum ADCInputs {YAW_GYRO = 0, PITCH_GYRO, ROLL_GYRO, ROLL_POT, PITCH_POT, YAW_POT, VBAT };
enum GyroDirection {GYRO_NORMAL = 0, GYRO_REVERSED};

#endif //IO_CFG_H
