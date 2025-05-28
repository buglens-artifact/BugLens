int printf(const char *, ...);
union {
  int a;
  unsigned b : 31;
} static c = {-4L};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
