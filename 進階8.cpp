#include<iostream> 
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int N;
    int T;
    int n, t, m; 
    int money[105];
    int i;	
	printf("�п�J���X���U�ȡG"); 
    scanf("%d",&N);
    printf("�п�J���X������G"); 
    scanf("%d",&T);
    i=0;
    
    while( i<N )
    {money[i] = 0; 
    i = i+1;}

    printf("�п�J���X���U�ȡA�s���٬O���ڡA�s�کδ��ڤFm���G\n"); 
    i = 0;

    while( i<T ){
    scanf("%d%d%d",&n,&t,&m); 

    if( t==1 )
    {money[n] = money[n] + m;}
    
    if( t==2 )
    {money[n] = money[n] - m;}
    
    i = i+1;}
    
    printf("�C�W�U�Ȫ��s�ڦp�U�G\n"); 
    i = 0;

    while( i<N )
    {	printf("��%d�W�U�ȡG�Ѿl�s�ڬ�%d��\n",i+1,money[i]); 
        i = i+1;}
        
	system("PAUSE");
    return 0;  
}
