int printf(const char *, ...);
int a;
union {
  short b;
  signed c : 15;
} d[40] = {35019};
void main() {
  int e, f;
  e = 0;
  for (; e < 5; e++) {
    f = 0;
    for (; f < 8; f++) {
      printf("%d\n", d[e].b);
      a = d[e].c;
    }
  }
}
