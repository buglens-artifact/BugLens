int printf(const char *, ...);
union {
  signed a : 20;
  int b;
} static c[] = {711253};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
