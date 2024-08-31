#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n, m, a;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> m;
  ll st = 0;
  ll ans = 0;
  while (0 < (n--)) {
    cin >> a;
    st += a;
    if (st < 0) {
      st = 0;
    }

    if (m <= st) {
      ++ans;
    }
  }

  cout << ans;

  return 0;
}