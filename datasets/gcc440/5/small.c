int printf(const char *, ...);
union {
  int a;
  signed b : 27;
} static c = {68541178};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
