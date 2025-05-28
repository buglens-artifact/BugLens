int printf(const char *, ...);
union {
  char a;
  unsigned b : 1;
} static c = {-1L};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
