int printf(const char *, ...);
union {
  int a;
  unsigned b : 28;
} static c = {294967286};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
