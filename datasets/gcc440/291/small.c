int printf(const char *, ...);
union {
  int a;
  signed b : 31;
} static c = {3022794653};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
