int printf(const char *, ...);
int a;
union {
  int b;
  signed c : 18;
} d[8] = {511770};
void main() {
  int e, f;
  e = 0;
  for (; e < 6; e++) {
    f = 0;
    for (; f < 8; f++) {
      printf("%d\n", d[e].b);
      a = d[e].c;
    }
  }
}
