int printf(const char *, ...);
union {
  int a;
  signed b : 18;
} const c = {667714};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
