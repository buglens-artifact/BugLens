int printf(const char *, ...);
union {
  int a : 26;
  int b;
} static c[] = {107708869};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
