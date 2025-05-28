int printf(const char *, ...);
union {
  int a : 28;
  unsigned b;
} const c[] = {219905147};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
