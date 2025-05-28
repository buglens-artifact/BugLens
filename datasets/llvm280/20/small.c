int printf(const char *, ...);
union a {
  unsigned b : 5;
  short c;
} static d = {1};
static union a e() { return d; }
int main() {
  union a f = e(), g = f;
  printf("%d\n", g.b);
}
