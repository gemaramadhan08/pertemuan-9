#include<string.h>
#include<iostream>

using namespace std;

int main(void){

    char str1 [10] = {"abcdeghi"};
    char str2 [10];

    strcpy(str2, str1);
    cout << str2 << endl;

    return 0;
}