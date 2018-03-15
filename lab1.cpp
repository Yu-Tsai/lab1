#include <iostream>
using namespace std;

int main(){

int n;

cout<<"Please input an interger."<<endl;
cin>>n;
cout<<n;

while(n != 1){
	if(n % 2 != 0){
		n = n * 3 + 1;
	}else{
		n = n / 2;
	}
	cout<<" "<<n;
}

return 0;
}

