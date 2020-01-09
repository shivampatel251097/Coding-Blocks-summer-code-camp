#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int almond_cashew(ll m,ll arr[],ll candies)
{
	int count = 0;
    int i = 0;

    while (i < m + 1) {

        if (candies % i == 0) {
            candies /= arr[i];
            count++;

            if (i == m)
                count--;
        } else
            break;
        i++;
    }
    return count;
}
int main() {
    ll candies, m;
    cin >> candies >> m;
    ll arr[m];

    for (int i = 0; i < m; ++i) {
        cin >> arr[i];
    }
	int ans=almond_cashew(m,arr,candies);
    if (ans%2!= 1)
        cout << "Almond";
    else
        cout << "Cashew";
}
