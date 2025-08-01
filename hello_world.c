#include <cs50.h>
#include "./libcs50-11.0.3/src/cs50.h"
#include <stdio.h>

int main(void) {
  string answer = get_string("What is your name? ");
  printf("Hello %s\n", answer);
  return 0;
}
