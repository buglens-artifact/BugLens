int printf(const char *, ...);
union {
  signed a : 13;
  short b;
} const c[] = {5256};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
