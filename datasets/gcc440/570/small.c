int printf(const char *, ...);
union {
  signed a : 22;
  int b;
} static c[] = {2946122};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
