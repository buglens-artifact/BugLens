int printf(const char *, ...);
union {
  int a;
  signed b : 26;
} c[] = {84356143};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
