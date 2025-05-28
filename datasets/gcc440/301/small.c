int printf(const char *, ...);
union {
  unsigned a : 13;
  signed b : 9;
} static c = {4073709551613};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
