int printf(const char *, ...);
union {
  int a : 24;
  int b;
} const c = {9056965};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
