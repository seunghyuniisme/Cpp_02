//Ram.cpp
#include <iostream>
using namespace std;

#include "Ram.h"

Ram::Ram() {
    mem[100*1024] = 0; // mem 배열을 0으로 초기화하고
    size = 100 * 1024; // size를 100*1024로 초기화 
}

Ram::~Ram() {
    cout << "메모리 제거됨" << endl; // "메모리 제거됨" 문자열 출력
}

char Ram::read(int address) {
    return mem[address]; // address 주소의 메모리 바이트 리턴
}

void Ram:write(int address, char value) {
    mem[address] = value; // address 주소에 한 바이트로 value 저장 
}