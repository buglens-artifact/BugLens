int printf(const char *, ...);
union {
  signed a : 28;
  int b;
} static c[] = {242946539};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
