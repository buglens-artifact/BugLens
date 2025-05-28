int printf(const char *, ...);
union {
  long a;
  signed b : 18;
  int c;
} const d = {629171};
int main() {
  printf("", d.b);
  printf("%d\n", d.c);
  return 0;
}
