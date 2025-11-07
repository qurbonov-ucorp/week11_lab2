#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int n;
    cout<<"Enter  elements: "<<endl;
    while (true) {
        cin>>n;
        if (n<0) {
            break;
        }
        v.push_back(n);
    }
    int even=0, odd=0;
    for(int i=0;i<v.size();i++) {
        if(v[i]%2==0) {
            even++;
        }else {
            odd++;
        }
    }
    cout<<"Number of even elements: "<<even<<endl;
    cout<<"Number of odd elements: "<<odd<<endl;
}