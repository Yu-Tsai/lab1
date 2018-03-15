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

第6行宣告變數n

第9、10行讓使用者輸入一個整數n並輸出顯示

第12~19行，使用while迴圈操作變數n。如果n為奇數(n除2餘數不為0)時，n乘3倍加1;若n為偶數(n除2餘數為0)，則n除2。操作完n後輸出顯示，若n為1，跳出迴圈。
