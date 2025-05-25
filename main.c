#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void oyun_sahipleri()
{
	printf("---- Oyunu Olusturan ----\n");
	printf("Serif Berke Karaman ve Deniz Kilinc");
	printf("\n\n");
}
	
void oynanis(int n)
{
	char harita[n][n];
	char gizli_tahta[n][n];
	
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			harita[i][j]='D';
			gizli_tahta[i][j]='D';
		}
	}
	
	
	gizli_tahta[0][0]='G';
	harita[0][0]='G';
	gizli_tahta[n-1][n-1]='C';
	harita[n-1][n-1]='C';
	
	
	int	mayin_sayisi = (n*n*5)/100;
	
	srand(time(NULL));
	int i=0;
	
	while(i<mayin_sayisi)
	{
		int satir,sutun;
		satir = rand()% n;
		sutun = rand()% n;
		if(gizli_tahta[satir][sutun]!='o' && gizli_tahta[satir][sutun]!='G' && gizli_tahta[satir][sutun]!='C')
		{
			gizli_tahta[satir][sutun]='o';
			if(satir-1>=0){
				if(gizli_tahta[satir-1][sutun]!='o' && gizli_tahta[satir-1][sutun]!='x' && gizli_tahta[satir-1][sutun]!='G' && gizli_tahta[satir-1][sutun]!='C')
				{
					gizli_tahta[satir-1][sutun]='x';
				}
			}
			if(satir+1<n){
				if(gizli_tahta[satir+1][sutun]!='o' && gizli_tahta[satir+1][sutun]!='x' && gizli_tahta[satir+1][sutun]!='G' && gizli_tahta[satir+1][sutun]!='C')
				{
					gizli_tahta[satir+1][sutun]='x';
				}
			}
			if(sutun-1>=0){
				if(gizli_tahta[satir][sutun-1]!='o' && gizli_tahta[satir][sutun-1]!='x' && gizli_tahta[satir][sutun-1]!='G' && gizli_tahta[satir][sutun-1]!='C')
				{
					gizli_tahta[satir][sutun-1]='x';
				}
			}
			if(sutun+1<n){
				if(gizli_tahta[satir][sutun+1]!='o' && gizli_tahta[satir][sutun+1]!='x' && gizli_tahta[satir][sutun+1]!='G' && gizli_tahta[satir][sutun+1]!='C')
				{
					gizli_tahta[satir][sutun+1]='x';
				}
			}
			i++;
		}
	}
	
	
	
	int kontrol=1;
	char tus=NULL;
	printf("Baslamak icin B tusuna basiniz.\n");
	printf("Hareket etmek icin (w,a,s,d) tuslarini kullanin.");
	
	int satir=0,sutun=0;
	
	do
	{
		scanf("%c",&tus);

		if(tus!=NULL)
		{
			if(tus=='B' || tus=='b')
			{
				harita[0][0]='P';
				for(int i=0;i<n;i++)
				{
					for(int j=0;j<n;j++)
					{
						printf("%c  ",harita[i][j]);
					}
					printf("\n");
				
				}
				printf(" -- Isterseniz oyun tahtasini yeniden konumlandirmak icin R tusuna basiniz.\n");
				
			}
			if(tus=='R' || tus=='r')
			{
				
				satir=0,sutun=0;
					for(int i=0;i<n;i++)
					{
						for(int j=0;j<n;j++)
						{
							harita[i][j]='D';
						}
					}
					harita[0][0]='P';
					harita[n-1][n-1]='C';
					
					for(int i=0;i<n;i++)
					{
						for(int j=0;j<n;j++)
						{
							printf("%c  ",harita[i][j]);
						}
						printf("\n");
						
					}
					
					for(int i=0;i<n;i++)
					{
						for(int j=0;j<n;j++)
						{
							gizli_tahta[i][j]='D';
						}
					}
					gizli_tahta[0][0]='G';
					gizli_tahta[n-1][n-1]='C';
					i =0;
					while(i<mayin_sayisi)
	           {	
					int satir,sutun;
					satir = rand()% n;
					sutun = rand()% n;
					if(gizli_tahta[satir][sutun]!='o' && gizli_tahta[satir][sutun]!='G' && gizli_tahta[satir][sutun]!='C')
					{
						gizli_tahta[satir][sutun]='o';
						if(satir-1>=0){
							if(gizli_tahta[satir-1][sutun]!='o' && gizli_tahta[satir-1][sutun]!='x' && gizli_tahta[satir-1][sutun]!='G' && gizli_tahta[satir-1][sutun]!='C')
							{
								gizli_tahta[satir-1][sutun]='x';
							}
						}
						if(satir+1<n){
							if(gizli_tahta[satir+1][sutun]!='o' && gizli_tahta[satir+1][sutun]!='x' && gizli_tahta[satir+1][sutun]!='G' && gizli_tahta[satir+1][sutun]!='C')
							{
								gizli_tahta[satir+1][sutun]='x';
							}
						}
						if(sutun-1>=0){
							if(gizli_tahta[satir][sutun-1]!='o' && gizli_tahta[satir][sutun-1]!='x' && gizli_tahta[satir][sutun-1]!='G' && gizli_tahta[satir][sutun-1]!='C')
							{
								gizli_tahta[satir][sutun-1]='x';
							}
						}
						if(sutun+1<n){
							if(gizli_tahta[satir][sutun+1]!='o' && gizli_tahta[satir][sutun+1]!='x' && gizli_tahta[satir][sutun+1]!='G' && gizli_tahta[satir][sutun+1]!='C')
							{
							gizli_tahta[satir][sutun+1]='x';
							}
						}
						i++;
					}
				}
					
			}
			if(tus=='D' || tus=='d')
			{
				sutun+=1;
				harita[satir][sutun]='P';
				if(sutun>=n)
				{
					sutun-=1;
					printf("Oyun tahtasi disina cikamazsiniz!\n");
				}
				else
				{
					for(int i=0;i<n;i++)
					{
						for(int j=0;j<n;j++)
						{
							printf("%c  ",harita[i][j]);
						}
					printf("\n");
				
					}
				}
				
				
				if(gizli_tahta[satir][sutun]=='o')
				{
					 printf("Mayina  bastiniz!!");
					 break;
				}
				else if(gizli_tahta[satir][sutun]=='x')
				{
					printf("Riskli bolgeye bastiniz basa donuldu :(\t");
					printf(" -- Isterseniz oyun tahtasini yeniden konumlandirmak icin R tusuna basiniz.\n");
					satir=0,sutun=0;
					for(int i=0;i<n;i++)
					{
						for(int j=0;j<n;j++)
						{
							harita[i][j]='D';
						}
					}
					harita[0][0]='P';
					harita[n-1][n-1]='C';
				}
				else if(gizli_tahta[satir][sutun]=='C')
				{
					printf("Cikisa ulastiniz tebrikler :) ");
					break;
				}
			}
			if(tus=='A' || tus=='a')
			{
				sutun-=1;
				harita[satir][sutun]='P';
				if(sutun<0)
				{
					sutun+=1;
					printf("Oyun tahtasi disina cikamazsiniz!\n");
				}
				else
				{
					for(int i=0;i<n;i++)
					{
						for(int j=0;j<n;j++)
						{
							printf("%c  ",harita[i][j]);
						}
					printf("\n");
				
					}
				}
				
				
				if(gizli_tahta[satir][sutun]=='o')
				{
					 printf("Mayina  bastiniz!!");
					 break;
				}
				else if(gizli_tahta[satir][sutun]=='x')
				{
					printf("Riskli bolgeye bastiniz basa donuldu :(\t");
					printf(" -- Isterseniz oyun tahtasini yeniden konumlandirmak icin R tusuna basiniz.\n");
					satir=0,sutun=0;
					for(int i=0;i<n;i++)
					{
						for(int j=0;j<n;j++)
						{
							harita[i][j]='D';
						}
					}
					harita[0][0]='P';
					harita[n-1][n-1]='C';
				}
				else if(gizli_tahta[satir][sutun]=='C')
				{
					printf("Cikisa ulastiniz tebrikler :) ");
					break;
				}
			}
			if(tus=='S' || tus=='s')
			{
				satir+=1;
				harita[satir][sutun]='P';
				if(satir>=n)
				{
					satir-=1;
					printf("Oyun tahtasi disina cikamazsiniz!\n");
				}
				else
				{
					for(int i=0;i<n;i++)
					{
						for(int j=0;j<n;j++)
						{
							printf("%c  ",harita[i][j]);
						}
						printf("\n");
				
					}
				}
				
				
				if(gizli_tahta[satir][sutun]=='o')
				{
					 printf("Mayina  bastiniz!!");
					 break;
				}
				else if(gizli_tahta[satir][sutun]=='x')
				{
					printf("Riskli bolgeye bastiniz basa donuldu :(\t");
					printf(" -- Isterseniz oyun tahtasini yeniden konumlandirmak icin R tusuna basiniz.\n");
					satir=0,sutun=0;
					for(int i=0;i<n;i++)
					{
						for(int j=0;j<n;j++)
						{
							harita[i][j]='D';
						}
					}
					harita[0][0]='P';
					harita[n-1][n-1]='C';
				}
				else if(gizli_tahta[satir][sutun]=='C')
				{
					printf("Cikisa ulastiniz tebrikler :) ");
					break;
				}
			}
			if(tus=='W' || tus=='w')
			{
				satir-=1;
				harita[satir][sutun]='P';
				if(satir<0)
				{
					satir+=1;
					printf("Oyun tahtasi disina cikamazsiniz!\n");
				}
				else
				{
					for(int i=0;i<n;i++)
					{
						for(int j=0;j<n;j++)
						{
							printf("%c  ",harita[i][j]);
						}
						printf("\n");
				
					}
				}
				
				
				if(gizli_tahta[satir][sutun]=='o')
				{
					 printf("Mayina  bastiniz!!");
					 break;
				}
				else if(gizli_tahta[satir][sutun]=='x')
				{
					printf("Riskli bolgeye bastiniz basa donuldu :(\t");
					printf(" -- Isterseniz oyun tahtasini yeniden konumlandirmak icin R tusuna basiniz.\n");
					satir=0,sutun=0;
					for(int i=0;i<n;i++)
					{
						for(int j=0;j<n;j++)
						{
							harita[i][j]='D';
						}
					}
					harita[0][0]='P';
					harita[n-1][n-1]='C';
				}
				else if(gizli_tahta[satir][sutun]=='C')
				{
					printf("Cikisa ulastiniz tebrikler :) ");
					break;
				}
			}
		}
		
		
	}while(kontrol==1);
	
	
}


int main(){
	
	oyun_sahipleri();
	int n;
	printf("Oyun tahtasi kaca kaclik olsun ? \n");
	scanf("%d",&n);
	
	oynanis(n);
	
	
	return 0;
}