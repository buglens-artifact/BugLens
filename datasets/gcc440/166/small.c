int printf(const char *, ...);
union {
  signed a : 3;
  char b;
} const c[] = {5};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
