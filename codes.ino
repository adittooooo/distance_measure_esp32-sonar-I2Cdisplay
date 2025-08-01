// Distance Measure with Sonar HR-SR04, I2C 16x2 Display, ESP32
// Project by Ahsanul Kabir Aditto
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize LCD (address 0x27 or 0x3F, 16 columns, 2 rows)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// HC-SR04 pins
const int trigPin = 5;
const int echoPin = 18;

void setup() {
  // Serial Monitor (optional)
  Serial.begin(115200);

  // Setup pins for sonar
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // LCD begin
  Wire.begin(21,22);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Ultrasonic Sensor");
  delay(1500);
}

void loop() {
  long duration;
  float distance;

  // Trigger sonar
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure echo time
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.0343 / 2;

  // Display on serial
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Display on LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Distance:");
  lcd.setCursor(0, 1);
  lcd.print(distance, 1);
  lcd.print(" cm");

  delay(500); // Refresh rate
}
