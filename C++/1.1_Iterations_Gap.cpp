#include <iostream>
#include <bitset>
using namespace std;


int solution(int N) {
    // b is the binary representation of N
    bitset<64> b(N); 
    cout << b << endl;

    if( b.count()<=1 ) return 0;
    // Get rid of the zeros in the tail
    while( !b.test(0) ){
        b >>= 1;
    }

    int gap;
    int MAX=0;
    while( b.any() ){           // Are there any 1's in b?
        gap=0;
        //while( !b.test(0) ){     // while b[0]==0
        while( b[0]==0 ){     // while b[0]==0
           b>>=1; 
           gap++;
        }
        if( gap > MAX ) MAX=gap;
        b>>=1;
    }
    return MAX;
}


int main(){
    // Because of the trailing zeros, I originally had problems with:
    // int  N = 328;    // 101001000_2 (correct asnwer is 2)
    // int  N = 6;      //110_2 (correct answer is 0)
    // int  N = 51712;  //110010100000000_2; (correct answer is 2)
    int N=1041;
    cout << solution(N);
return 0;
}
