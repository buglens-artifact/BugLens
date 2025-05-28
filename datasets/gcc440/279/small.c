int printf(const char *, ...);
union {
  int a;
  signed b : 24;
} c[] = {86861554};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
