#include <bits/stdc++.h>

using namespace std;

int A[100002],B[100002];

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, m ,ms;
        scanf("%d%d%d", &n, &m, &ms);
 
        for(int A_i = 0; A_i < n; A_i++){
            scanf("%d",&A[A_i]);
        }
        for(int B_i = 0; B_i < m; B_i++){
           scanf("%d",&B[B_i]);
        }

        long long sum = 0;
        int x = 0, y = 0;

        while (x < n && sum + A[x] <= ms) {
            sum += A[x++];
        }

        int ans = x;

        while (y < m && x >= 0) {
            sum += B[y++];
            while (sum > ms && x > 0) {
                sum -= A[--x];
            }

            if (sum <= ms && ans < x + y) {
                ans = x + y;
            }
        }

        printf("%d\n",ans);
    }
    return 0;
}