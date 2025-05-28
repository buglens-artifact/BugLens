int printf(const char *, ...);
union {
  int a;
  unsigned b : 26;
} static c[] = {82864374};
int main() {
  int d = 0;
  for (; d < 1; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
