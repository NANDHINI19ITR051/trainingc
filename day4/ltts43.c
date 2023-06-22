/******************************************************************************

Write a program using structures to calculate 
the difference between two time periods using a user-defined function.

*******************************************************************************/

#include <stdio.h>

struct time {
  int hour;
  int min;
  int sec;
};

void diff_between_time(struct time t1, struct time t2, struct time *diff) {
  int dif_hours = t2.hour - t1.hour;
  int dif_mins = t2.min - t1.min;
  int dif_secs = t2.sec - t1.sec;

  if (dif_secs < 0) {
    dif_secs += 60;
    dif_mins--;
  }

  if (dif_mins < 0) {
    dif_mins += 60;
    dif_hours--;
  }

  dif->hour = dif_hours;
  dif->min = dif_mins;
  dif->sec = dif_secs;
}

int main() {
  struct time t1 = {10, 30, 10};
  struct time t2 = {11, 20, 30};
  struct time dif;

  diff_between_time(t1, t2, &dif);

  printf("The difference between the two time periods is: %d:%d:%d\n", dif.hour, dif.min, dif.sec);

  return 0;
}

