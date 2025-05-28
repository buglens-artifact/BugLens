int printf(const char *, ...);
union {
  signed a : 7;
  signed b : 1;
} const c[] = {2};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
