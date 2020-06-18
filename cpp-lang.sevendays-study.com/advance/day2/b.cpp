#include "a.h"
#include "b.h"
#include <iostream>

using namespace std;

B::B(A* pA)a {
    m_pA = pA;
}

void B::hoge() {
    cout << "bar" << endl;
    m_pA->foo();
}