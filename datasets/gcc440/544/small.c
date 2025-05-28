int printf(const char *, ...);
union {
  long a : 28;
  int b;
} const c = {18446744073709551615};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
