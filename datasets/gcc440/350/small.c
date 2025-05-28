int printf(const char *, ...);
union {
  long a : 23;
  int b;
} static c[] = {-10L};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
