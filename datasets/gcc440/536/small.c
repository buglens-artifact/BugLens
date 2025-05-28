int printf(const char *, ...);
union {
  signed a : 1;
  char b;
} const c[] = {4073709551613};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
