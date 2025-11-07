#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;
    vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin>>v[i];
    }
    bool ascending = true;
    for (int i=1; i<n; i++) {
        if (v[i]<v[i-1]) {
            ascending = false;
        }else {
            ascending = true;
        }
    }
    if (ascending) {
        cout<<"Sorted"<<endl;
    }else {
        cout<<"Unsorted"<<endl;
    }
}