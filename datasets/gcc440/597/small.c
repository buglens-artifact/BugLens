int printf(const char *, ...);
union {
  int a;
  signed b : 26;
} c[] = {42624212};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
