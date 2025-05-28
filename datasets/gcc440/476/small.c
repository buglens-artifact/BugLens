int printf(const char *, ...);
union {
  int a;
  signed b : 3;
  char c;
} static d = {8};
int main() {
  printf("", d.b);
  printf("%d\n", d.c);
  return 0;
}
