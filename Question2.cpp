#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter matrix size : ";
    int n; cin>>n;

    vector<vector<int>> mat(n, vector<int>(n));

    for(int i = 0; i<n; ++i){
        cout<<"Enter "<<i+1<<" row elements : ";
        for(int j = 0; j<n; ++j){
            cin>>mat[i][j];
        }
    }

    for(int i = 0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            swap(mat[i][j],mat[j][i]);
        }
    }

    cout<<"Transposed matrix is : "<<endl;

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}