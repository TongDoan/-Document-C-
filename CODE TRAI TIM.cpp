#include <stdio.h>
#include <math.h>
#include <windows.h>
int a=10;int b=7;
int s=10;int d=8;
int e=10;int f=9;
int g=10;int v=10;
int i=10;int k=11;
int l=10;int m=12;
int p=10;int q=13;
int x=10;int y=14;
int z=10;int t=15;
void gotoxy(int x, int y)
{
static HANDLE h = NULL;
if(!h)
h = GetStdHandle(STD_OUTPUT_HANDLE);
COORD c = { x, y };
SetConsoleCursorPosition(h,c);
}
int main(){
//ab
while(a<50)
{
gotoxy(10,7);puts(" Hey Girl !!!");
gotoxy(a,b);
puts("     ***       *** ");
a++;
Sleep(100);
}
//sd
while(s<50)
{

gotoxy(10,8);puts(" Do you know ...");
gotoxy(s,d);
puts("   *******   ******* ");
s++;
Sleep(100);
}
//ef
while(e<50)
{
gotoxy(10,9);puts(" Every day,I always...");
gotoxy(e,f);
puts("  ********* ********* ");
e++;
Sleep(100);
}
//gv
while(g<50)
{

gotoxy(10,10);puts(" Miss you,");
gotoxy(g,v);
puts("  ******************* ");
g++;
Sleep(100);
}
//ik
while(i<50)
{
gotoxy(10,11);puts(" Miss your smile,");
gotoxy(i,k);
puts("   ***************** ");
i++;
Sleep(100);
}
//lm
while(l<50)
{

gotoxy(10,12);puts(" Miss your voice,");
gotoxy(l,m);
puts("     *************");
l++;
Sleep(100);
}
//pq
while(p<50)
{
gotoxy(10,13);puts(" Miss your eyes,...");
gotoxy(p,q);
puts("        ******* ");
p++;
Sleep(100);
}
//xy
while(x<50)
{

gotoxy(10,14);puts("And today,I want to tell you that:");
gotoxy(x,y);
puts("          *** ");
x++;
Sleep(100);
}
//zt
while(z<50)
{

gotoxy(10,15);puts(" '<3 I LOVE YOU <3' ");
gotoxy(z,t);
puts("           * ");
z++;
Sleep(200);
}
printf("\n\n");
}
