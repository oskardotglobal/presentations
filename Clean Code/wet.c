int main(int argc, char **argv) {
  char grid[SIZE][SIZE];

  for (int y = 1; y <= SIZE; y++) {
    for (int x = 1; x <= SIZE; x++) {
      if (is_in_rect(x, y, 2, 2, 6, 5) || is_in_rect(x, y, 4, 3, 8, 7)) {
        grid[y - 1][x - 1] = '*';
        continue;
      }

      grid[y - 1][x - 1] = '.';
    }
  }

  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      printf("%c ", grid[i][j]);
    }

    printf("\n");
  }

  return 0;
}
