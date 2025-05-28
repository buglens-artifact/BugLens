int printf(const char *, ...);
union {
  signed a : 6;
  char b;
} static c = {104};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
