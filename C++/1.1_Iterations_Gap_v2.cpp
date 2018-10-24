#include <iostream>
#include <bitset>
using namespace std;

int solution(int N){
    bitset<64> b(N);
    if( b.count() == 1 ) return 0; // divisible by 2

    int first = 0;
    while( b[first]==0 ) first++;
    int last = 63;
    while( b[last]==0 ) last--;

    bool allareones=1;
    for( int i = first; i < last+1; i++){
        if( b[i]==0 ){
            allareones=0;
            break;
        } 
    }
    if( allareones) return 0;
    
    int i=first;
    int count;
    int max=0;
    while( i<last+1 ){
        while( (i<last+1) && (b[i]==1) ){
            i++;
        }
        count = 0;
        while( (i<last+1) && (b[i]==0) ){
            i++;
            count++;
        }
        if( count>max ) max = count;
    }

    return max;
}

int main(){
    int N;
    N=1041;
    std::cout << solution(N);
    
return 0;
}
