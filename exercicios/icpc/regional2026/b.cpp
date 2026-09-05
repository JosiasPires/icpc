#include <bits/stdc++.h>
using namespace std;

int N;
vector<long long> L, R;

long long dfs(int i, long long last) {
    if (i == N) return 1;
    long long ans = 0;
    for (long long x = max(L[i], last + 1); x <= R[i]; x++)
        ans += dfs(i + 1, x);
    return ans;
}

int main() {
    cin >> N;
    L.resize(N);
    R.resize(N);

    for (int i = 0; i < N; i++) cin >> L[i] >> R[i];

    cout << dfs(0, -1) << '\n';
}

