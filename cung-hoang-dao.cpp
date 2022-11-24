#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		if(a>=21&&b==3){
			cout<<"Bach Duong";
		}else if(a<=19&&b==4){
			cout<<"Bach Duong";
		}else if(a>=20&&b==4){
			cout<<"Kim Nguu";
		}else if(a<=20&&b==5){
			cout<<"Kim Nguu";
		}else if(a>=21&&b==5){
			cout<<"Song Tu";
		}else if(a<=20&&b==6){
			cout<<"Song Tu";
		}else if(a>=21&&b==6){
			cout<<"Cu Giai";
		}else if(a<=22&&b==7){
			cout<<"Cu Giai";
		}else if(a>=23&&b==7){
			cout<<"Su Tu";
		}else if(a<=22&&b==8){
			cout<<"Su Tu";
		}else if(a>=23&&b==8){
			cout<<"Xu Nu";
		}else if(a<=22&&b==9){
			cout<<"Xu Nu";
		}else if(a>=23&&b==9){
			cout<<"Thien Binh";
		}else if(a<=22&&b==10){
			cout<<"Thien Binh";
		}else if(a>=23&&b==10){
			cout<<"Thien Yet";
		}else if(a<=22&&b==11){
			cout<<"Thien Yet";
		}else if(a>=23&&b==11){
			cout<<"Nhan Ma";
		}else if(a<=21&&b==12){
			cout<<"Nhan Ma";
		}else if(a>=22&&b==12){
			cout<<"Ma Ket";
		}else if(a<=19&&b==1){
			cout<<"Ma Ket";
		}else if(a>=20&&b==1){
			cout<<"Bao Binh";
		}else if(a<=18&&b==2){
			cout<<"Bao Binh";
		}else if(a>=19&&b==2){
			cout<<"Song Ngu";
		}else{
			cout<<"Song Ngu";
		}
		cout << "\n";
	}
}

