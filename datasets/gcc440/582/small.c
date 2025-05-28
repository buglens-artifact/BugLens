int printf(const char *, ...);
union {
  short a;
  signed b : 13;
} c[] = {31066};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
