#include <stdio.h>

int main(void) {

  char answer[20];

  printf("What is your name?\n");
  gets(answer);

  printf("Hello, %s", answer);

}
