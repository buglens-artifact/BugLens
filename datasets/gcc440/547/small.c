int printf(const char *, ...);
union {
  int a : 10;
  unsigned b : 16;
} c[] = {-1L};
int main() {
  printf("%d\n", c[0].a, c[0].b);
  return 0;
}
