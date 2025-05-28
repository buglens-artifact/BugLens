int printf(const char *, ...);
union {
  int a;
  signed b : 28;
} static c = {226823330};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
