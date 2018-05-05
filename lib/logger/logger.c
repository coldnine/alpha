#include "../logger.h"

int log(char *type, char *str) {
  to_uppercase(type);
  puts("[");

  if (strcmp(type, "OK")) {
    puts_color(" OK ", VGA_COLOR_GREEN, VGA_COLOR_BLACK);
  } else if (strcmp(type, "warn")) {
    puts_color("WARN", VGA_COLOR_BROWN, VGA_COLOR_BLACK);
  } else if (strcmp(type, "FAIL")) {
    puts_color("FAIL", VGA_COLOR_RED, VGA_COLOR_BLACK);
  } else {
    puts(type);
  }

  printf("] %s\n", str);
}
