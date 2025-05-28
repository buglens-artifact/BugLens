int printf(const char *, ...);
union {
  long a : 30;
  int b;
} c[] = {765115121};
int main() {
  printf("%d\n", c[0].a, c[0].b);
  return 0;
}
