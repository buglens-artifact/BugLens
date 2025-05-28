int printf(const char *, ...);
union {
  int a;
  signed b : 21;
} c[] = {4380257};
int d;
int main() {
  printf("%d\n", c[d].a, c[d].b);
  return 0;
}
