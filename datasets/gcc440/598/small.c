int printf(const char *, ...);
union {
  long a;
  signed b : 19;
  int c;
} static d = {669973};
int main() {
  printf("", d.b);
  printf("%d\n", d.c);
  return 0;
}
