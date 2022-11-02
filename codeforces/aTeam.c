#include <stdio.h>
int main() {

  int n, a, b, c, count = 0;
  scanf("%d\n", &n);

  for (int i = 1; i <= n; i++) {
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ((a && b) || (a && c) || (b && c)) {
      count++;
    }
  }
  printf("%d", count);

  return 0;
}