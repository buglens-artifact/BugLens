int printf(const char *, ...);
union {
  int a;
  signed b : 21;
} const c = {1069900};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
