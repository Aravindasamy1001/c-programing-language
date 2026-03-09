#include<stdio.h>
int main(){
int i=1;
int j;
for(i=1; i<=4; i++){// asign as rows 
   for (j=i; j<=4; j++){// asign as colums
// this loop continue till 4 so first row **** will print
printf("*");
}
printf("\n");
}
return 0;
} 
