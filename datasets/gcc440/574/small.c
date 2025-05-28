int printf(const char *, ...);
union {
  int a;
  unsigned b : 17;
  int c;
} static d = {564375};
int main() {
  printf("", d.b);
  printf("%d\n", d.c);
  return 0;
}
