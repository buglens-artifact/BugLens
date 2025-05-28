int printf(const char *, ...);
union {
  int a;
  signed b : 21;
  signed c;
} static d[] = {4870834};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
