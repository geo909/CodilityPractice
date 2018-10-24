#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printvector(vector<int> &A){
    int sz=A.size();
    for (int i=0; i<sz; i++){
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}

int solution(vector<int> &A){
    int sz = A.size();
    int i;
    sort(A.begin(),A.end());
    for( i = 0; i < sz; i++){
        if( A[i] != i+1 ){
            return i+1;
        } 
    }
    return i+1;
}


int main(){
    vector<int> V = {};
    cout << solution(V);
return 0;
}

// O(N) or O(N * log(N)) -> 100%
