int printf(const char *, ...);
union {
  long a;
  signed b : 3;
  unsigned c : 6;
} static d[] = {9};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
