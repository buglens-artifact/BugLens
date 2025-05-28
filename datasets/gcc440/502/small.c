int printf(const char *, ...);
union {
  int a;
  signed b : 19;
} c[] = {712053};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
