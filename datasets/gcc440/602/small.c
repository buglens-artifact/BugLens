int printf(const char *, ...);
union {
  signed a : 27;
  int b;
} static c = {86263805};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
