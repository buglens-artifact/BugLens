int printf(const char *, ...);
union {
  short a;
  signed b : 13;
} static c = {8471};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
