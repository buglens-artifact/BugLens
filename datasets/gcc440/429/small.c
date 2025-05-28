int printf(const char *, ...);
union {
  long a;
  int b;
  unsigned c : 23;
} const d[] = {55927924};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
