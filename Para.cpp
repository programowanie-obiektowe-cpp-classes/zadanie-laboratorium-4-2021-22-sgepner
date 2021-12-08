#include "Para.hpp"
#include <iostream>

using namespace std;

template<typename T>
T Para<T>::suma()
{
    return first + second;
}

template<typename T>
void Para<T>::print()
{
    cout << "[" << first << ", " << second << "]" << endl;
}

template<>
void Para<double>::print()
{
    cout << "For double you do it ;P" << endl;
}

template class Para<int>;
template class Para<double>;