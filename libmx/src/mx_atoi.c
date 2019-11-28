#include "libmx.h"

int mx_atoi(const char *s){
	int check = 0;
	int res = 0;
	while(*s == ' ')
	  	s++;
	if(*s == '-')
	 {
	  	check = -1;
	  	s++;
	 }
	 else if(*s == '+')
	  	s++;
	 while(mx_isdigit(*s)){
	  	res += *s - 48;
	  	res *= 10;
	  	s++;
	 } 
	 res /= 10;
	 if(check == -1)
	  	res = -res;
	 return res;
}
