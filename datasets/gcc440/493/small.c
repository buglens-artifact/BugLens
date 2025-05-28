int printf(const char *, ...);
union {
  signed a : 6;
  unsigned b : 5;
} static c[] = {967295};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
