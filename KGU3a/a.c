
int a = -2;
unsigned int b = 8;
signed char c = 0;

a--; // a=-3
a <<= 3; // a=-24
a /= 12; // a=2
a = a % 2; // a=0

b >>= 1; // b=4
b |= 3; // b=7
b ^= 15; // b=00111^01111=01000=8
b += 1; // b=9

c = c - 17; // c=-17
c *= -1; // c=17
c += 110; // c=127
c = ~c ^ -1; // c=~0..0111111=1...1000000, c=0...0111111=127

