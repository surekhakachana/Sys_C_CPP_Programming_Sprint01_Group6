/*FILE NAME: Manager_Definition.c
 *
 *  DESCRIPTION: This is a Company Module definition file.
 *
 ***********************************************************************************************************************************************************************/

#include"Manager_Header.h"




/*******************************************************************
 * Function Name: display_manager_menu
 *
 * Description: Displaying the menu formanager login and register.
 *
 * Parameters: void
 *
 * Return: Exit Status 0
 *
 ******************************************************************** */


void display_manager_menu(void)
{
        int option, ret = 0;
        while(1)
        {
        printf("\n------------------Manager Module---------------------\n");
        printf("Press '1' to Register \nPress '2' to Login \nPress '3' to Add the employee\n Press '5' to remove the Employee\n Press '6' to the add project \n Press '7' to maintain a Project status\n Press '8' add a reports\nPress '0' to exit\n");
        scanf("%d",&option);
        switch(option)
        {
                case REGISTER:
                        system("clear");
                        manager_register();
                        break;
                case LOGIN:
                        system("clear");
                          manager_register();
                        break;
                case LOGIN:
                        system("clear");

                        do
                        {
                                ret = manager_login();
                        }while(ret == 1);
                        break;
                case ADD:
                        Addemployeetoproject();

                        break;
        /*      case REMOVE:
                        Removeemployeeproject();
                        break;*/
                case  ADDPROJECT :
                        AddProjectDetails();
                        break;
                case MAINTAIN :
                        MaintainProjectStatus();
                        break;
                case ADDREPORT :
                        AddingReports();
                        break;

                case EXIT:
                        exit(0);
                default:
                        printf("Enter the correct option\n");
        }
        }
}


/***********************************************************************************
 * Function Name: manager_login
 *
 * Description: In this function, the manager logins.
 * Description: In this function, the manager logins.
 *
 * Parameters: void
 *
 * Return: To manager_login if it Fails (1). Return to display_manager_menu if it is True
 *
 ************************************************************************************/

int manager_login(void)
{
        char temp[100];
        FILE *log;
        char *token=NULL;
        char name[10], pwd[10] , username[10] = {0}, password[10] = {0};
        int  flag = 0;


        printf("\n--------------------------------------LOGIN-----------------------------------------\n\n");
        printf("Please enter your login credentials below: \n");
        printf("\nManager Username: ");
        scanf("%s",name);
        strcpy(pwd,getpass("\nManager Password: "));
        log = fopen("manager_login.txt","r");
        if(log==NULL)
        {
                printf("Error at opening File!\n");
                exit(0);
        }
        while(fgets(temp,sizeof(temp),log))
        {
                sscanf(temp,"%s , %s\n", username, password);
                if(strncmp(username, name, 10) || strncmp(password, pwd, 10))
                {
                   flag=1;
                }
                else
                {
                 flag = 0;
                    break;
                }
        }
        fclose(log);
        if(flag == 1)
        {
            printf("\nLogged in successfully\n\n");
            printf("Add the Employee and Project Details\n");
            Addemployeetoproject();
            //display_manager_menu();
            exit(0);
        }
        display_manager_menu();

        return 1;
}

/************************************************************************
 * Function Name: manager_register
 *
 * Description: In this function, the manager registers.
 *
 * Parameters: void
 *
 * Return: Once Registered, it returns back to manager_login.
 *
 * **********************************************************************/
void manager_register(void)
{
        //char *token=NULL;
        char temp[30];
        int ch, ret = 0,Mng_Id;
        long int Mobileno;
       // int value1,value2;
        FILE *log;
        char username[10] = {0}, password[10] = {0},emailId[30];

        log=fopen("manager_login.txt","a");
        if(log==NULL)
        {
                printf("Error at opening file!\n");
                exit(0);
        }

        printf("\n---------------------------------------REGISTER------------------------------------\n");
        printf("\nYour Username should contain atleast 1 uppercase and a lowercase letter\n");
        printf("\nManager Username: ");
        scanf("%s",username);

        printf("\nYour password should contain 8 characters where it should have 1 uppercase letter, 1 lowercase letter, a digit and a special character \n");
        printf("\nManager Password: ");
        scanf("%s",password);
        printf("\nManager id: ");
        scanf("%d",&Mng_Id);
        printf("\nManager emailId: ");
        scanf("%s",emailId);
        printf("\nManager MobileNo: ");
        scanf("%ld",&Mobileno);

        //value1 = Is_username_valid(username);
        //value2 = Is_password_valid(password);

       // if(value1 == 1 && value2 == 1)

                printf("\nSuccessfully Registered !! \n");
                fprintf(log,"%s , %s\n",username,password);
                printf("\nPress key to continue (1/0)...\n");
                scanf("%d",&ch);
                fclose(log);
      /*
      else
      {
              printf("\nIncorrect Username or Password\n");
              printf("\nPress key to continue (1/0)...\n");
              scanf("%d",&ch);
              manager_login();
      }*/
        system("clear");
        do
        {
                ret = manager_login();
        }while(ret == 1);
        fclose(log);
}

