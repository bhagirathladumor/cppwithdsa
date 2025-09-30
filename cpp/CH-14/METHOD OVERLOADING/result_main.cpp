#include "result.cpp"

int main()
{
    Result sci, math, eng, guj, ss, com;

    // Input only science marks
    sci.sciData();

    // Other subjects derived using unary operators
    math = --sci;    // math = sci - 1
    eng  = ++sci;    // eng = sci + 1
    guj  = ++sci;    // guj = sci + 1
    ss   = --sci;    // ss = sci - 1
    com  = ++sci;    // com = sci + 1

    // Display marksheet
    cout << "\n--- Marksheet ---" << endl;
    cout << "Science : " << sci.getMarks() << endl;
    cout << "Math    : " << math.getMarks() << endl;
    cout << "English : " << eng.getMarks() << endl;
    cout << "Gujarati: " << guj.getMarks() << endl;
    cout << "Social  : " << ss.getMarks() << endl;
    cout << "Computer: " << com.getMarks() << endl;

    return 0;
}