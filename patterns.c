#include<stdio.h>

#include<cs50.h>

void pyramid_one(int);
void pyramid_two(int);

void pyramid_one(int n) {
  for (int i = n; i >= 1; i--) {
    for (int j = i; j > 0; j--) {
      printf("#");
    }
    printf("\n");
  }
}

void pyramid_two(int n) {
  for (int i = 1; i <= n; i++) {
    for (int k = n - i; k > 0; k--) {
      printf(" ");
    }
    for (int j = 1; j <= i; j++) {
      printf("#");
    }
    printf("\n");
  }
}

int main(void) {
  int ch = get_int("Enter type of pattern (1 or 2):");
  if (ch == 1) {
    int row = get_int("enter no of rows: ");
    printf("\n");
    pyramid_one(row);
  } else {
    if (ch == 2) {

      int row = get_int("enter no of raws: ");
      pyramid_two(row);
    }
  }

  return 0;

}
