int printf(const char *, ...);
union {
  signed a : 17;
  int b;
} c[] = {861173};
int main() {
  printf("%d\n", c[0].a, c[0].b);
  return 0;
}
