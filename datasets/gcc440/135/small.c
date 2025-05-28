int printf(const char *, ...);
union {
  char a;
  signed b : 7;
} const c = {85};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
