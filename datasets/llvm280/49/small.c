int printf(const char *, ...);
int a;
short b;
int main() {
  int c;
  for (; a >= 0; a--)
    for (; c < 3;)
      c = b = 4;
  printf("%d\n", b);
}
