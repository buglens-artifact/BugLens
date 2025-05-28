int printf(const char *, ...);
union {
  int a;
  signed b : 27;
} static c = {202957709};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
