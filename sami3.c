#include<stdio.h>
//cancle//
void user_menu();
void cancle_ticket();
int main(){
    user_menu();


    return 0;
}
void user_menu(){
    int option;
printf("1.booking ticket\n");
printf("2.cencle ticket\n");
printf("3.check bus\n");
printf("4.logout\n");
printf("choos any option: ");
scanf("%d",&option);
if(option==2){
    cancle_ticket();
}
}
void cancle_ticket(){
    int bus_number;
    int number_of_seat;
    printf("enter bus number 101,202,303,404,505: ");
    scanf("%d",&bus_number);
    if(bus_number==101 || bus_number==202 || bus_number==303 || bus_number==404 || bus_number==505){
    printf("enter number of seat: ");
    scanf("%d",&number_of_seat);
    printf("canclellation successfull ! %d seat cancle on bus number %d\n",number_of_seat,bus_number);
}
}