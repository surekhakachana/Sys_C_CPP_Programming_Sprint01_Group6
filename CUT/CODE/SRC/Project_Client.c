/**************************************************************************
 *  FILENAME: Project_Client.c
 *
 *  DESCRIPTION: This is a Main Menu of the client file.
 *
 ************************************************************************/

#include"Employee_Header.h"
#include"Manager_Header.h"

int main()
{ 
        printf("Enter the choice\n");
        scanf("%d",%ch1);
        switch(ch1)
        {
            case 1:
                printf("Login and registration for employee"\n);
                display_employee_menu();
                Employee_view();
        
            case 2:
                printf("Login and registration for manager"\n);
                display_manager_menu();
                printf("Enter the choice for Managing the Project\n");
                while(1)
                  {
                      int choice;
                      printf("\t--------MAIN MENU--------");
                      printf("1.Employee\n");
                      printf("2.manager\n");
                      printf("3.exit/n");
                      printf("----------------------------------------------\n");
                      printf("\nEnter your choice:");
                      scanf("%d",&choice);

                      switch(choice)
                      {
                           case ADD:
                                    Addemployeetoproject();
                                    break;
                    /*     case REMOVE:
                                    Removeemployeefromproject();
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
                           case 0 :
                                    exit(0);
                           default:
                                  printf("\nInvalid choice ");
                                  break;
                        }
                 }
        }

        return 
                   
        
}
