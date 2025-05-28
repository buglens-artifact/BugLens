int printf(const char *, ...);
union {
  long a : 2;
  char b;
} static c = {4073709551606};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
