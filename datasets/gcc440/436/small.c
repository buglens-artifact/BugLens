int printf(const char *, ...);
union {
  int a : 29;
  int b;
} static c[] = {3738198703};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
