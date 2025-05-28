int printf(const char *, ...);
union {
  int a;
  signed b : 22;
} static c = {7868900};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
