int printf(const char *, ...);
union {
  signed a : 22;
  int b;
} static c = {3117343};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
