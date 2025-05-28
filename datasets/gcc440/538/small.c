int printf(const char *, ...);
union {
  int a;
  unsigned b : 23;
} static c = {36011691};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
