#include<iostream>
#include<algorithm>

using namespace std ;

int main(){
	
	
}

void mig(long long int ar[], long long int  n){
	
	long long	int i;
	long long int array[200000] = 0;
	
	
	for(i=0 ; i <n ; i++ ){
		
		switch(ar[i]){
			case 1 :
				array[0]+=1;
				break;
			case 2 :
				array[1]+=1;
				break;
				
			case 3 :
				array[2]+=1;
				break;
				
			case 4 :
				array[3] +=1;
				break;
				
			case 5 :
				array[4] +=1;
				break;
			default:
				break;
						
		}
		
	}
	
	long long int   k = std::max_element(array, array+ n); 
	
	cout << 
}
