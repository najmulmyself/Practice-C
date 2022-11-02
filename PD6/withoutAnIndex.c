#include <stdio.h>
int main() {
  int n, a[5];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    printf("%d - ", a[i]);
    for (int j = 0; j < n; j++) {
      if (a[i] == a[j]) {
        continue;
      } else {
        printf("%d ", a[j]);
      }
    }
    printf("\n");
  }
}