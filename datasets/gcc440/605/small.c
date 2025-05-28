int printf(const char *, ...);
union {
  int a;
  signed b : 20;
} const c = {658203};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
