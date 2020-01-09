#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll The_Prime(ll n,ll velocity,ll diameter){
	ll gx[100000001];  // Bottom-up dp for pre-computing gx()
    gx[1] = 1;
    gx[2] = 2;
    for (ll i = 3; i <= 100000000; i++) {
        gx[i] = (gx[i - 1] % velocity + gx[i - 2] % velocity) % velocity;
    }

    ll tx = 0;
    
    for (ll i = 0; i < n; ++i) {
        tx = (tx % velocity + gx[diameter[i]] % velocity) % velocity;
    }
    return tx;
}

int main() {

    ll n, velocity;
    cin >> n >> velocity;
    ll diameter[n];

    for (ll i = 0; i < n; ++i) {
        cin >> diameter[i];
    }
    cout << The_Prime(n,velocity,diameter) % velocity;
}

