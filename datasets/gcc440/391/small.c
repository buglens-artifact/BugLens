int printf(const char *, ...);
union {
  int a;
  signed b : 31;
} static c = {2510274076};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
