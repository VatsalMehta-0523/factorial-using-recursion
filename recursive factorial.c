#include <stdio.h>

int fact(int n);

int main(){
    int n;
    printf("enter number (for factorial) :");
    scanf("%d",&n);

    printf("factorial for %d is %d",n,fact(n));

    return 0;
}

int fact(int n){
    if (n==0){
        return -1 ;
    }
    else if ( n == 1 ){
        return n ;
    }
    else{
        return n*fact(n-1) ;
    }
}
