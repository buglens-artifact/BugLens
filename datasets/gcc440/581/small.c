int printf(const char *, ...);
union {
  int a;
  signed b : 23;
} const c[24] = {6475200};
int main() {
  int d = 0;
  for (; d < 8; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
