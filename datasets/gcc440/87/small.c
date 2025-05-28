int printf(const char *, ...);
union {
  signed a : 26;
  signed b;
} const c[] = {66357149};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
