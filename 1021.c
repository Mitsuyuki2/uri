#include<stdio.h>
main()
{
	int cem=0,dez=0,cinq=0,vinte=0,cinco=0,dois=0,um=0,m50=0,m25=0,m10=0,m5=0,m1=0,i,d; 
	scanf("%d.%d",&i,&d);
		while(i>=100)
		{
			cem++;
			i-=100;
		}
		while(i>=50)
		{
			cinq++;
			i-=50;
		}
		while(i>=20)
		{
			vinte++;
			i-=20;
		}
		while(i>=10)
		{
			dez++;
			i-=10;
		}
		while(i>=5)
		{
			cinco++;
			i-=5;
		}
		while(i>=2)
		{
			dois++;
			i-=2;
		}
		while(i>=1)
		{
			um++;
			i-=1;
		}
		while(d>=50)
		{
			m50++;
			d-=50;
		}
		while(d>=25)
		{
			m25++;
			d-=25;
		}
		while(d>=10)
		{
			m10++;
			d-=10;
		}
		while(d>=5)
		{
			m5++;
			d-=5;
		}
		while(d>=1)
		{
			m1++;
			d-=1;
		}
		printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",cem,cinq,vinte,dez,cinco,dois,um,m50,m25,m10,m5,m1);
		return 0;
	}