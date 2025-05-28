int printf(const char *, ...);
union {
  long a;
  int b;
  unsigned c : 23;
} static d[] = {12245383};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
