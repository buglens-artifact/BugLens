int printf(const char *, ...);
union {
  unsigned a;
  unsigned b : 25;
} const c = {37748526};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
