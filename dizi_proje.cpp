#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int main() {
    int n;
    cout << "Dizi boyutunu girin: ";
    cin >> n;

    vector<int> dizi(n);

    cout << "Diziyi girin: ";
    for (int i = 0; i < n; i++) {
        cin >> dizi[i];
    }

    // Toplam hesaplama
    int toplam = 0;
    for (int i = 0; i < n; i++) {
        toplam += dizi[i];
    }

  
}

