#define RELAY_1_PIN     4
#define RELAY_2_PIN     3
#define LED_PIN         13
#define ON              1
#define OFF             0

void setup() 
{
  Serial.begin(9600);
  pinMode(RELAY_1_PIN, OUTPUT);
  pinMode(RELAY_2_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, ON);
  Serial.println("Relay 1 ON");
  digitalWrite(RELAY_1_PIN, ON);
  delay(2000);
  Serial.println("Relay 1 OFF");
  digitalWrite(RELAY_1_PIN, OFF);
  delay(2000);

  Serial.println("Relay 2 ON");
  digitalWrite(RELAY_2_PIN, ON);
  delay(2000);
  Serial.println("Relay 2 OFF");
  digitalWrite(RELAY_2_PIN, OFF);
  digitalWrite(LED_PIN, OFF);
  delay(2000);

}
