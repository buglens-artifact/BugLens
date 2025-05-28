int printf(const char *, ...);
union {
  int a;
  unsigned b : 19;
} c[] = {5373476};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
