int printf(const char *, ...);
union {
  short a;
  unsigned b : 10;
} const c = {7289};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
