#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;
    vector<int> v(n);
    vector<int> b(n);
    for (int i=0; i<n; i++) {
        cin>>v[i];
    }
    for (int i=0; i<n; i++) {
        cin>>b[i];
    }
    vector<int> v2(n);
    for (int i=0; i<n; i++) {
        v2[i]=v[i]+b[i];
    }
    for (int i=0; i<n; i++) {
        cout<<v2[i]<<" ";
    }
    return 0;
}