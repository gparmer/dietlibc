#include <stdio.h>
#include <stdlib.h>
#include <write12.h>

void die(const char* message) {
  __write2(message);
  exit(1);
}

main() {
  char buf[100]="fnord";
  strncat(buf,"foo",0);
  if (strcmp(buf,"fnord")) die("strncat did not work for length 0");
  strncat(buf,"foo",2);
  if (strcmp(buf,"fnordfo")) die("strncat did not copy n bytes");
  return 0;
}