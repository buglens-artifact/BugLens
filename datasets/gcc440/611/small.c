int printf(const char *, ...);
union {
  int a;
  unsigned b : 29;
} static c = {562620597};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
