int printf(const char *, ...);
union {
  int a;
  signed b : 23;
} static c = {4637226};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
