int printf(const char *, ...);
union {
  signed a : 25;
  unsigned b;
} const c[] = {-9L};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
