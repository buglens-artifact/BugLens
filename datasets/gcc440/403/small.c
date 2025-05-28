int printf(const char *, ...);
union {
  int a;
  char b;
  unsigned c : 4;
} static d[] = {-10L};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
