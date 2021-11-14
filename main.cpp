#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin>>n;

    int a=0, b=1, c=1;

    cout<< b <<endl;
    for (int i=0; i<=(n-1); i++) {
        if (c<=n) {
            cout << c <<endl;
            a= b;
            b= c;
            c= a+b;
        }
    }

    return 0;
}
