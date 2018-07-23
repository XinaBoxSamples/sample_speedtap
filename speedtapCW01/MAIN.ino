void main_code(void) {

  float magnitude = 0;
  boolean pause = true;
  int tapcount = 0;
  for (int i = 0; i < 10; i++) {
    SI01.poll();
    magnitude = pow(SI01.getAX(), 2) + pow(SI01.getAY(), 2) + pow(SI01.getAZ(), 2);
    if (magnitude > 1 && pause) {
      tapcount += 1;
      pause = false;
    }
    if (magnitude < 1 ) pause = true;
    //delay(100);
  }
  if (tapcount == 0) {
    digitalWrite(CW01_BLUE, HIGH);
    digitalWrite(CW01_RED, LOW);
    digitalWrite(CW01_GREEN, LOW);
  }

  else if (tapcount == 1) {
    digitalWrite(CW01_RED, HIGH);
    digitalWrite(CW01_BLUE, LOW);
    digitalWrite(CW01_GREEN, LOW);
  } else {
    digitalWrite(CW01_RED, LOW);
    digitalWrite(CW01_BLUE, LOW);
    digitalWrite(CW01_GREEN, LOW);

  }




  //OD01.println(magnitude);

  OD01.set2X();
  OD01.println("SPEED TAP!!!");
  OD01.set1X();
  OD01.println("Tap fast to beat ");
  OD01.println("the time limit!");
  OD01.println("");
  OD01.set2X();
  OD01.println(     tapcount);
  //delay(3000);
}







