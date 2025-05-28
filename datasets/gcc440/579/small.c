int printf(const char *, ...);
union {
  int a;
  unsigned b : 23;
} c = {9123991};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
