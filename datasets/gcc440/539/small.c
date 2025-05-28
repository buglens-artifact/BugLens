int printf(const char *, ...);
union {
  int a;
  unsigned b : 28;
} c[] = {322289619};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
