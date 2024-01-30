// ----------------------question-1---------------------

#include <stdio.h>

void fun (int x,int y){
    int temp;
    temp=x ;
    x=y ;
    y=temp ;
    printf("after swape : \n") ;
    printf("x:%d\n",x) ;
    printf("y:%d\n",y) ;
    
    
}
int main()
{
    int x= 5;
    int y= 3;
    printf("before swape : \n") ;
    printf("x:%d\n",x) ;
    printf("y:%d\n",y) ;
    printf("\n") ;
    fun(x,y) ;
    return 0;
}



// ----------------------question-2---------------------

#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int *p;
    p=&arr;
    
    printf("%u => %d\n",p,*p);
    
     printf("%u => %d\n",p+1,*(p+1));
     
          printf("%u => %d\n",p+2,*(p+2));
          
               printf("%u => %d\n",p+3,*(p+3));
               
                    printf("%u => %d\n",p+4,*(p+4));
    
    return 0;
}


// ----------------------question-3---------------------

#include <stdio.h>

int main()
{
   int a=20;
   int *p=&a;
   int**p2;
   p2=&p;
   printf("%u %c \n" ,p2,**p2);
    
    return 0;
}


