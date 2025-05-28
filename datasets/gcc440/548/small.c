int printf(const char *, ...);
union {
  unsigned a : 8;
  signed b : 4;
} static c = {9};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
