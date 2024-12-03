#include<iostream>
using namespace std;

int main(){
    int num,odd=0,even=0;
    while(true){
        cout << "Enter an integer: ";
        cin >> num ;
        if (num==0){
            break;
        }
        if( num%2==0){
            even += 1 ;
        }
        else{
            odd += 1 ;
        }
    }
    cout << "#Even numbers = "<< even << endl;
    cout << "#Odd numbers = "<< odd << endl;
    return 0;
}
