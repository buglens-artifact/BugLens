int printf(const char *, ...);
union {
  int a : 2;
  char b;
} static c[] = {4073709551615};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
