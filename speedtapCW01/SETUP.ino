void setup_program(void) {
  // disable wifi
  WiFi.forceSleepBegin();

  // set and start i2c bus
  Wire.begin(2, 14);

  // start sensor
  SI01.begin();
  //SI01.setSensitivity(1,NULL,NULL);

  // start oled
  OLED.begin();

  // clear oled
  OD01.clear();

  // set output leds
  pinMode(CW01_RED, OUTPUT);
  pinMode(CW01_GREEN, OUTPUT);
  pinMode(CW01_BLUE, OUTPUT);

  // turn rgb on
  digitalWrite(CW01_RED, HIGH);
  digitalWrite(CW01_GREEN, HIGH);
  digitalWrite(CW01_BLUE, HIGH);


  // turn rgb off
  digitalWrite(CW01_RED, LOW);
  digitalWrite(CW01_GREEN, LOW);
  digitalWrite(CW01_BLUE, LOW);

//  delay(100);
  t.tick_main = millis();
  t.tick_poll = millis();
  t.tick_display = millis();
}

