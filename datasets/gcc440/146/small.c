int printf(const char *, ...);
union {
  signed a;
  unsigned b : 23;
} static c = {86354908};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
