int printf(const char *, ...);
union {
  signed a : 7;
  char b;
} const c[] = {84};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
