#include <iostream>
#include <string>
using namespace std;

int main() {
    // int sk;
    // int sum = 0;
    //
    // cout << "Iveskite sveikuosius skaiciu" << endl;
    //
    // while (true) {
    //     cin >> sk;
    //
    //     if (sk == 0) {
    //         break;
    //     }
    //
    //     sum += sk;
    // }
    // cout << "Sveikuju teigiamu skaiciu suma: " << sum << endl;

    // string slptz = "Mykolas@2275i";
    // string ivedame;
    //
    // cout << "Iveskite savo slaptazodi: " << endl;
    // cin >> ivedame;
    //
    // while (slptz != ivedame) {
    //     cout << "Neteisingas slaptazodis, Bandykite dar karta" << endl;
    //     cin >> ivedame;
    // }
    //
    // cout << "Sveikinu! jus prisijungete" << endl;

    // int savivaldybes = 60;
    // int LTcities;
    //
    // cout << "Iveskite kiek yra Lietuvos savivaldybiu: " << endl;
    // cin >> LTcities;
    //
    // while (savivaldybes != LTcities) {
    //     cout << "Lietuvoje nera tiek savivaldybiu. Bandykite dar karta" << endl;
    //     cin >> LTcities;
    // }
    //
    // cout << "Sveikiname. Jus teisingai uzrasete Lietuvos savivaldybiu skaiciu" << endl;

    // int teigiami;
    // double kiek;
    // cout << "Kiek skaiciu: " << endl;
    // cin >> kiek;
    // cout << "Iveskite teigiamus skaicius" << endl;
    // double suma = 0;
    //
    // while (true) {
    //     cin >> teigiami;
    //
    //     if (teigiami < 0) {
    //         break;
    //     }
    //
    //     suma += teigiami;
    // }
    //
    // cout << "Teigiamu skaiciu vidurkis - " << (suma/kiek) << endl;

    int e;
    cout << "Iveskite teigiamus skaicius" << endl;
    cin >> e;

    if (e == 0) {
        cout << "Neįvesta nei vieno skaičiaus." << endl;
        return 0;
    }

    int didziausias = e;

    while (true) {
        cin >> e;

        if (e == 0) {
            break;
        }

        if (didziausias < e) {
            didziausias = e;
        }
    }

    cout << "Didiausias sveikas skaicius: " << didziausias << endl;

    return 0;
}