int printf(const char *, ...);
union {
  signed a : 5;
  char b;
} const c = {178};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
