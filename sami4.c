#include<stdio.h>
//bus check page//
void user_menu();
void check_bus();
void bus_number_101();
void bus_number_202();
void bus_number_303();
void bus_number_404();
void bus_number_505();
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
if(option==3){
    check_bus();
}
}
void check_bus(){
    int bus_number;
   printf("enter bus number 101,202,303,404,505: ");
   scanf("%d",&bus_number);
   if(bus_number==101){
    bus_number_101();
   }else if(bus_number==202){
    bus_number_202();
   }else if(bus_number==303){
    bus_number_303();
   }else if(bus_number==404){
    bus_number_404();
   }else if(bus_number==505){
    bus_number_505();
   }else{
    printf("invailid bus number\n");
   }
}
void bus_number_101(){
    printf("Bus Number:                     101\n");
    printf("Source City:                    Delhi\n");
    printf("Destination City:               Patna\n");
    printf("Total Seat:                     50\n");
    printf("Available Seat:                 47\n");
    printf("Fare:                           500.00\n");
}
void bus_number_202(){
printf("Bus Number:                         202\n");
    printf("Source City:                    Gurugram\n");
    printf("Destination City:               Agra\n");
    printf("Total Seat:                     60\n");
    printf("Available Seat:                 50\n");
    printf("Fare:                           200.00\n");
}
void bus_number_303(){
    printf("Bus Number:                     303\n");
    printf("Source City:                    Noida\n");
    printf("Destination City:               Chandigarh\n");
    printf("Total Seat:                     60\n");
    printf("Available Seat:                 30\n");
    printf("Fare:                           1500.00\n");

}
void bus_number_404(){
    printf("Bus Number:                     404\n");
    printf("Source City:                    Jaypur\n");
    printf("Destination City:               chennai\n");
    printf("Total Seat:                     40\n");
    printf("Available Seat:                 35\n");
    printf("Fare:                           2000.00\n");

}
void bus_number_505(){
    printf("Bus Number:                     505\n");
    printf("Source City:                    kolkata\n");
    printf("Destination City:               haydrabad\n");
    printf("Total Seat:                     50\n");
    printf("Available Seat:                 47\n");
    printf("Fare:                           3500.00\n");

}