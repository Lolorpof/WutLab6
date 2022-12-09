#include<iostream>
using namespace std;

int main(){
    int i, even_count = 0, odd_count = 0;
    do{
        cout << "Enter an integer: ";
        cin >> i;
        if(i == 0){
            break;
        }
        else if(i%2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }while(i != 0);

    cout << "#Even numbers = " << even_count << "\n";
    cout << "#Odd numbers = " << odd_count;
    return 0;
}
