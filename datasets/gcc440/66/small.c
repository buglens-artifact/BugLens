int printf(const char *, ...);
union {
  signed a : 17;
  int b;
} static c = {92067};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
