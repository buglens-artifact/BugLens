int printf(const char *, ...);
union {
  char a;
  signed b : 4;
} const c = {12};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
