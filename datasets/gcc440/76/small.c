int printf(const char *, ...);
union {
  int a;
  signed b : 23;
  int c;
} const d = {9672205};
int main() {
  printf("", d.b);
  printf("%d\n", d.c);
  return 0;
}
