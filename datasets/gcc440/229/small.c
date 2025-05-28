int printf(const char *, ...);
union {
  int a;
  unsigned b : 31;
} static c = {4294967295};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
