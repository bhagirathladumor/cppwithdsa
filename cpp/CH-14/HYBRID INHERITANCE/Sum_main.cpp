#include "Sum.cpp"

int main() {
    int n1, n2, n3, n4;

    cout << "Enter four numbers to find their sum:" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Enter value A: ";
    cin >> n1;
    cout << "Enter value B: ";
    cin >> n2;
    cout << "Enter value C: ";
    cin >> n3;
    cout << "Enter value D: ";
    cin >> n4;
    cout << "-----------------------------------" << endl;

    sum4 obj(n1, n2, n3, n4);
    obj.displaySum();

    return 0;
}
