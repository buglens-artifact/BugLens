int printf(const char *, ...);
union {
  long a;
  char b;
  signed c : 6;
} static d[] = {61};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
