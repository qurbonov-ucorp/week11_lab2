#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of rows and columns: ";
    cin>>n;
    vector<vector<int> > matrix(n,vector<int>(n));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>matrix[i][j];
        }
    }
    int sum=0;
    for(int j=0;j<n;j++) {
        sum+=matrix[0][j];
    }
    bool MagicSquare = true;
    for(int i=0;i<n;i++) {
        int rowsum=0;
        for(int j=0;j<n;j++) {
            rowsum+=matrix[i][j];
        }
        if(rowsum!=sum) {
            MagicSquare = false;
        }
    }
    for(int j=0;j<n;j++) {
        int colsum=0;
        for(int i=0;i<n;i++) {
            colsum+=matrix[i][j];
        }if (colsum!=sum) {
            MagicSquare = false;
        }
        int d1=0,d2=0;
        for(int i=0;i<n;i++) {
            d1+=matrix[i][i];
            d2+=matrix[i][n-i-1];
        }
        if(d1!=sum ||d2!=sum) {
            MagicSquare = false;
        }
    }
    if(MagicSquare) {
        cout<<"Magic Square"<<endl;
    }else {
        cout<<"Not Magic Square"<<endl;
    }
    return 0;

}