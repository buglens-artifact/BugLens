int printf(const char *, ...);
union {
  int a;
  int b;
} c[1];
char d[8];
int e[7][10];
int f, g;
char h, i;
int main() {
  for (; h <= 6; h++) {
    i = 0;
    for (; i <= 1; i++) {
      f = 6;
      for (; f; f--) {
        g = 0;
        for (; g <= 0; g++)
          e[h][i + 3] = d[g];
        c[0].b ^= e[i][f] ^= 0 != c;
      }
    }
  }
  printf("%d\n", c[0].a);
}
