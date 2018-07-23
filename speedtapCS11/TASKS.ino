void TaskScheduler(void) {
//  red_fade(30, RED, 255, 5);
//  blue_fade(60, BLUE, 255, 5);
//  green_fade(90, GREEN, 255, 5);

    if ((millis() - t.tick_main) > 1000) {
      OD01.clear();
      main_code();
      t.tick_main = millis();
    }


  if ((millis() - t.tick_poll) > 30) {
    //poll sensor
    SI01.poll();
    t.tick_poll = millis();
  }

}
