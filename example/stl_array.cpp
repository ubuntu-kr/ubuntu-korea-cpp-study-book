// stl_array.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 10> arr = { 1, 2, 3,4,5 };
    
    auto it = arr.begin();

    while (it != arr.end()) {
        cout << *it << endl;
        it++;
    }

    return 0;
}