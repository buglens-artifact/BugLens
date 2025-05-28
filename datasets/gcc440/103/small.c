int printf(const char *, ...);
union {
  int a;
  signed b : 18;
} const c = {337795};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
