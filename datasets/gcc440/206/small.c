int printf(const char *, ...);
union {
  int a;
  unsigned b : 25;
} static c[] = {48805361};
int main() {
  int d = 0;
  for (; d < 1; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
