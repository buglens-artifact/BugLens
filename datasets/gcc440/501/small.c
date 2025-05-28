int printf(const char *, ...);
union {
  short a;
  unsigned b : 9;
} static c = {4012};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
