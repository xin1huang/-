#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int sum;
	for(int i=1;i<=n;i++){
		if(i%3!=0&&i%5!=0){
//			cout<<i<<" ";
			sum++;
		}
		if(i%(3*5)==0){
//			cout<<i<<" ";
			sum++;
		}	
	}
	cout<<sum<<endl;
	return 0;
}
