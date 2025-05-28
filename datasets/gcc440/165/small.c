int printf(const char *, ...);
union {
  int a;
  signed b : 28;
} const c = {187203035};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
