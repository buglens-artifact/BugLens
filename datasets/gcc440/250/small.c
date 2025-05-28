int printf(const char *, ...);
union {
  long a : 12;
  unsigned b : 14;
} static c[] = {2664};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
