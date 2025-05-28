int printf(const char *, ...);
union {
  int a;
  signed b : 24;
} const c = {23265152};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
