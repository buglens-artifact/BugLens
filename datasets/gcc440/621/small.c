int printf(const char *, ...);
union {
  int a;
  unsigned b : 21;
} static c = {2354629};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
