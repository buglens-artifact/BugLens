int printf(const char *, ...);
union {
  int a;
  unsigned b : 18;
} static c[90] = {769839};
int main() {
  int d = 0;
  for (; d < 6; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
