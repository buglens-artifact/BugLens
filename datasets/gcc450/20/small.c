int printf(const char *, ...);
char a;
volatile long b;
void c(d) { printf("...checksum after hashing %s  %lX\n", &a, d ^ 5UL); }
void main() {
  c();
  b;
}
