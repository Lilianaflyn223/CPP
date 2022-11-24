#include <bits/stdc++.h>
using namespace std ;

int main(){
	int num;  
	cin >> num ;
	double arr[num] , res = 0, div = 0;
	for(int i = 0 ; i < num ; i ++) cin >> arr[i] ;
	sort(arr, arr + num) ;
	for(int i = 0 ; i < num ; i++){
		if(arr[i] != arr[0] && arr[i] != arr[num - 1]){
			res += arr[i] ;
			div++ ;
		}
	}
	cout << fixed << setprecision(2) << (res/div) ;
}