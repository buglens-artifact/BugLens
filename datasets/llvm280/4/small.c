int printf(const char *, ...);
union a {
  unsigned b : 4;
  signed : 28;
};
int c;
static union a d = {10};
static union a e() { return d; }
int main() {
  union a f = e(), g = f;
  if (g.b)
    printf("%d\n", c);
}
