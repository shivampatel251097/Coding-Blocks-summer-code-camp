#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;


int main() {
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    ll sum = 0;
    unordered_set<int> uniqueSum; // For storing unique sum;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            for (int k = i; k <= j; ++k) {  // Generating all subarrays

                sum += arr[k];
                //cout<<arr[k]<<" ";
            }
            uniqueSum.insert(sum);  //  O(1);
            sum = 0;

        }
    }
    cout << uniqueSum.size(); // printing total element in the set;
}
