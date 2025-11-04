#include <stdio.h>
#include <stdlib.h>

#define SCANF_SUCCESS 1

int main(void) {
  int solution = arc4random() % 100;

  printf("Ich denke an eine Zahl zwischen 0 und 100");
  printf("\n");

  for (;;) {
    int guess;

    printf("Rate mal: ");
    fflush(stdout);

    int exit_code = scanf("%d", &guess);
    if (exit_code != SCANF_SUCCESS) {
      return exit_code;
    }

    if (guess == solution) {
      printf("Richtige Antwort! Die Zahl war %d\n", solution);
      break;
    } else {
      if (guess < solution) {
        printf("Deine Antwort %d ist zu klein!\n", guess);
      } else {
        if (guess > solution) {
          printf("Deine Antwort %d ist zu groß!\n", guess);
        }
      }
    }
  }

  return 0;
}
