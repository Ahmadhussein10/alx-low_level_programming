#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
 char x [26] ={a,b,c,d,e,f,g,h,i,j,k,m,n,l,o,p,q,r,s,t,u,v,w,x,y,z};
 for(int i=0;i<26;i++)
 {
	 putchar(x[i]);
 }
 putchar('\n');
 return 0;
}
