int printf(const char *, ...);
union {
  unsigned a : 14;
  signed b : 11;
} static c = {4967288};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
