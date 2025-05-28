int printf(const char *, ...);
union {
  int a;
  unsigned b : 23;
} const c = {9811914};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
