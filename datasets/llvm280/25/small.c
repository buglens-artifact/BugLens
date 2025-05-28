int printf(const char *, ...);
char(a)() { return 0; }
#pragma pack(1)
struct {
  signed b : 20;
  signed c : 1;
  signed d;
} e = {6, 0, 4}, f;
int main() {
  f.c ^= e.c |= a();
  printf("%d\n", f.d);
}
