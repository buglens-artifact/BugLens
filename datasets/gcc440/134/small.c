int printf(const char *, ...);
union {
  signed a : 5;
  signed b : 2;
} const c[] = {7};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
