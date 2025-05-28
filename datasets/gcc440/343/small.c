int printf(const char *, ...);
union {
  int a;
  unsigned b : 23;
} c[] = {-3L};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
