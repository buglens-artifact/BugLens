int printf(const char *, ...);
union {
  char a;
  signed b : 3;
} const c = {10};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
