int printf(const char *, ...);
union {
  int a;
  signed b : 18;
} static c[] = {1011609};
int main() {
  int d = 0;
  for (; d < 1; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
