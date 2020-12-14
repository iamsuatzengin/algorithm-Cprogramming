#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int hour,minute,second;
	// hour -> between 1 and 12
	char am_pm[3];
	scanf("%d:%d:%d%s",&hour,&minute,&second,am_pm);
	
	if(strcmp(am_pm,"PM")==0 && hour!=12){
		hour += 12;
	}
	else if(strcmp(am_pm,"AM")==0 && hour==12){
		hour = 0;
	}
	printf("%02d:%02d:%02d",hour,minute,second);

	return 0;
}
