int printf(const char *, ...);
union {
  unsigned a : 20;
  unsigned b : 17;
} static c[] = {4073709551609};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
