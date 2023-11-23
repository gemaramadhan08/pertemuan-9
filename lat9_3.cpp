#include<iostream>

using namespace std;

int main(void){

    char c = 'C';

    if(islower (c)){
        cout << "Is lower case character " << c << endl;
    }else{
        cout << "Is not lower case character " << c << endl;
    }

    return 0;
}