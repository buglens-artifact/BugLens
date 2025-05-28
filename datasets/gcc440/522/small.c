int printf(const char *, ...);
union {
  signed a : 23;
  int b;
} const c = {21614866};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
