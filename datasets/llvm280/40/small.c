int printf(const char *, ...);
struct a {
  signed b : 15;
} static d = {7};
int c;
static struct a e() { return d; }
int main() {
  struct a f = e(), g = f;
  if (g.b)
    printf("%d\n", c);
}
