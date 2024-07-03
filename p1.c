
#include <stdio.h>


int sum(int apple,int grapes, int mango){


   int total();{

        int totalPrice = apple + grapes + mango;

        return totalPrice; 

    }

     int finalValue  = total();

     int finalDiscount = finalValue; 
     
     return finalDiscount;

}


int main(){

    int a;
    int b;
	int c;

    printf("Apple Price :- ");
    scanf("%d",&a);
    
    printf("Grapes price :- ");
    scanf("%d",&b);
    
    printf("Mango price :- ");
    scanf("%d",&c);

   int total = sum(a,b,c);
   
    int discount = 20;
   float gst = 0.18;
    
   int all = total-discount;
   float all1 = all*gst;
   float total1 = all+all1;
 

   printf("Your Total Ammout Is :- %.2f",total1);

return 0;
}