int printf(const char *, ...);
int *a;
int **const b = &a;
int ***c = &b;
int d;
short e;
static int **f = &a;
char g;
short *h = &e;
void i() {
  int ***j = &f;
  g = c != j;
  *h = g;
  d = *j != 0;
}
int main() {
  i();
  printf("%d\n", e);
}
