#ifndef timer_h
#define timer_h

struct TIMER_CTRL {
  unsigned long tick_main;
  unsigned long tick_poll;
  unsigned long tick_display;
} t;

#endif

