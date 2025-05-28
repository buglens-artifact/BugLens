int printf(const char *, ...);
#pragma pack(1)
struct {
  short a;
  int b;
  short c;
  int d;
  int e;
  volatile signed f : 20;
} g = {5};
short h = 3;
int i;
void j() { i = 0; }
int main() {
  g.f = 1;
  short *k = &h;
  (*k)++;
  j(4073709551615);
  printf("%d\n", h);
  return 0;
}
