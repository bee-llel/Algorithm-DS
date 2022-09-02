#include<bits/stdc++.h>
using namespace std;
int main() {

int array[6]={11,12,13,14,15,16};
int a = 0, b = 6-1;
int x = 15;
std::cout<<"hey";
while (a <= b) {
    int k = (a+b)/2;
    if (array[k] == x) {
    // x found at index k
    cout<<x;
    }
    if (array[k] > x) b = k-1;
        else a = k+1;
    }
}



