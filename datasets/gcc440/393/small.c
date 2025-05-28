int printf(const char *, ...);
union {
  char a;
  unsigned b : 6;
} static c[72] = {-9L};
int main() {
  int d = 0;
  for (; d < 8; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
