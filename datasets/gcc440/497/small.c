int printf(const char *, ...);
union {
  int a;
  signed b : 19;
} static c = {607691};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
