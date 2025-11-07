#include "funktiot.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int main() {

    double a, b, result;

    cout<<"Anna luku: ";
    cin>>a;
    cout<<"Anna toinen luku: ";
    cin>>b;

    try {
        calcSum(a, b);
        calcDiv(a, b);

    }
    catch (runtime_error& e) {
        cout << "Error calcDiv: " << e.what() << endl;
    }

    double summa = retSum(a, b);
    cout<<"palautuva summa: " << summa << endl;

    try {
        result = retDiv(a, b);
        cout << a << " / " << b << " = " << result << endl;
    }
    catch (runtime_error& e) {
        cout << "Error retDiv: " << e.what() << endl;
    }
    return 0;
}
