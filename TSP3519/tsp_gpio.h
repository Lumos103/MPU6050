#ifndef _TSP_GPIO_H
#define _TSP_GPIO_H

#include "ti_msp_dl_config.h"

// GPIO inputs on system board
// S0 - PA18/BSL  (rename S1 to S0)
#define S0()				DL_GPIO_readPins(PORTA_PORT, PORTA_S0_PIN)

// GPIO outputs on system board
// LED - PB5
// CCD_SI1 - PC9; CCD_CLK1 - PB20; CCD_SI2 - PC4; CCD_CLK2 - PC5
#define LED_ON()			DL_GPIO_clearPins(PORTB_PORT, PORTB_LED_PIN)
#define LED_OFF()			DL_GPIO_setPins(PORTB_PORT, PORTB_LED_PIN)
#define LED_TOGGLE()		DL_GPIO_togglePins(PORTB_PORT, PORTB_LED_PIN)
#define CCD_SI1_HIGH		DL_GPIO_setPins(PORTC_PORT, PORTC_CCD_SI1_PIN)
#define CCD_SI1_LOW		DL_GPIO_clearPins(PORTC_PORT, PORTC_CCD_SI1_PIN)
#define CCD_SI2_HIGH		DL_GPIO_setPins(PORTC_PORT, PORTC_CCD_SI2_PIN)
#define CCD_SI2_LOW		DL_GPIO_clearPins(PORTC_PORT, PORTC_CCD_SI2_PIN)
#define CCD_CLK1_HIGH	DL_GPIO_setPins(PORTB_PORT, PORTB_CCD_CLK1_PIN)
#define CCD_CLK1_LOW		DL_GPIO_clearPins(PORTB_PORT, PORTB_CCD_CLK1_PIN)
#define CCD_CLK2_HIGH	DL_GPIO_setPins(PORTC_PORT, PORTC_CCD_CLK2_PIN)
#define CCD_CLK2_LOW		DL_GPIO_clearPins(PORTC_PORT, PORTC_CCD_CLK2_PIN)

// GPIO inputs on companion board: S0-BSL
// S1 - PC0; S2 - PA16; PUSH - PA12; PHA0 - PA14; PHB0 - PA15; FAULT - PA7
#define S1()				DL_GPIO_readPins(PORTC_PORT, PORTC_S1_PIN)
#define S2()				DL_GPIO_readPins(PORTA_PORT, PORTA_S2_PIN)
#define PUSH()				DL_GPIO_readPins(PORTA_PORT, PORTA_PUSH_PIN)
//encoder yet to be revised (interrupt)
#define PHA0()				DL_GPIO_readPins(PORTA_PORT, PORTA_PHA0_PIN)
#define PHB0()				DL_GPIO_readPins(PORTA_PORT, PORTA_PHB0_PIN)
#define FAULT()			DL_GPIO_readPins(PORTA_PORT, PORTA_FAULT_PIN)

// GPIO outputs on companion board
// BUZZ - PA13; SLEEP - PB1;
// LCD_RST - PA8; LCD_BL - PA9; LCD_CS - PB28; LCD_DC - PB29
#define BUZZ_ON()			DL_GPIO_setPins(PORTA_PORT, PORTA_BUZZ_PIN)
#define BUZZ_OFF()		DL_GPIO_clearPins(PORTA_PORT, PORTA_BUZZ_PIN)
#define BUZZ_TOGGLE()	DL_GPIO_togglePins(PORTA_PORT, PORTA_BUZZ_PIN)
//To wake up the 2 motors from low-power mode, SLEEP must be high
#define SLEEP_HIGH()		DL_GPIO_setPins(PORTB_PORT, PORTB_SLEEP_PIN)
#define SLEEP_LOW()		DL_GPIO_clearPins(PORTB_PORT, PORTB_SLEEP_PIN)
#define LCD_BL_ON()		DL_GPIO_setPins(PORTA_PORT, PORTA_LCD_BL_PIN)
#define LCD_BL_OFF()		DL_GPIO_clearPins(PORTA_PORT, PORTA_LCD_BL_PIN);
#define LCD_BL_TOGGLE()	DL_GPIO_togglePins(PORTA_PORT, PORTA_LCD_BL_PIN);
#define LCD_CS_LOW()		DL_GPIO_clearPins(PORTB_PORT, PORTB_LCD_CS_PIN)
#define LCD_CS_HIGH()	DL_GPIO_setPins(PORTB_PORT, PORTB_LCD_CS_PIN)
#define LCD_DC_LOW()		DL_GPIO_clearPins(PORTB_PORT, PORTB_LCD_DC_PIN)
#define LCD_DC_HIGH()	DL_GPIO_setPins(PORTB_PORT, PORTB_LCD_DC_PIN)
#define LCD_RST_LOW()	DL_GPIO_clearPins(PORTA_PORT, PORTA_LCD_RST_PIN)
#define LCD_RST_HIGH()	DL_GPIO_setPins(PORTA_PORT, PORTA_LCD_RST_PIN)

#endif