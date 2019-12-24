#include <iostream>
#include <stdio.h>
using namespace std;

void reverse(char str[]){
	int i=0,j=0;
	while(str[i]!='\0'){
		i++;
	}

	
	for(j=i-1;j>=0;j--){
		cout<<str[j];
	}
	cout<<endl;
}

int main(int argc, char *argv[])
{	
	char str[]="junyiacademy";
 	reverse(str);
	 
  	return 0;
}


