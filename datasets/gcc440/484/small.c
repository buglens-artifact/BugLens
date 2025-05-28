int printf(const char *, ...);
union {
  int a;
  signed b : 18;
} static c = {372419};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
