#include <stdio.h>


void ArrayPrint(int *Arr, int size );
int main ()
{
	int Arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int Size = sizeof(Arr)/sizeof(Arr[0]);
	ArrayPrint(Arr,Size);

return 0 ;


}


void ArrayPrint(int *Arr, int size )
{
	int i ;
	for(i=0;i<size;i++)
	{
		printf("%d	",Arr[i]);
	}
	printf("\n");

}

