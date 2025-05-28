int printf(const char *, ...);
union {
  long a : 31;
  int b;
} c[] = {-9L};
int main() {
  printf("%d\n", c[0].a, c[0].b);
  return 0;
}
