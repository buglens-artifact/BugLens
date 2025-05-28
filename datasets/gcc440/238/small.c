int printf(const char *, ...);
union {
  int a;
  signed b : 22;
  int c;
} const d = {8497890};
int main() {
  printf("", d.b);
  printf("%d\n", d.c);
  return 0;
}
