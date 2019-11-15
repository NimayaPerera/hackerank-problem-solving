#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){
    
    int i ,j;
    int alice[5];
    int bob[5];
    for(i=0;i<3;i++){
        
        scanf("%d\t",&alice[i]);
        
    }
    
        for(i=0;i<3;i++){
        
        scanf("%d\t",&bob[i]);
        
    }
    
    int almark = 0; int bobmark = 0;
    for(i=0,j=0;i<3,j<3;i++,j++){
        
        if(alice[i] > bob[j]){
            almark = almark +1;
        }
         else   if(alice[i] < bob[j]){
            bobmark = bobmark +1;
        }
    
            if(alice[i] == bob[j]){
            bobmark = bobmark +0;
            almark = almark +0;
           
        }
        
        }
        
        printf("%d %d",almark,bobmark);    
    }
