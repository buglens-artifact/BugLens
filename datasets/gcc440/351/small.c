int printf(const char *, ...);
union {
  char a;
  signed b : 6;
} c = {101};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
