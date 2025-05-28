int printf(const char *, ...);
union {
  signed a : 8;
  signed b : 1;
} static c[] = {2};
int main() {
  int d = 0;
  for (; d < 1; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
