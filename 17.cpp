#include <stdio.h>
int main(){
int num[5];
int min,at;
int i;

for (i=0; i<5; i++){
printf("¿é¤J¼Æ¦r %d=",i);
scanf("%d",&num[i]);
}
min=num[0];
at=0;

for (i=1; i<5; i++)
if (num[i]<min) {
min=num[i]; 
at=i; 
}
printf("Min is num[%d]=%d\n",at,min);
}
