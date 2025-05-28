int printf(const char *, ...);
union {
  int a;
  signed b : 29;
} c = {701865330};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}


