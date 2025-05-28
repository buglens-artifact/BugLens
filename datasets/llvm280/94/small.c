int printf(const char *, ...);
int a;
short b[6];
int main() {
  short *c[] = {&b[5], 0, 0, &b[5], 0, 0, &b[5]};
  a = ~(c[6] == 0) >= 4219311281;
  printf("%d\n", a);
}
