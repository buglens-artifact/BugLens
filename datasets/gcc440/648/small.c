int printf(const char *, ...);
union {
  int a : 19;
  signed b;
} static c[] = {294967295};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
