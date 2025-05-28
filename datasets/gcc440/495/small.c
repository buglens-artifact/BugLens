int printf(const char *, ...);
union {
  int a;
  signed b : 30;
} static c = {730179468};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
