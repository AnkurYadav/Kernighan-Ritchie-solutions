#include <stdio.h>
#include <string.h>

 /* write the function htoi(s), which converts a string of  hexadecimal 
 digits (inclucing an optional 0x or oX) into its equivalent integer value */

int htoi(char s[])
{
	int n = strlen(s);    /* length of string */
	int num = 0;		  /* resulting int */
	int i;			      /* string counter */
	if(s[0] == '0' && (s[1] == 'x' || s[1] == 'X')){
		i = 2;			  /* set starting of hex no. at positon 2 */
	}
	else{
		i = 0;
	}
	while (s[i] != '\0'){
		int m = 0;     		  /* correspinding values of notations */
		switch(s[i]){
			case '0':
				m = 0;
				break;
			case '1':
				m = 1;
				break;
			case '2':
				m = 2;
				break;
			case '3':
				m = 3;
				break;
			case '4':
				m = 4;
				break;
			case '5':
				m = 5;
				break;
			case '6':
				m = 6;
				break;
			case '7':
				m = 7;
				break;
			case '8':
				m= 8;
				break;
			case '9':
				m = 9;
				break;
			case 'a':case 'A':
				m = 10;
				break;
			case 'b':case 'B':
				m = 11;
				break;
			case 'c':case 'C':
				m = 12;
				break;
			case 'd':case 'D':
				m = 13;
				break;
			case 'e':case 'E':
				m = 14;
				break;
			case 'f':case 'F':
				m = 15;
				break;
			default:
				return -1; 
				break;
		}
		int p = 1;
		for(int j = 0; j < (n-i-1); j++){
			p *= 16;
		}
		
		num += m * p;
		i++;
	}
	return num;
}

int main(void)
{
	int n = htoi("0x1f");
	if(n == -1){
		printf("invalid hexadecimal no.\n");
	}
	else{
		printf("%d\n", n);
	}
}