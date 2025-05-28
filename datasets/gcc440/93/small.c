int printf(const char *, ...);
union {
  signed a : 27;
  int b;
} static c[] = {90798053};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
