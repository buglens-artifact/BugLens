int printf(const char *, ...);
union {
  long a;
  unsigned b : 30;
  int c;
} const d = {3437411179};
int main() {
  printf("", d.b);
  printf("%d\n", d.c);
  return 0;
}
