int printf(const char *, ...);
int a;
union {
  int b;
  signed c : 21;
} static d[6] = {3356183};
int main() {
  int e = 0;
  for (; e < 3; e++) {
    printf("", d[e].b);
    a = printf("%X\n", d[e].c);
  }
  return 0;
}
