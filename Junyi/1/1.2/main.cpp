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
cout<<" ";
}

int main(int argc, char *argv[])
{

	char str[]="flipped";
 	reverse(str);
 	
	char str1[]="class";
 	reverse(str1);
 	
 	char str2[]="room";
 	reverse(str2);
 	
 	char str3[]="is";
 	reverse(str3);
 	
 	char str4[]="important";
 	reverse(str4);
  	return 0;
}


