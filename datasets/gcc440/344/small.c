int printf(const char *, ...);
union {
  int a;
  unsigned b : 1;
  char c;
} static d[] = {2};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
