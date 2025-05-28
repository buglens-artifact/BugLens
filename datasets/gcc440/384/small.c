int printf(const char *, ...);
union {
  unsigned a;
  unsigned b : 30;
} c[] = {3646417988};
int main() {
  printf("%d\n", c[0].a, c[0].b);
  return 0;
}
