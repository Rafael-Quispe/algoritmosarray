#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int list[n];
  for (int i = 0; i < n; i++) {
  list[i] = rand() % 100;
  printf("%d ", list[i]);
}
printf("\n");

double sum = 0.0;
for (int i = 0; i < n; i++) {
  sum += list[1];
}
  printf("%.2f\n", sum/n);

  return 0;
}
