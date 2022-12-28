/* Employee_Definition.c
 *
 * DESCRIPTION: This is a Employee Module definition file.
 *
 ****************************************************************/

#include"Employee_Header.h"
#include"Data_Validation_Header.h"

/*******************************************************************
 * Function Name: display_employee_menu
 *
 * Description: Displaying the menu for employee login and register.
 *
 * Parameters: void
 *
 * Return: Exit Status 0
 *
 ******************************************************************* */


int display_employee_menu(void)
{
                int option, ret = 0;
                printf("\n------------------employee Module---------------------\n");
                printf("Press '1' to Register \nPress '2' to Login \nPress '0' to Exit\n");
                scanf("%d",&option);
                switch(option)
                {
                   case 1:
                                system("clear");
                                employee_register();
                                break;
                        case 2:
                                system("clear");
                                do
                                {
                                        ret = employee_login();
                                }while(ret == 1);
                                break;
                                case EXIT:
                                exit(0);
                        default:
                                printf("Enter the correct option\n");
                }
}


/***********************************************************************************
 *  Function Name: employee_login
 *
 * Description: In this function, the employee logins.
 *
 * Parameters: void
 *
 *  Return: To employee_login if it Fails (1). Return to display_employee_menu if it is True
 *
 ********************************************************************************/

int employee_login(void)
{
        char temp[100];
        FILE *log;
        //char *token=NULL;
        char name[10], pwd[10];
        char  username[10], password[10];
        int  flag = 0;
        printf("\n--------------------------------------LOGIN-----------------------------------------\n\n");
        printf("Please enter your login credentials below: \n");
        printf("\nEmployee Username: ");
        scanf("%s",name);
        strcpy(pwd,getpass("\nEmployee Password: "));
         log = fopen("employee_login.txt","r");
        if(log==NULL)
        {
                printf("Error at opening File!\n");
                exit(0);
        }
         while(fgets(temp,sizeof(temp),log))
        {
                scanf(temp,"%s , %s\n", username, password);
                if(strcmp(username,name) || strcmp(password,pwd))
                {
                        continue;
                }
                else
                {
                        flag = 1;
                        break;
                }
        }
        fclose(log);
        if(flag == 1)
        {
                printf("\nLogged in successfully\n\n");
                display_employee_menu();
        }
        printf("\nLog in failed\n\n");

}


/************************************************************************
 *   Function Name: employee_register
 *
 *   Description: In this function, the employee registers.
 *
 *   Parameters: void
 *
 *   Return: Once Registered, it returns back to employee_login.
 *
  **********************************************************************/

int employee_register(void)
{
        //char *token=NULL;
        int uname=0,pass=0,emailid=0,mob=0,empid=0;
        char temp[30];
        int ch, ret = 0;
        //int value1,value2,value3,value4,value5;
        FILE *log;
        char username[10]={0}, password[10]={0}, email[20]={0},emp_id[6];
        int mobileno[10];
        log=fopen("employee_login.txt","a");
        if(log==NULL)
        {
                printf("Error at opening file!\n");
               exit(0);
        }


        printf("\n---------------------------------------REGISTER------------------------------------\n");
        printf("\nYour Username should contain atleast 1 uppercase and a lowercase letter\n");
        printf("\nEmployee Username: ");
        scanf("%s",username);
        if(Is_username_valid(username)==1)
                uname++;
        else
               printf("Inncorrect username");
        printf("\nYour password should contain 8 characters where it should have 1 uppercase letter, 1 lowercase letter, a digit and a special character \n");
        printf("\nEmployee Password: ");
        scanf("%s",password);
        if(Is_password_valid(password)==1)
                 pass++;
        else
                printf("Inncorrect password");
        //value2=Is_password_valid(password);

        printf("\nYour Employee ID should contains 6 digits\n");
        printf("\nEmployee ID: ");
        fgets(emp_id,10,stdin);
         //scanf("%s",&emp_id);
        if(Is_emp_id_valid(emp_id)==1)
                 empid++;
        else
                 printf("Inncorrect emp_id");
        //value3=Is_emp_id_valid(emp_id);

        printf("\nYour e-mail should contain uppercase letter, lowercase letter, a digit and a special character\n");
        printf("\nEmployee e-mail: ");
        scanf("%s",email);
        if(Is_email_valid(email)==1)
                  emailid++;
        else
                  printf("Inncorrect email");
        //value4=Is_email_valid(email);

        printf("\nYour mobileno should contain only digits\n");
        printf("\nEmployee mobileno:");
        scanf("%ld",&mobileno);
        if(Is_Mobileno_valid(mobileno)==1)
                   mob++;
        else
                  printf("Inncorrect mobileno");
        //value5=Is_Mobileno_valid(mobileno);


        if(uname == 1 && pass == 1 && empid == 1 && emailid == 1 && mob == 1)
        {
                printf("\nSuccessfully Registered !! \n");
                fprintf(log,"%s,%s,%s,%s,%ld\n",username,password,emp_id,email,mobileno);
                printf("\nPress key to continue (1/0)...\n");
                scanf("%d",&ch);
                fclose(log);
         }
        else
        {
                printf("\nIncorrect Username or Password or email or mobileno\n");
                printf("\nPress key to continue (1/0)...\n");
                scanf("%d",&ch);
                employee_register();
        }
        system("clear");
        do
        {
                ret = employee_login();
        }while(ret == 1);
        fclose(log);
}
