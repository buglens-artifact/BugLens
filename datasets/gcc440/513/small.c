int printf(const char *, ...);
union {
  long a : 15;
  short b;
} c[] = {-10L};
int main() {
  printf("%d\n", c[0].a, c[0].b);
  return 0;
}
