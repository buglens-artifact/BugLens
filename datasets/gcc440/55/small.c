int printf(const char *, ...);
union {
  int a : 25;
  int b;
} const c[] = {29720718};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
