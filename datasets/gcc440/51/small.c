int printf(const char *, ...);
union {
  int a;
  signed b : 19;
} const c = {359038};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
