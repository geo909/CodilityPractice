#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> A, int K){
    vector<int> result;
    int sz = A.size();
    if( sz == 0 ){
        return A;
    } 
    K = K % sz;
    if( (K % sz == 0 ){
        return A;
    } 
    for( int i = sz-K; i < sz ; i++){
        result.push_back(A[i]) ;
    }
    for( int i = 0; i < sz-K; i++){
        result.push_back(A[i]);
    }
    return result;
}

void printvector(vector<int> V){
    for( int i = 0; i < V.size(); i++){
        cout << V[i];
    }
    cout << endl;
}


int main(){
    vector<int> V;
    int K;
    V={1,2 ,3 ,4 ,5, 6, 7};
    K=5;
    printvector(V);
    V = solution(V,K);
    printvector(V);
return 0;
}
