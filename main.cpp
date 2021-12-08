#include <iostream>
#include "Para.hpp"

using namespace std;

template<typename T, int N>
class TablicaPar
{
public:
    Para<T>& operator[](const int& n){return tab[n]; }
    Para<T> tab[N];
};

int main()
{
    cout << " Hello! " << endl;

    Para<int> a(5, 4);
    a.print();
    
    // Para<double> b(10,0);
    // b.print();

    cout << " ==== " <<endl;
    TablicaPar<int,10> t;
    cout << " ==== " <<endl;
    t[0] = a;
    cout << " ==== " <<endl;
    t[0].print();
}