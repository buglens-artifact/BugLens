int printf(const char *, ...);
union {
  long a : 22;
  int b;
} static c[] = {18446744073709551614};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
