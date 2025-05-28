int printf(const char *, ...);
union {
  int a;
  unsigned b : 26;
} static c = {4073709551610};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
