 
#include <stdio.h>
int main()
{
	int n,x[100],y[100],a=0;
	long long inner=0;
		printf("Berikan banyak vektor : ");
		scanf("%d",&n);
		while(n!=0)
		{
			printf("Berikan x dan y dari vektor ke %d : ",a+1);
			scanf("%d%d",&x[a],&y[a]);
			inner+=x[a]*y[a];
			n--;
			a++;}
		}
		printf("Hasil perkalian vektor adalah %11d\n",inner);
		//getch();
   return 0;
}
