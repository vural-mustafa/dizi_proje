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

    // En büyük ve en küçük bulma
    int enBuyuk = *max_element(dizi.begin(), dizi.end());
    int enKucuk = *min_element(dizi.begin(), dizi.end());

    // Medyan hesaplama
    sort(dizi.begin(), dizi.end());
    int medyan;
    if (n % 2 == 0) {
        medyan = (dizi[n / 2 - 1] + dizi[n / 2]) / 2;
    } else {
        medyan = dizi[n / 2];
    }

    

    // Standart sapma hesaplama
    double ortalama = static_cast<double>(toplam) / n;
    double toplamKareFark = 0;
    for (int i = 0; i < n; i++) {
        toplamKareFark += pow(dizi[i] - ortalama, 2);
    }
    double standartSapma = sqrt(toplamKareFark / n);

    // Sonuçları ekrana yazdırma
    cout << "Toplam: " << toplam << endl;
    cout << "En Buyuk: " << enBuyuk << endl;
    cout << "En Kucuk: " << enKucuk << endl;
    cout << "Medyan: " << medyan << endl;
  
    cout << "Standart Sapma: " << standartSapma << endl;

    return 0;
}
