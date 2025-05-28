int printf(const char *, ...);
#pragma pack(1)
struct {
  int a;
  signed b;
  long c;
  volatile signed d : 2;
} e = {5};
int f = 2, g;
int main() {
  e.d = f = 0;
  for (; g < 3; g++)
    printf("%d\n", f);
  return 0;
}
