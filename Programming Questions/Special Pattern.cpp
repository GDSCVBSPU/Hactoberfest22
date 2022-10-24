// Special pattern n = 5

//     #
//    ##
//   ###
//  ####
// #####



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    // cin >> n;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            if(j <= n - i) cout << " ";
            else cout << "#";
        }
        cout << "\n";
    }
    return 0;
}