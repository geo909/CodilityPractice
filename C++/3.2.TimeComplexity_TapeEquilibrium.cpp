#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int solution(vector<int> &A){
    int S=A[0];
    int N=A.size();
    for( int i = 1; i < N; i++){
        S+=A[i];
    }
    int MIN=abs(-S+2*A[0]);
    int prevsum=A[0]+A[1];
    int D;
    for( int P=2; P<N; P++ ){
        D=abs(-S+2*prevsum);
        prevsum+=A[P];
        if( D<MIN ){
            MIN = D;            
        } 
    }
    return MIN; 
}


int main(){
vector<int> A={1};
cout << solution(A);

return 0;
}
