int main(int argc, char **argv) {
  for (int y = 1; y <= SIZE; y++) {
    for (int x = 1; x <= SIZE; x++) {
      if (is_in_rect(x, y, 2, 2, 6, 5) || is_in_rect(x, y, 4, 3, 8, 7)) {
        printf("* ");
      } else {
        printf(". ");
      }
    }

    printf("\n");
  }

  return 0;
}
