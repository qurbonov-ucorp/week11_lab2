#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int unique=0;
    for (int i=0; i<n; i++) {
        if (v[i]!=v[i-1]) {
            unique++;
        }
    }
    cout<<"Number of unique elements: "<<unique<<endl;
    return 0;
}