int printf(const char *, ...);
union {
  int a;
  unsigned b : 27;
} c[] = {294967288};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
