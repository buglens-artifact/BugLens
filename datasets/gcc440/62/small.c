int printf(const char *, ...);
union {
  signed a : 30;
  unsigned b;
} const c[] = {4294967295};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
