#include <stdio.h>
#include <stdlib.h>
#define MAX_TINGGI 41

struct box
{
 int panjang,lebar,tinggi;
}b;

typedef struct box box;

int volume(box b)	{
 return (b.panjang*b.lebar*b.tinggi);
}

int x(box b)	{
	if(b.tinggi > 40)
 {
	return 0;
 }
 else
 {
	return 1;
 }
}

int main()
{
 int n;
 scanf("%d", &n);
 box *boxes = malloc(n * sizeof(box));
 for (int i = 0; i < n; i++)	{
   scanf ("%d%d%d", &boxes[i].panjang, &boxes[i].lebar, &boxes[i].tinggi);
  }
  for (int i = 0; i < n; i++)	{
   if (x(boxes[i]))	{
    printf("%d\n", volume(boxes[i]));
   }
  } 
  return 0;
}  