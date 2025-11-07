#include <iostream>
#include <vector>
using namespace std;
int main() {
    int r,c;
    cout<<"Enter the number of columns: ";
    cin>>r;
    cout<<"Enter the number of rows: ";
    cin>>c;
    vector<vector<int> > matrix(r,vector<int>(c));
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>matrix[i][j];
        }
    }
    vector<vector<int> > matrix2(r,vector<int>(c));
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>matrix2[i][j];
        }
    }
    vector<vector<int> > matrix3(r,vector<int>(c));
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            matrix3[i][j]=matrix2[i][j]+matrix[i][j];
        }
    }
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
    }
}