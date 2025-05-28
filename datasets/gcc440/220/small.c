int printf(const char *, ...);
union {
  signed a : 10;
  signed b : 16;
} static c[] = {683};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
