int printf(const char *, ...);
union {
  unsigned a : 23;
  signed b : 17;
} static c[] = {67295};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
