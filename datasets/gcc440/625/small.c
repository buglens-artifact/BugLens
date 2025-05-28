int printf(const char *, ...);
union {
  signed a;
  unsigned b : 30;
} static c = {2145869308};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
