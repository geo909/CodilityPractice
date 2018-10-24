#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A){
    sort(A.begin(),A.end());
    int i = 0;
    int j = 0;
    int count = 0;
    while(count % 2 == 0){
        count = 0;
        i=j;
        while(A[j]==A[i]){
           j++;
           count++;
        }
    }
   return A[j-1]; 
}

int main(){

    vector<int> v={6};
    cout << solution(v);

return 0;
}

/* Detected time complexity: O(N) or O(N*log(N)) */
// 100 %
