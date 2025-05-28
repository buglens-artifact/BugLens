int printf(const char *, ...);
union {
  int a;
  signed b : 27;
} const c = {77224987};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
