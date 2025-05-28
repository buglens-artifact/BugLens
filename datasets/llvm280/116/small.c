int printf(const char *, ...);
union a {
  char b;
  unsigned c : 20;
} d = {5}, e, *g = &d;
static union a h() {
  union a f = {};
  return f;
}
int main() {
  e = h();
  *g = e;
  printf("%d\n", d.b);
}
