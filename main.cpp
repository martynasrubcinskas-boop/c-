#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 3) {          // Išorinis ciklas
        cout << "i = " << i << endl;

        int j = 1;
        while (j <= 2) {      // Vidinis ciklas
            cout << "   j = " << j << endl;
            j++;
        }

        i++;
    }

    return 0;
}
