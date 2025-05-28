int printf(const char *, ...);
union {
  int a;
  unsigned b : 20;
} static c = {8185988};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
