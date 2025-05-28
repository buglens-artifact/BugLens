int printf(const char *, ...);
union {
  int a;
  signed b : 27;
} static c[] = {138350176};
int main() {
  int d = 0;
  for (; d < 1; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
