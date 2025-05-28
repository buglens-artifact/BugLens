int printf(const char *, ...);
union {
  int a;
  unsigned b : 22;
} static c = {13295537};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
