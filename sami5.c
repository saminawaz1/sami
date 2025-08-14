#include<stdio.h>
//logout page//
void user_menu();
void logout();
int main(){
user_menu();
    return 0;
}
void user_menu(){
    int option;
    printf("1.Booking Ticket\n");
    printf("2.Cancle Ticket\n");
    printf("3.Check Bus\n");
    printf("4.Logout\n");
    printf("Choos Any Option: ");
    scanf("%d",&option);
    if(option==4){
        logout();
    }
}
void logout(){
    printf("Logout Successful\n");

}