#include <bits/stdc++.h>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double s;
    double v;
    double jarak;
    
    cout << "Masukkan sudut";
    cin >> s;
    cout << "Masukkan Awal Kecepatan";
    cin >> v;
    cout << "Jarak Terjauh
	";
    jarak = sin(2 * s * 3.141 / 180) * 10;
    cout << fixed << setprecision(1);
    cout << jarak << endl;
    return 0;
}

