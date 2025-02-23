#include "Board.h"

void boardInit()
{
  pinMode(RELAY_1_GPIO, OUTPUT);
  pinMode(RELAY_2_GPIO, OUTPUT);
  pinMode(IR_1_GPIO, INPUT);
  pinMode(IR_2_GPIO, INPUT);
  pinMode(LED_PIN, OUTPUT);
}
void Relay_1(int cmd)
{
  digitalWrite(RELAY_1_GPIO, cmd);
}
void Relay_2(int cmd)
{
  digitalWrite(RELAY_2_GPIO, cmd);
}
void LedCtrl(int cmd)
{
  digitalWrite(LED_PIN, cmd);
}
