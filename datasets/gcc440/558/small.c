int printf(const char *, ...);
union {
  int a;
  signed b : 22;
} c[] = {3681120};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
