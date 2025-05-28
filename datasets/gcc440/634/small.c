int printf(const char *, ...);
union {
  int a;
  signed b : 27;
} static c = {159609044};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
