#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;


int main() {

    int n,v[1005];

    cin >> n;

    for (int i=1; i<=n; i++){
        cin >> v[i];
    }
    for (int i=1; i<=n; i++){
        if (v[i] % v[n] == 0){
            cout << v[i]<<" ";
        }
    }

    return 0;
}