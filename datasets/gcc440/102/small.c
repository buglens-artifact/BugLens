int printf(const char *, ...);
union {
  long a;
  int b;
  unsigned c : 24;
} const d[] = {26679401};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
