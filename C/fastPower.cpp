#include <iostream>
#define cin std::cin
#define cout std::cout
#define ll long long
ll fastPwr(int a, int k);
int main(void) {
  int a, n;
  cout << "input two num." << std::endl;
  cin >> a >> n;
  cout << fastPwr(a, n) << std::endl;
  return 0;
}
ll fastPwr(int a, int k) {
  ll ans = 1;
  while (k) {
    if (k & 0b1 == 0b1) {
      ans = ans * a;
    }
    a *= a;
    k >>= 1;
  }
  return ans;
}
