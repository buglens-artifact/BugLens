int printf(const char *, ...);
union {
  long a;
  signed b : 5;
  unsigned c : 7;
} d = {79};
int main() {
  printf("%d\n", d.b, d.c);
  return 0;
}
