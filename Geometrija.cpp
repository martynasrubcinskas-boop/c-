#include <complex>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int e;
    int f;
    int p = 60;
    float krastine;
    float saknis;

    cout << "Askaiciuokite trikamio krastines ilgi: " << endl;
    cout << "Jeigu zinome tik dvi krastines ir kampas tarp ju lygus " << p << endl;

    cin >> e;
    cin >> f;

    krastine = e*e+f*f-2*e*f*0.5;
    saknis = krastine;
    cout << sqrt(saknis) << endl;
}