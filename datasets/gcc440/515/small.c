int printf(const char *, ...);
union {
  int a;
  signed b : 22;
} c[][1] = {{}, 4753731};
int d;
int main() {
  for (; d < 2; d++)
    printf("%d\n", c[d][0].a, c[d][0].b);
  return 0;
}
