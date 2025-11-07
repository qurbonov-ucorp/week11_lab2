#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    for(int i=0;i<n;i++) {
        if(v[i]%2==1) {
            v[i]=2*v[i];
        }else {
            v[i]=v[i]/2;
        }
        cout<<v[i]<<" ";
    }
}