/* plik glowny.c */
int main() {
  hej();
  return 0;
}

/* plik biblioteka.c */
#include <stdio.h>
void hej(void) {
  printf("hello world\n");
}
