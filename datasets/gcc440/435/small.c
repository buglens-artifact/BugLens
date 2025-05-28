int printf(const char *, ...);
union {
  int a : 5;
  char b;
} const c = {92};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
