int printf(const char *, ...);
union {
  long a;
  unsigned b : 22;
  int c;
} const d = {5424103};
int main() {
  printf("", d.b);
  printf("%d\n", d.c);
  return 0;
}
