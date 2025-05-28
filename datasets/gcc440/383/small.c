int printf(const char *, ...);
union {
  int a;
  signed b : 22;
} c[] = {7551619};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
