int printf(const char *, ...);
union {
  signed a : 28;
  unsigned b;
} const c[] = {18446744073709551615};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
