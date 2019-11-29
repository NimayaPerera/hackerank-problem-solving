#include<iostream>

using namespace std;
void func(int,int ar[],int);

int main(){
	
	int m,f;
	int array[100];
	
	int i;
	cin >> m;
	cin >> f;
	
	for(i=0;i < m ; i++){
		scanf("%d",&array[i]);
	}
	
	func(m,array,f);
	
}

void func(int n , int ar[], int k){
	
	int i , j;
	int count = 0;
	
	for(i=0; i < n ; i++){
		
		for(j=0; j < n ; j++){
			if(ar[i]< ar[j] && ((ar[i]+ar[j])%k == 0)){
				count +=1;
			}
			
		}
	}
	
	cout << count;
	
}
