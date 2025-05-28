int printf(const char *, ...);
union {
  long a : 20;
  int b;
} c[] = {-6L};
int main() {
  printf("%d\n", c[0].a, c[0].b);
  return 0;
}
