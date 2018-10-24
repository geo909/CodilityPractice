#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> &A){
    sort(vector.begin(), vector.end());
    for( int i = 0; i < A.size(); i++){
        if( i+1 != A[i] ){
            return 0;
        } 
    }
    return 1;
}


int main(){
return 0;
}

// O(N) or O(N * log(N)) -> 100%
