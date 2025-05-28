int printf(const char *, ...);
union {
  signed a : 2;
  unsigned b : 4;
} const c[] = {-1L};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
