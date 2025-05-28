int printf(const char *, ...);
union {
  int a;
  unsigned b : 28;
} static c[] = {46744073709551608};
int main() {
  int d = 0;
  for (; d < 1; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
