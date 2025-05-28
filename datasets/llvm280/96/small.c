int printf(const char *, ...);
int a, b;
static short c[6];
void d(e) { a = e; }
int main() {
  for (; b < 6; b++)
    d(c[b] >> 16 & 5);
  printf("%X\n", a);
}
