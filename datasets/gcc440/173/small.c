int printf(const char *, ...);
union {
  signed a : 26;
  int b;
} const c = {54669482};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
