int printf(const char *, ...);
union {
  int a : 24;
  int b;
} const c[] = {12203162};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
