#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> array, int x){

    int first = 0;
    int last = array.size();
    int target = -1;
    while (first <= last) {
        int k = (first+last)/2;

        if (array[k] == x) {
        // x found at index k
        return k;
    }
    if (array[k] > x) last = k-1;
        else first = k+1;
    }
    return -1;
}
int main() {
    vector<int> vecvec = {1,2,3,4,5,6,7,8,9};
    int target = 5;
    int a = binarysearch(vecvec, target);
}



