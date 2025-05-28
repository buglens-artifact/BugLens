int printf(const char *, ...);
int b, a;
int main() {
  int *c = &b;
  if (-(&b == c) >> 3)
    printf("%d\n", a);
  return 0;
}
