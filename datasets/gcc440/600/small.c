int printf(const char *, ...);
union {
  signed a : 31;
  int b;
} static c = {1106409561};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
