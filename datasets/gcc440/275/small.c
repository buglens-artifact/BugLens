int printf(const char *, ...);
union {
  short a;
  signed b : 14;
} c[] = {27790};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
