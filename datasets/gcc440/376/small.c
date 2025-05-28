int printf(const char *, ...);
union {
  char a;
  signed b : 1;
} static c = {4073709551612};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
