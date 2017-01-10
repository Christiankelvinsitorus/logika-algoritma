# include <stdio.h>
# include <conio.h>
# include <iostream.h>

void main()
{ clrscr();
   int hasil = 1,bil,i;
   printf("PROGRAM MENGHITUNG FAKTORIAL");
   printf("\n\nbilangan:");scanf("%d",&bil);
   printf("faktorial:");
   for(i=1;i<=bil;i++);
{
	printf("%d x ",i);
   hasil=i*hasil;
}
	printf("=%d",hasil);
   getch();
}


