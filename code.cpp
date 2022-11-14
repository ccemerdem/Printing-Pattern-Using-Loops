#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int a,b,c,e,f,t,d=0,x,z,step1=0,step2=1;
    scanf("%d",&a);
    c=a;
    t=a;
    x=a;
    
    
    for(;!(a==0);a--){           //first-half's loop
     
     for(;!(d==0);d--){          //loop for first digits
       printf("%d ",c);
       --c;
     }
       c=t;
       ++step1;
       d=step1;
       
      for(b=0;!(b==2*a-1);b++){   //loop for digits which are repeating (middle: 3 3 3 3 3 , 2 2 2 , (2n-1)) 
        printf("%d ",a);
      }
      
      for(;!(d==1);d--){          //loop for last digits
       printf("%d ",c-(step1-2));
       c++;
      }
      c=t;
      d=step1;

     printf("\n");
    
    }
    a=t;
    c=t;
    d=0;
    x=0;
    
    for(;!(a==1);a--){              // Second-half's loop
          
      d=a-1;
     
     for(;!(d==1);d--){          // loop for first digits
       printf("%d ",c);
       --c;
     } 
     c=t;
     d=a-1;
     x=d;
     
     ++step2;
     z=step2;    
     
     for(e=0;!(e==2*z-1);e++){    // loop for digits which are repeating
        printf("%d ",step2);   
     }
     
     for(;!(x==1);x--){          // loop for last digits
       printf("%d ",c-d+2);
       ++c;
     } 
     
     x=d;
     c=t;
     d=a-1;
    
     printf("\n");    
     
     }
    system("pause");
    return 0;
}

