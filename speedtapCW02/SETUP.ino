void setup_program(void) {
  // set and start i2c bus
  Wire.begin(21, 22);

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

