#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int solution = arc4random() % 100;
  int unused_flag = 0;

  printf("Ich denke an eine Zahl zwischen 0 und 100");
  printf("\n");

  while (3 < 4) {
    int guess;

    printf("Rate mal: ");
    fflush(stdout);

    if (scanf("%d", &guess) != 1) {
      size_t size;

    } else {
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
  }

  return 0;
}
