int printf(const char *, ...);
union {
  int a;
  unsigned b : 27;
} static c = {46744073709551615};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
