#include<iostream>

using namespace std;

int main(){
	
 	int x , y ,z;
	long long int array[10000];
	
	scanf("%lld" , &x);
	
	for(y=0 ;y < x;y++){
		scanf("%lld" , &array[y]);
	} 
	
	long long int min = array[0]; 
	long long int max = array[0];
	 long int mincount=0;
	 long int maxcount=0;
	 
//	printf("%lld----\n" , min);

	for(y=0 ;y < x;y++){
		if( array[y] < min){
			min = array[y];
			
			mincount = mincount +1;
			
		}
	//	printf("****%lld\n****",mincount);
}

	for(y=0 ;y < x;y++){
		 if(array[y] > max ){
			max = array[y];
			maxcount = maxcount +1;
	}
	
//	printf("%lld" , maxcount);
}
	
	

 	printf("%lld\t%lld" , maxcount,mincount);
 //	printf("%lld" , mincount);
}
