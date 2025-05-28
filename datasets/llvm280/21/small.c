int printf(const char *, ...);
struct a {
  signed b : 23;
};
char c;
static struct a d = {3};
int e;
int *f = &e;
static struct a g() { return d; }
int main() {
  struct a h = g(), i = h;
  *f = i.b;
  if (e)
    printf("%d\n", c);
}
