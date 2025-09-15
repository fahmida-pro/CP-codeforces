#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A,B,C;
    cin >> A >> B >> C;

    int smallest = min({A,B,C});
    int largest  = max({A,B,C});
    int mid = A + B + C - (smallest + largest);

    cout << smallest << endl;
    cout << mid << endl;
    cout << largest << endl;

    cout << endl;
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    return 0;
}
