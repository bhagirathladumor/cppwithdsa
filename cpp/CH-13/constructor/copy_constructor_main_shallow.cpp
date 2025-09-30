#include "copy_constructor_shallow.cpp"

int main()
{
    city c1 ("rajkpot" , 258963);    
    city c2 = c1;

    c1.getCitydetails();
    c2.getCitydetails();
}