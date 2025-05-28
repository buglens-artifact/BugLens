int printf(const char *, ...);
union {
  signed a : 18;
  signed b;
} static c[] = {1010828};
int main() {
  printf("", c[0].a);
  printf("%d\n", c[0].b);
  return 0;
}
