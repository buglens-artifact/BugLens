int printf(const char *, ...);
union {
  int a;
  unsigned b : 24;
} const c = {62847489};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
