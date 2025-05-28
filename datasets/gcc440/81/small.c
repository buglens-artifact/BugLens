int printf(const char *, ...);
union {
  int a;
  signed b : 26;
} const c = {73931793};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
