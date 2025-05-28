int printf(const char *, ...);
union {
  signed a : 14;
  signed b : 11;
} static c = {3765};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
