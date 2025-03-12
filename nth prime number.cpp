#include <iostream>
#include<cmath>
using namespace std;

bool isprime(int num){
    if(num < 2){
    return false;
    }
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int cnt = 0;
    int num = 1;

    while(cnt < n){
        num++;
        if(isprime(num)){
            cnt++;
        }
    }

    cout << "The after " << n << "th prime number is: " << num << endl;
    return 0;
}
