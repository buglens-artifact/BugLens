int printf(const char *, ...);
union {
  signed a : 22;
  unsigned b;
} const c[] = {3404529};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
