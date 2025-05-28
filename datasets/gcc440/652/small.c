int printf(const char *, ...);
union {
  int a;
  unsigned b : 20;
} static c = {4967293};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
