int printf(const char *, ...);
char a;
char *b = &a;
void c(d) { *b = d; }
int main() {
  c();
  printf("%d\n", a);
  return 0;
}
