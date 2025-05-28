int printf(const char *, ...);
union {
  long a : 4;
  char b;
} const c[] = {4073709551609};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
