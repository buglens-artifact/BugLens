int printf(const char *, ...);
union {
  int a : 26;
  int b;
} static c = {4294967288};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
