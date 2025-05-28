int printf(const char *, ...);
union {
  char a;
  unsigned b : 6;
} const c = {207};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
