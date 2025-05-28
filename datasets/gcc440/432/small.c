int printf(const char *, ...);
union {
  char a;
  signed b : 3;
} static c = {4};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
