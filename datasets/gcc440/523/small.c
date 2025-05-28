int printf(const char *, ...);
union {
  int a;
  unsigned b : 24;
} c[] = {91887654};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
