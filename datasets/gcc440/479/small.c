int printf(const char *, ...);
union {
  int a;
  unsigned b : 25;
} static c = {44725400};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
