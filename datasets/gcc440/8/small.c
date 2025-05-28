int printf(const char *, ...);
struct {
  unsigned a;
  unsigned b;
  volatile signed c : 7;
} d = {4};
int e, f = 4;
void g(h) { d.c = 0; }
int main() {
  int *i = &f;
  g(++*i);
  printf("", e);
  printf("%d\n", f);
  return 0;
}
