int printf(const char *, ...);
struct {
  unsigned a;
  signed b;
  unsigned : 6;
  unsigned c;
  signed d : 6;
} volatile e = {708712950687};
char f = 5;
int g;
int main() {
  e.d = f = 0;
  for (; g < 3; g++)
    printf("%d\n", f);
  return 0;
}
