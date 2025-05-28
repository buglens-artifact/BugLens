int printf(const char *, ...);
int a;
union b {
  signed c : 12;
  unsigned d : 15;
} e, f = {2498};
short g;
long(h)(i) { return a == i && 1 / a; }
void j();
void k() { j(e); }
void j() {
  union b l = f;
  h(l.d);
  g = l.c;
}
int main() {
  k();
  printf("%d\n", g);
  return 0;
}
