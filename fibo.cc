#include<iostream>
#include<vector>
#include<ctime>
using namespace std;

long long fibonacci (int n) {
    if (n == 0 or n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    
}