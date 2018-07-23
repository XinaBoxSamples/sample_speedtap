void setup_program(void) {
  
 #ifdef ESP8266 //CW01
  Wire.pins(2, 14);
  Wire.setClockStretchLimit(15000);
  Serial.begin (76800);

#elif ESP32  //CW02
  //Wire.pins(21, 22);
  Serial.begin (115200);

#elif SAMD_ZERO //CC03 and CS11
  Serial.begin (115200);

#endif

  // set and start i2c bus
  Wire.begin();

  // start sensor
  SI01.begin();
  //SI01.setSensitivity(1,NULL,NULL);

  // start oled
  OLED.begin();

  // clear oled
  OD01.clear();

  // set output leds
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  // turn rgb on
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);


  // turn rgb off
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);

//  delay(100);
  t.tick_main = millis();
  t.tick_poll = millis();
  t.tick_display = millis();
}

