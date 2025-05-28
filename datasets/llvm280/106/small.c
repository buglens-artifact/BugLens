int printf(const char *, ...);
long a;
short b;
int main() {
  int c;
  for (; b <= 7; b++) {
    for (; c >= 0; c--)
      ++a;
    c = 0;
    for (; c <= 3; c++)
      ;
  }
  printf("%d\n", (int)a);
}
