int printf(const char *, ...);
union {
  signed a;
  signed b : 19;
} const c = {668617};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
