#include "Bank.cpp"

int main() {
    SBI s1;
    SGB b1;
    UNION i1;

    s1.setAmountSBI();
    b1.setAmountBOB();
    i1.setAmountUNION();

    s1.getRate();
    b1.getRate();
    i1.getRate();

    return 0;
}
