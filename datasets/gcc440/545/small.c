int printf(const char *, ...);
union {
  signed a : 5;
  unsigned b : 3;
} c[] = {7293};
int main() {
  printf("%d\n", c[0].a, c[0].b);
  return 0;
}
