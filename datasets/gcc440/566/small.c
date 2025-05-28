int printf(const char *, ...);
union {
  signed a : 6;
  signed b : 3;
} c[] = {11};
int main() {
  printf("%d\n", c[0].a, c[0].b);
  return 0;
}
