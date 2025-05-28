int printf(const char *, ...);
union {
  signed a;
  signed b : 29;
} c[] = {391416640};
int main() {
  printf("%d\n", c[0].a, c[0].b);
  return 0;
}
