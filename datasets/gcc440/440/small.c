int printf(const char *, ...);
union {
  int a;
  signed b : 25;
} static c = {212483617};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
