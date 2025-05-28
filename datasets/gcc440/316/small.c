int printf(const char *, ...);
union {
  long a;
  signed b : 31;
  int c;
} d = {3134332609};
int main() {
  printf("%d\n", d.b, d.c);
  return 0;
}
