#include <bits/stdc++.h>

using namespace std;

#define MAXN 1000000

int a[MAXN + 1];

void solve(int n) {

    stack<int> s;

    int result = INT_MIN, cur;

    for (int i = 0; i < n; ++ i) {
       while (!s.empty() && s.top() >= a[i]) {

          int tmp = s.top(); s.pop();
          result = max(result, tmp ^ a[i]);
       }

       if (!s.empty()) result = max(result, a[i] ^ s.top());
       s.push(a[i]);
    }

    printf("%d\n", result);
}

int main() {

    int N;

    scanf("%d", &N);
    for (int i = 0; i < N; ++ i) scanf("%d", &a[i]);

    solve(N);

    return 0;
}