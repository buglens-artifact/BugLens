int printf(const char *, ...);
union {
  long a : 11;
  short b;
} const c = {4008};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
