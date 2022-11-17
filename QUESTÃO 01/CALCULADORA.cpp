#include <stdio.h>
 
int main() {
 int N,res;
 scanf("%d",&N);
 for (int i= 1; i <= 10; i++){
     res = i * N;
     printf("%d x %d = %d\n",i,N,res);
 }
    
 
    return 0;
}

