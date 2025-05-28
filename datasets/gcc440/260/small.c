int printf(const char *, ...);
union {
  int a;
  unsigned b : 26;
  int c;
} static d = {74096238};
int main() {
  printf("", d.b);
  printf("%d\n", d.c);
  return 0;
}
