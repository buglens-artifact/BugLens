int printf(const char *, ...);
union {
  int a;
  unsigned b : 29;
  int c;
} static d[] = {685391610};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
