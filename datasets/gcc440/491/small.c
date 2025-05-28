int printf(const char *, ...);
union {
  int a;
  unsigned b : 22;
} c[] = {4967295};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
