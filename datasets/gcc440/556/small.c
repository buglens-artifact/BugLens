int printf(const char *, ...);
union {
  int a;
  signed b : 24;
} static c = {8889424};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
