int printf(const char *, ...);
union {
  signed a : 2;
  char b;
} static c = {2};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
