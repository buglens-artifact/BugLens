int printf(const char *, ...);
union {
  int a;
  signed b : 17;
} const c = {601485};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
