int printf(const char *, ...);
union {
  int a : 2;
  char b;
} const c[] = {2};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
