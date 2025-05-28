int printf(const char *, ...);
union {
  unsigned a : 25;
  unsigned b : 17;
} static c[] = {4073709551615};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
