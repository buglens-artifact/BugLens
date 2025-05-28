int printf(const char *, ...);
int a, b, c;
short d, e;
void f(g) {
  int *h = 0;
i:
  b = 1;
  for (; b; b--)
    for (;;) {
      h = &g;
      break;
    }
  e = 2;
  for (; e; e += 1) {
    g = 0;
    if (*h)
      for (; d <= 6; d++)
        if (c)
          goto i;
    if (g)
      break;
  }
}
void j(int *g) { f(*g); }
int main() {
  for (; a <= 1; a++)
    j(&a);
  printf("%d\n", d);
}
