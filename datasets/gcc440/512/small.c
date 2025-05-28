int printf(const char *, ...);
union {
  long a : 19;
  int b;
} const c[] = {-5L};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
