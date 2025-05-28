int printf(const char *, ...);
union {
  int a : 20;
  int b;
} static c[] = {-10L};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
