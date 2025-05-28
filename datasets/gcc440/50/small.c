int printf(const char *, ...);
union {
  signed a : 24;
  int b;
} const c = {12668387};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
