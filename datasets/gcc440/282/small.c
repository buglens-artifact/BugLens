int printf(const char *, ...);
union {
  int a;
  unsigned b : 23;
} static c[2] = {14447576};
int main() {
  int d = 0;
  for (; d < 2; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
