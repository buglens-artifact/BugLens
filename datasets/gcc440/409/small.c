int printf(const char *, ...);
union {
  int a : 9;
  unsigned b : 12;
} static c[] = {-1UL};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
