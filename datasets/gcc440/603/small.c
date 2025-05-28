int printf(const char *, ...);
union {
  long a : 10;
  unsigned b : 13;
} static c[] = {-1L};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
