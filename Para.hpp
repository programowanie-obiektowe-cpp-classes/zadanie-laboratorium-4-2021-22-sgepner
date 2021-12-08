#ifndef PARA_H
#define PARA_H

#include <iostream>
using namespace std;

template<typename T>
class Para
{
public:
    Para() {cout << "D" << endl;}
    Para(const T &f, const T &s) : first(f), second(s) {cout << "P" << endl;}
    Para(const Para &p) : first(p.first), second(p.second) {cout << "C" << endl;}

    T first;
    T second;

    T suma();
    void print();
};

#endif