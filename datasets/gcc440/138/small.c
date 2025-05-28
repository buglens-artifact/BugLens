int printf(const char *, ...);
union {
  long a;
  unsigned b : 19;
  int c;
} static d[] = {551639};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
