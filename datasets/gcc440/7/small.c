int printf(const char *, ...);
union a {
  int b;
  signed c : 25;
} d, f = {52015722};
long e;
void g();
void h() { g(d); }
void g() {
  {
    union a i = f;
    if (i.b)
      e = i.c;
  }
}
int main() {
  h();
  printf("%d\n", (int)e);
  return 0;
}
