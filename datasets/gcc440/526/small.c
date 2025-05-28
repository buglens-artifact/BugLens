int printf(const char *, ...);
union {
  int a;
  signed b : 21;
} static c = {3316948};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
