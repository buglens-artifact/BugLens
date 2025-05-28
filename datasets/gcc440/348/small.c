int printf(const char *, ...);
union {
  unsigned a;
  unsigned b : 26;
} c = {228116528};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
