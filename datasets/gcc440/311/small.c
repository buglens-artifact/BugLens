int printf(const char *, ...);
union {
  long a : 3;
  char b;
} static c = {7};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
