#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <limits>
#include <numeric>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cassert>
#include <bitset>
#include <deque>
#include <list>
#include <algorithm>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long
#define all(v) (v).begin(), (v).end()
const int mod = 1e9+7;
#define rep(i, x) for(int i = 0; i < (x); i++)

#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> // find_by_order, order_of_key, insert, upper_bound, lower_bound
using namespace __gnu_pbds;
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> x(n), y(n);
        rep(i, n){
            cin >> x[i] >> y[i];
        }
        
    }
    return 0;
}