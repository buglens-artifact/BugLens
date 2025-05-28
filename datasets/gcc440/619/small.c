int printf(const char *, ...);
union {
  long a;
  signed b;
  unsigned c : 20;
} static d[] = {6568782};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
