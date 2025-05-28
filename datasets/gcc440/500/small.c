int printf(const char *, ...);
union {
  signed a;
  signed b : 26;
} static c = {125045759};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
