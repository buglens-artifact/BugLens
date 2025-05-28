int printf(const char *, ...);
union {
  int a;
  signed b : 29;
} static c = {642676388};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
