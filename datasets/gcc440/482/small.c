int printf(const char *, ...);
union {
  long a;
  signed b : 30;
  int c;
} d = {1186033014};
int main() {
  printf("%d\n", d.b, d.c);
  return 0;
}
