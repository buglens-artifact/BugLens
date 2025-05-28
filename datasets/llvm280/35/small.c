int printf(const char *, ...);
int a, d = 5, e;
long b;
int *c;
int main() {
  {
    int *f = &a;
    int **g = &c;
    b = 3;
    for (; b; b--) {
      e = 0;
      for (; e < 1;)
        for (; e < 4; e++)
          *g = &d;
      int ***h = &g;
      *f = 0;
      *h = &f;
    }
  }
  printf("%d\n", d);
}
