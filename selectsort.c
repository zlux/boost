#include "stdio.h"
#include "stdlib.h"

void output(int* pData, int iLen)
{
	int i = 0;
	for(i =0; i<iLen; i++)
	printf("%d ", pData[i]);
	
	printf("\n");
}

void selectSort(int* pData, int iLen)
{
	int i = 0;
	int j = i+1;
	int iMark = 0;
	int iTemp = 0;
	int ii = 0;

	for(i = 0; i< iLen; i++)
	{
		iMark = i;
		for(j = i+1; j < iLen; j++)
		{
			if(pData[j]<pData[iMark])
			iMark = j;	
		}
		/* do the shifting */
		if(iMark != i)
		{
			iTemp = pData[iMark];
			for(ii = iMark-1; ii >=i;  ii--)
			{
				pData[ii+1] = pData[ii];
			}	
			pData[i] = iTemp;
		}
	}
}
int main(void)
{
	int buf[100] = {0};
	int i = 0;
	while(scanf("%d", buf+i))
	{
		i++;
	}
	
	/* i = length and output the original */
	output(buf, i);
	
	/* sort the array */
	selectSort(buf, i);
	
	/* output again*/
	output(buf, i);
	
	getchar();
}
