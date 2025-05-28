int printf(const char *, ...);
union {
  int a;
  unsigned b : 17;
} c[] = {843038};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
