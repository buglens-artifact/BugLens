int printf(const char *, ...);
union {
  int a;
  unsigned b : 18;
} const c[] = {-2L};
int main() {
  int d = 0;
  for (; d < 1; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
