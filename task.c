#include<stdio.h>
struct login {
    char fname[100];
    char lname[20];
    char username[20];
    char password[20];
};
register()
{
    file*log;
    log=fopen("login12.txt","W");
    struct login l;
    printf("enter your firstname :" );scanf("%s"l.fname);
    printf("enter your lastname :" );scanf("%s"l.lname);
    printf("enter your username :" );scanf("%s"l.username);
    printf("enter your password :" );scanf("%s"l.password);
    fwrite(%l,sizeof(l),l,log);
    fclose(log);
    printf("\n\n your username is now userid \n");
    printf(" now login with your userid and password \n");
    printf("\n press any key to continue .... ");
    getch();
    system("cls");
    login();
}
login()
{
    char username[200],password[20];
    log=fopen("login12.txt","r");
    struct login l;
    printf(" enter the user id :");scanf("%s",&username);;
    printf(" enter the password :");scanf("%s",&password);
    while(fread(&l,sizeof(l),l,log))
    {
        if(strcmp(username,l.username)==0&& strcmp(password,l.password)==0)
        {
            printf("successful login \n");
        }
        else{
            printf("please enter correct userid &password");
        }
    }   
    fclose();
}

int main()
{
    int cho ;
    printf("press '1' to register \n press '2' to login\n\n");
    scanf("%s",&cho);
    if(cho==1){
        system("cls");
        register();
    };
    else{
        system("cls");
        login();
    }
}