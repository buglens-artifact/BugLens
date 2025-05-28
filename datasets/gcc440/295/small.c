int printf(const char *, ...);
union {
  short a;
  signed b : 10;
} static c = {3129};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
