int printf(const char *, ...);
union {
  unsigned a : 29;
  unsigned b : 20;
} static c[] = {5437951};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
