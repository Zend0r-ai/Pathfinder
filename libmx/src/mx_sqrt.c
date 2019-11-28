#include "libmx.h"

int mx_sqrt(int x){
	if(x > 0)
		for(unsigned int i = 0; i * i <= (unsigned int)x; i++){
			if(i * i == (unsigned int)x)
				return i;
		} 
	return 0;
}
