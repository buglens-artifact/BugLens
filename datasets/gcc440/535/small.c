int printf(const char *, ...);
union {
  int a;
  unsigned b : 22;
} c[] = {50739498};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
