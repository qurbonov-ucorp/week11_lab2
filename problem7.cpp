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
    int max=v[0];
    int pos=0;
    for (int i=1; i<n; i++) {
        if (v[i]>max) {
            max=v[i];
            pos=i;
        }
    }
    cout<<"Index = "<<pos<<endl;
}

