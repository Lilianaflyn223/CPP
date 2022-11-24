#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int day, month;
        cin >> day >> month;
		if(month == 2 ){
			while(day > 29){
				month++ ;
				day -= 29 ;
			}
			while(month > 12){
				month -= 12 ;
				if(month == 2 && day > 29){
					day -= 29 ;
					month++ ;
				}
			}
		}
		else{
			while(day > 31){
	        	day -= 31 ;
	        	month += 1 ;
			}
			while(month > 12){
				month -= 12 ;
				if(month == 2 && day > 29){
					day -= 29 ;
					month++ ;
				}
			}
		}
        switch (month) {
            case 1:
            if (day > 0 && day <= 19) {
                cout << "Ma Ket" << endl;
            }
            else if (day >= 20 && day <= 31) {
                cout << "Bao Binh" << endl;
            }
            break;
            case 2:
            if (day > 0 && day <= 18) {
                cout << "Bao Binh" << endl;
            }
            else if (day >= 19 && day <= 29) {
                cout << "Song Ngu" << endl;
            }
            break;
            case 3:
            if (day > 0 && day <= 20) {
                cout << "Song Ngu" << endl;
            }
            else if (day >= 21 && day <= 31) {
                cout << "Bach Duong" << endl;
            }
            break;
            case 4:
            if (day > 0 && day <= 19) {
                cout << "Bach Duong" << endl;
            }
            else if (day >= 20 && day <= 30) {
                cout << "Kim Nguu" << endl;
            }
            break;
            case 5:
            if (day > 0 && day <= 20) {
                cout << "Kim Nguu" << endl;
            }
            else if (day >= 21 && day <= 31) {
                cout << "Song Tu" << endl;
            }
            break;
            case 6:
            if (day > 0 && day <= 20) {
                cout << "Song Tu" << endl;
            }
            else if (day >= 21 && day <= 30) {
                cout << "Cu Giai" << endl;
            }
            break;
            case 7:
            if (day > 0 && day <= 22) {
                cout << "Cu Giai" << endl;
            }
            else if (day >= 23 && day <= 31) {
                cout << "Su Tu" << endl;
            }
            break;
            case 8:
            if (day > 0 && day <= 22) {
                cout << "Su Tu" << endl;
            }
            else if (day >= 23 && day <= 31) {
                cout << "Xu Nu" << endl;
            }
            break;
            case 9:
            if (day > 0 && day <= 22) {
                cout << "Xu Nu" << endl;
            }
            else if (day >= 23 && day <= 30) {
                cout << "Thien Binh" << endl;
            }
            break;
            case 10:
            if (day > 0 && day <= 22) {
                cout << "Thien Binh" << endl;
            }
            else if (day >= 23 && day <= 31) {
                cout << "Thien Yet" << endl;
            }
            break;
            case 11:
            if (day > 0 && day <= 22) {
                cout << "Thien Yet" << endl;
            }
            else if (day >= 23 && day <= 30) {
                cout << "Nhan ma" << endl;
            }
            break;
            case 12:
            if (day > 0 && day <= 21) {
                cout << "Nhan Ma" << endl;
            }
            else if (day >= 22 && day <= 31) {
                cout << "Ma Ket" << endl;
            }
            break;
        }
    }
    
}