#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Ham kiem tra so nguyen to
bool isPrime(int n)
{
    if (n<=1) {
        return false;
    }
    for(int i=2; i<n; i++ ){
        if (n%i==0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (isPrime(n)==true) {
        cout << "true" ;
    } else {
        cout << "false";
    }
}
