int printf(const char *, ...);
union {
  int a;
  signed b : 12;
  unsigned c : 16;
} static d[] = {8670};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
