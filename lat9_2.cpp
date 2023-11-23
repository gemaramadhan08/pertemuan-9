#include<iostream>

using namespace std;

int main(void){

    char c = 'C';

    if(isdigit (c)){
        cout << "Is a digit " << c << endl;
    }else{
        cout << "Is not a digit " << c << endl;
    }

    return 0;
}