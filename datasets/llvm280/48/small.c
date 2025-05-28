int printf(const char *, ...);
int a;
long b;
short c;
long *d = &b;
short(e)(f) { return a ?: f; }
int main() {
  c = e();
  *d = c;
  printf("%d\n", (int)b);
}
