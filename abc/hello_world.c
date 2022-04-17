#include <stdio.h>
#include <io.h>
#include <unistd.h>

#include "system.h"

int main(){
	int ch = 0;
	const int nReadNum = 10; // max 1024
	int i, Value, nIndex=0,crop=0;
	float val;
	FILE *fp;
	fp=fopen("new.txt","w");

	printf("select the crop type:\n press 1.cotton \n 2.ragi\n 3.Rice\n 4.apple\n 5.Maize\n ");
	scanf("%d",&crop);
	printf("%d\n",crop);



	while(1){
		ch = IORD(SW_BASE, 0x00) & 0x07;

		printf("======================= %d, ch=%d\r\n", nIndex++, ch);
		// set measure number for ADC convert
		IOWR(ADC_LTC2308_BASE, 0x01, nReadNum);


		// start measure
		IOWR(ADC_LTC2308_BASE, 0x00, (ch << 1) | 0x00);
		IOWR(ADC_LTC2308_BASE, 0x00, (ch << 1) | 0x01);
		IOWR(ADC_LTC2308_BASE, 0x00, (ch << 1) | 0x00);
		usleep(1);

		// wait measure done
		while ((IORD(ADC_LTC2308_BASE,0x00) & 0x01) == 0x00);

		// read adc value
		for(i=0;i<nReadNum;i++){
			Value = IORD(ADC_LTC2308_BASE, 0x01);
			val=Value/1000.0;
			printf("\n CH%d=%.3fV (0x%04x)\r\n", ch, val, Value);

			if(crop==1)
			{
				if(val>=2){
					printf("less soil moisture for cotton put water\n");

			}
				else{
					printf("suffient water\n");
				}
			}
			if(crop==2){
				if(val>=3.8)
				{
					printf("less soil moisture for ragi put water \n");

				}
				else
				{
					printf("sufficent water\n");
				}
			}
		}

		usleep(200*1000);
	} // while
}

