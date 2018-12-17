#include <stdio.h>
int main()
{
	int a;
	printf("Masukan nilai bilangan : ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("Nilai bilangan adalah bilangan genap");
	}else{
		printf("Nilai bilangan adalah bilangan ganjil");
	}
}
