int printf(const char *, ...);
union {
  long a : 20;
  int b;
} static c = {-3L};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
