int printf(const char *, ...);
char a[] = {1, 5, 5};
char *const b = &a[2];
static char *c = &a[2];
int main() {
  *c = 0;
  *c = *b;
  printf("%d\n", a[2]);
  return 0;
}
