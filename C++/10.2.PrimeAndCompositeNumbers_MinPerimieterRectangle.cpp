#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int solution(int N){
    int min=2*(1+N);
    int B;
    for( int A = 2; A < sqrt(N)+1; A++){
        if( N%A==0){
            B=N/A;
            if(2*(A+B)<min){
                min = 2*(A+B);  
            }
            if( A>B ) {
                break;
            }
        }
    }
    return min ;
}

int main(){
    int N=36;
    std::cout << solution(N);
    
return 0;
}
// O(sqrt(N)) -> 100%
