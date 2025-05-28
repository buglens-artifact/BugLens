int printf(const char *, ...);
union {
  signed a;
  unsigned b : 17;
} c[] = {824690};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
