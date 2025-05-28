int printf(const char *, ...);
union {
  long a : 30;
  int b;
} static c = {446744073709551615};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
