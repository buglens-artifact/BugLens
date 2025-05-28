int printf(const char *, ...);
union {
  int a;
  unsigned b : 25;
} c[] = {114156712};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
