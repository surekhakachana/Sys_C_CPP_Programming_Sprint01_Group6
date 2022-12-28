/*FILE NAME: main_menu_client.c
 *
 *  DESCRIPTION: This is a Main Menu of the client file.
 *
 ************************************************************************/

#include"Employee_Header.h"
#include"Manager_Header.h"

int main()
{
       int ch1,choice;
        printf("Enter the choice\n");
        printf(" '1' for Employee\n '2' for Manager \n");
        scanf("%d",&ch1);
        switch(ch1)
        {
            case 1:
                printf("Login and registration for employee\n");
                printf("1 for login\n 2 for register");
                display_employee_menu();
                //Employee_view();

            case 2:
                      display_manager_menu();
        }

        return 0;


}
