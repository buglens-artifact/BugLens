int printf(const char *, ...);
union {
  int a;
  unsigned b : 19;
} const c = {534491};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
