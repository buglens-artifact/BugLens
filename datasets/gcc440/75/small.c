int printf(const char *, ...);
union {
  int a;
  signed b : 23;
  int c;
} const d = {103523746};
int main() {
  printf("", d.b);
  printf("%d\n", d.c);
  return 0;
}
