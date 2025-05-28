int printf(const char *, ...);
union {
  int a;
  signed b : 21;
  int c;
} const d = {2106737};
int main() {
  printf("", d.b);
  printf("%d\n", d.c);
  return 0;
}
