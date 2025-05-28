int printf(const char *, ...);
struct a {
  signed b : 19;
  signed c : 9;
} d[5][1];
int e;
static struct a g() {
  struct a f = {0, 5};
  return f;
}
int main() {
  struct a h = g();
  d[4][0].b = h.c;
  for (; e < 5; e++)
    printf("%d\n", d[e][0].b);
}
