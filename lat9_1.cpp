#include<iostream>

using namespace std;

int main(void){

    char c = 'C';

    if(isalpha (c)){
        cout << "Is alphabetical " << c << endl;
    }else{
        cout << "Is not alphabetical " << c << endl;
    }

    return 0;
}