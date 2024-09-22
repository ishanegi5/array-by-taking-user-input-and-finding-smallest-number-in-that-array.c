#include<stdio.h>

int main()

{ int x[6]={432,553,878,7676,767,32};
 

int i,j;
  
for(i=0;i<sizeof(x)/sizeof(x[0]);i++)
  
{ printf("Enter x[%d]= ",i);
    
scanf("%d",&x[i]);
  
}
  
printf("x={ ");
  
for(j=0;j<sizeof(x)/sizeof(x[0]);j++)
  
{
  printf("%d ",x[j]);
  
if(j<sizeof(x)/sizeof(x[0])-1)
  
{ printf(" , ");
  
}
 
}
  
printf("}\n");
  
int min=x[0];
  
for(int i=1;i<sizeof(x)/sizeof(x[0]);i++)
  
{ if(min>x[i])
  
{
      min=x[i];
  
}
  
}
  
printf("Smallest number in array of %ld size is: %d",sizeof(x)/sizeof(x[0]),min);  
  
return  0;

}