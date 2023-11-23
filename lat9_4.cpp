#include<iostream>

using namespace std;

int main(void){

    char c = 'C';

    if(isupper (c)){
        cout << "Is an uppercase character " << c << endl;
    }else{
        cout << "Is not an uppercase character " << c << endl;
    }

    return 0;
}