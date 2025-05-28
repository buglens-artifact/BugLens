int printf(const char *, ...);
union {
  int a;
  signed b : 23;
} const c[] = {9023910};
int main() {
  int d = 0;
  for (; d < 1; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
