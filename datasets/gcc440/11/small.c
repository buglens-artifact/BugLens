int printf(const char *, ...);
union {
  int a;
  signed b : 29;
} const c = {991714029};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
