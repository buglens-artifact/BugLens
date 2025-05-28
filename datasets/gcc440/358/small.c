int printf(const char *, ...);
union {
  short a;
  unsigned b : 15;
} const c[] = {45632};
int main() {
  int d = 0;
  for (; d < 1; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
