int printf(const char *, ...);
union {
  long a : 22;
  int b;
} const c = {-4L};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
