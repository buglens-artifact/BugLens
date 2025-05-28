int printf(const char *, ...);
union {
  int a;
  signed b : 25;
} c[] = {77711497};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
