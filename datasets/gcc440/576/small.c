int printf(const char *, ...);
union {
  int a;
  signed b : 31;
} c[] = {2467213053};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
