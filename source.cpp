/*
Odev No:2
Ogrenci No:13253056
Tugay ŞENGEL
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int hazne[50];
int max;
int hz[11];
int jeton_at();
int jeton_goruntule();
int histogram_ciz();
int max_jeton_haznesi();

int histogram_ciz()
{
	printf("Jetonlarin Histogram Seklinde Dagilimlari : \n\n");
	for (int i = max; i > 0; i--)
	{
		printf("|%3d |", i);
		for (int l = 0; l<10; l++)
		{
			if (i > hz[l+1])
				printf("   |");
			else
				printf(" o |");
		}
		printf("\n");
	}
	printf("|----|---|---|---|---|---|---|---|---|---|---|\n|    | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10|\n|----|---|---|---|---|---|---|---|---|---|---|\n");
	return 0;
}
int max_jeton_haznesi()
{
	int i;
	max = 0;
	for (i = 1; i <= 10; i++)
	{
		if (hz[i]>max)
		{
			max = hz[i];
		}
	}
	//printf("Hazne Sayisi = %d\n", max); yazarken kodun dogrulugunu kontrol etmek icin eklemistim.Simdi islevsiz.
	return 0;
}
int jeton_goruntule()
{
	int i;
	for (i = 0; i <= 49; i++) 
	{
		switch (hazne[i])
		{
		case 1:
			hz[1]++; // 1 numaralı jetonları sayıyoruz.
			break;
		case 2:
			hz[2]++; // 2 numaralı jetonları sayıyoruz.
			break;
		case 3:
			hz[3]++; // 3 numaralı jetonları sayıyoruz.
			break;
		case 4:
			hz[4]++; // 4 numaralı jetonları sayıyoruz.
			break;
		case 5:
			hz[5]++; // 5 numaralı jetonları sayıyoruz.
			break;
		case 6:
			hz[6]++; // 6 numaralı jetonları sayıyoruz.
			break;
		case 7:
			hz[7]++; // 7 numaralı jetonları sayıyoruz.
			break;
		case 8:
			hz[8]++; // 8 numaralı jetonları sayıyoruz.
			break;
		case 9:
			hz[9]++; // 9 numaralı jetonları sayıyoruz.
			break;
		case 10:
			hz[10]++; // 10 numaralı jetonları sayıyoruz.
			break;
		default:
			break;
		}
	}
	for (i = 1; i<=10; i++)
	{
		printf("%d.ci haznedeki jeton sayisi : %d\n", i, hz[i]);
	}
	return 0;
}
int jeton_at()
{
	int i;
	srand(time(NULL));
	for (i = 0; i <= 49; i++)
	{
		//Sleep((i*15)+i/2); // zamana gore urettigi icin yakin sayilar cikiyordu.Biraz macera katalim :)
		hazne[i] = rand() % 10;
		if (hazne[i] == 0) //0'daki değeri 10'a atadim.
		{
			hazne[i] = 10;
		}
	}
	return 0;
}
int main()
{
	//printf("Biraz bekletiyoruz kusura bakmayiniz :)\n");
	jeton_at();
	jeton_goruntule();
	max_jeton_haznesi();
	printf("\n");
	histogram_ciz();
	_getch();
	return 0;
}
