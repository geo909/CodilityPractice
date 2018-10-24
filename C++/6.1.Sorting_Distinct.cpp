#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> &A) {
    int N=A.size();
    if( N==0 ) return 0;
    if( N==1 ) return 1;
    sort(A.begin(),A.end());
    int count=1;
    int v=A[0];
    int i=0;
    while( i<N ){
        while( (i<N) && (A[i]==v) ){
            i++;    
        }
        if( i<N ){
            count++;
            v=A[i];
        }
    }
    return count;
}

int main(){
    vector<int> A={2,1,1,2,3,1};
    std::cout << solution(A);
    
    
return 0;
}
