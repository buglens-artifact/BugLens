int printf(const char *, ...);
union {
  signed a : 4;
  unsigned b : 5;
} static c[] = {11};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
