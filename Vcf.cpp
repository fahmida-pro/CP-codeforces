#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;
    cin >> A >> S >> B;

    bool correct = false;

    if (S == '<') correct = (A < B);
    else if (S == '>') correct = (A > B);
    else if (S == '=') correct = (A == B);

    if (correct)
        cout << "Right" << endl;
    else
        cout << "Wrong" << endl;

    return 0;
}
