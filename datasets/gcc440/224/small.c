int printf(const char *, ...);
union {
  int a;
  unsigned b : 18;
} static c = {283360};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
