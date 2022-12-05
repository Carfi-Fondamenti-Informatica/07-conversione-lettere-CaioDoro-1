#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    int n = int(c);
    int a;
    char r;

    if (n > 64 && n < 91) {
        a = n + 32;
        r = char(a);
        cout << r << endl;
    } else if (n > 96 && n < 123) {
        a = n - 32;
        r = char(a);
        cout << r << endl;

    } else
        cout << "errore" << endl;
return 0;}
