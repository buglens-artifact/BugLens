int printf(const char *, ...);
int a;
union {
  signed b : 1;
  char c;
} d[25] = {7};
void main() {
  int e, f;
  e = 0;
  for (; e < 5; e++) {
    f = 0;
    for (; f < 5; f++) {
      printf("%d\n", d[e * 5].b);
      a = d[e * 5].c;
    }
  }
}
