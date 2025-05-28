int printf(const char *, ...);
union {
  int a;
  signed b : 23;
} c[] = {4289305};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
