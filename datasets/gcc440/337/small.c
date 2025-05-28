int printf(const char *, ...);
union {
  short a;
  unsigned b : 12;
} static c = {-9L};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
