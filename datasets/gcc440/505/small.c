int printf(const char *, ...);
union {
  unsigned a;
  signed b : 21;
} static c = {2508568};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
