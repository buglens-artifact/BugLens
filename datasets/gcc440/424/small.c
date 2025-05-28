int printf(const char *, ...);
union {
  long a;
  unsigned b;
  unsigned c : 22;
} const d[] = {9560749};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
