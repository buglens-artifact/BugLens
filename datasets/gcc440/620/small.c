int printf(const char *, ...);
union {
  int a;
  signed b : 1;
  char c;
} const d = {4};
int main() {
  printf("", d.b);
  printf("%d\n", d.c);
  return 0;
}
