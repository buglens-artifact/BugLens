int printf(const char *, ...);
union {
  int a;
  unsigned b : 2;
  char c;
} const d = {4};
int main() {
  printf("", d.b);
  printf("%d\n", d.c);
  return 0;
}
