#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ar[10];



int main(){

    int n;
    int i ;
    scanf("%d" , &n);
    long long int a[10];
    long long int sum = 0;
    for(i=0 ; i< n ; i++){
        scanf("%lld" , &a[i]);
    }
    
    for(i=0 ; i < n ;i++){

        
        sum = sum + a[i];
    }

    printf("%lld" , sum);


    //verybigsum(a[10]);

    return 0;
}

