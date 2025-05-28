int printf(const char *, ...);
union {
  int a;
  signed b : 18;
} const c[][1] = {{}, 770320};
int main() {
  int d = 0;
  for (; d < 2; d++) {
    printf("", c[d][0].a);
    printf("%d\n", c[d][0].b);
  }
  return 0;
}
