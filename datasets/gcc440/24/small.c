int printf(const char *, ...);
union {
  signed a : 7;
  char b;
} const c = {68};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
