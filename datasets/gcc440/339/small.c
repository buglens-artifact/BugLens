int printf(const char *, ...);
union {
  int a;
  unsigned b : 31;
} c[] = {907142170639, 8, -308};
int main() {
  printf("%d\n", c[2].a, c[2].b);
  return 0;
}
