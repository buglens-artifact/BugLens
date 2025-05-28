int printf(const char *, ...);
union {
  signed a : 13;
  signed b : 12;
} const c[] = {2098};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
