int printf(const char *, ...);
union {
  int a;
  unsigned b : 30;
  int c;
} static d = {2395578413};
int main() {
  printf("", d.b);
  printf("%d\n", d.c);
  return 0;
}
