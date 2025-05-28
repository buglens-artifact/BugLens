int printf(const char *, ...);
union {
  char a;
  unsigned b : 4;
} c[] = {100};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
