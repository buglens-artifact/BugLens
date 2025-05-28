int printf(const char *, ...);
union {
  short a;
  signed b : 9;
} c[] = {716};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
