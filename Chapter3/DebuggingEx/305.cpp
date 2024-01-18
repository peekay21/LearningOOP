#include <iostream>
#include <cstring>

using namespace std;

char* allocateMemory();

int main() {
    char* str;
    str = allocateMemory();
    cout << str;

    // Correct dynamic memory deallocation
    delete[] str;

    // Assigning a string literal to str is not allowed
    // Instead, allocate new memory and copy the string
    str = new char[6];
    strcpy(str, "  Pradip   ");
    cout << str;

    // Correct dynamic memory deallocation
    delete[] str;

    return 0;
}

char* allocateMemory() {
    char* str = new char[21];  // Allocate memory for the string "Memory allocation Test"
    strcpy(str, "Memory allocation Test");
    return str;
}
