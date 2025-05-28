int printf(const char *, ...);
union {
  int a;
  unsigned b : 30;
} static c = {1155110473};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
