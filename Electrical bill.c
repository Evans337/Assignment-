//program to calculate electrical bill
/*
Name: Evans mutuma
Date:11/11/2024
*/
#include <stdio.h>
int main() {
int customer_id;
char customer_name;
float total_bill, unit_consumed , chargesper_unit;
printf("Enter CustomerID\n");
scanf("%d",&customer_id);
printf("Enter CustomerName \n");
scanf("%s", &customer_name);
printf( "Enter Unit Consumed \n");
scanf("%f",&unit_consumed);
if(unit_consumed <=199){
chargesper_unit =1.20;
}else if (unit_consumed >=200&&unit_consumed <400){
chargesper_unit =1.50;
}else if(unit_consumed >=400&&unit_consumed <600){
chargesper_unit =1.80;
}else
{
chargesper_unit =2.00;
}total_bill = total_bill*0.15;
printf("Customer ID=%d\n",customer_id);
printf("Units Consumed=%f\n",unit_consumed);
printf("Customer Name =%s\n",customer_name);
printf(" Charges Per Unit =%%f\n",chargesper_unit);
printf("Total Amount To Pay=%f\n",total_bill);
return 0;
}











    
