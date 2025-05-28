int printf(const char *, ...);
struct {
  signed a : 4;
  signed b : 1;
} c[] = {{}, {}, {}, {}, {}, {}, 50}, d;
int main() {
  d.b ^= c[6].b;
  printf("%d\n", d.a);
}
