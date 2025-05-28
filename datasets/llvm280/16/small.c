int printf(const char *, ...);
int a, b, e;
int *c, *d = &b;
int **f = &c;
int ***g = &f;
short h;
static int *i();
static short j() {
  int k[10] = {};
  a = 0;
  a--;
  for (; a >= 0;)
    i();
  **g = i(4, 0, k);
  *d = k[8];
  return h;
}
int *i(int l, int m, int *n) {
  int o[] = {4073709551615, 4073709551606, 4073709551615, 4073709551610,
             4073709551610, 4073709551615, 4073709551606, 4073709551615,
             4073709551610, 4073709551610};
  int p;
  int *q[4][4][6] = {{{}}, {{}, &p, &o[6]}};
  for (; e >= 0; e--)
    **g = 0;
  return n;
}
int main() {
  j();
  printf("%d\n", b);
}
