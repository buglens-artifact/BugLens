int printf(const char *, ...);
union {
  int a;
  unsigned b : 20;
} c[] = {4073709551615};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
