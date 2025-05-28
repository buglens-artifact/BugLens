int printf(const char *, ...);
union {
  int a;
  unsigned b : 23;
  int c;
} static d[] = {68308666};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
