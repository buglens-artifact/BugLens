int printf(const char *, ...);
union {
  int a;
  signed b : 28;
} c[] = {832065104};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
