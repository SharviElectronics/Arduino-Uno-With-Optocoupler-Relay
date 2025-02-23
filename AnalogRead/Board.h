#ifndef BOARD_HEADER
#define BOARD_HEADER

#include <Arduino.h>

#define LED_PIN				  13
#define RELAY_1_GPIO          4
#define RELAY_2_GPIO          3
#define GPIO_1                8
#define GPIO_2                5
#define GPIO_3                6
#define GPIO_4                7

#define ADC_1_GPIO            A0
#define ADC_2_GPIO            A1
#define ADC_3_GPIO            A2

#define IR_1_GPIO             10
#define IR_2_GPIO             9

#define MISO_GPIO             12
#define MOSI_GPIO             11
#define CLK_GPIO              13
#define SS_GPIO

#define ON                    HIGH
#define OFF                   LOW

void Relay_1(int cmd);
void Relay_2(int cmd);
void boardInit();
#endif
