int printf(const char *, ...);
#pragma pack(1)
struct a {
  unsigned b : 4;
  signed c : 11;
  signed d : 2;
} e, *f = &e;
static struct a g() {
  struct a h = {2, 4, 1};
  return h;
}
int main() {
  *f = g();
  printf("%d\n", e.d);
}
