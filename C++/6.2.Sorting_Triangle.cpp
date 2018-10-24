#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> &A) {
    int N=A.size();
    if( N<3 ) return 0;
    sort(A.begin(),A.end());
    for(int a=0; a<N-2; a++ ){
        if ((A[a]<A[a+1]+A[a+2])
            && (A[a+1]<A[a]+A[a+2])
            && (A[a+2]<A[a]+A[a+1])
           ){
                return 1;
        }
    }
    return 0;
}

int main(){
//    vector<int> A={10,2,5,1,8,20};
//    vector<int> A={10,50,5,1};
    vector<int> A={2147483647,2147483647,2147483647};

    std::cout << solution(A);
    
return 0;
}
// O(N*log(N)) -> 93%

/* Fails the following test
 * extreme_arith_overflow1 
 * overflow test, 3 MAXINTs
 */
