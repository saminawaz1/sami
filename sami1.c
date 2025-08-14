#include<stdio.h>
//login page//
//sign-in page//
void menu();
void signin();
void login();
char username[100];
char pass[100];
int phone_number;
int main(){
menu();

    return 0;
}
void menu(){
while(1){
    int option;
    printf("1.sign-in\n");
    printf("2.login\n");
    printf("3.exit\n");
    printf("choose any option: ");
    scanf("%d",&option);
    if(option==1){
        signin();
    }else if(option==2){
        login();
    }else if(option==3){
        break;
    }else{
        printf("please enter a vailid option\n");
    }
    }
}
void signin(){
    char first_name[100];
    char last_name[100];
    printf("enter first_name: ");
    scanf(" %[^\n]",&first_name);
    printf("enter last_name: ");
    scanf(" %[^\n]",&last_name);
    printf("enter username: ");
    scanf(" %[^\n]",&username);
    printf("enter password: ");
    scanf(" %[^\n]",&pass);
    printf("enter phone number: ");
   if( scanf("%d",&phone_number)!=1){
    printf("please enter number\n");
   }else{
    printf("sign-in successfull %s\n",username);
   }
    
    
}
void login(){
    char userid[100];
    char passWord[100];
    printf("enter username: ");
    scanf(" %[^\n]",userid);
    printf("enter password: ");
    scanf(" %[^\n]",passWord);
    if((userid[0]==username[0])&&(passWord[0]==pass[0])){
        printf("login successfull %s\n",username);
    }else{
        printf("invaili password");
}
}