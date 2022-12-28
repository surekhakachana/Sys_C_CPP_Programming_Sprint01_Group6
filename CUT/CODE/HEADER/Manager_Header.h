/*************************************************************************************
 * FILENAME: Manager_Header.h
 *
 * DESCRIPTION: This is a manager module header file.
  ***********************************************************************************/

//Preprocessor directives


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include"Data_validation_header.h"

#define REGISTER 1
#define LOGIN 2                  //Defining Macros
//#define EMPLOYEE 3
//#define MANAGER 4
#define EXIT 0
#define ADD 3
#define ADDEMPLOYEE 4
#define REMOVEEMPLOYEE 5
#define ADDPROJECT 6
#define MAINTAIN 7
#define ADDREPORT 8


//declaration structure for manager
typedef struct Manager
{
        char username[30];
        char password[20];          
        char emailId[30];
        int Mng_Id;
        long int Mobileno;
}Mng;                               


// declare structure for employee_project
struct Employee_Project 
{
        int Pro_id;
        int Emp_id;
};

//declare structure for project date
struct Project_date 
        int day,month,year;

};

//declare structure for project
typedef struct Project 
{
        //int Pro_id;
        char Pro_name[20];
        char Pro_status[20];
        char Pro_summary[20];
        char Pro_Budget;
        char Pro_Description[30];
        struct Project_date start_date;
        struct Project_date end_date;
}pro;

typedef struct LinkedList
{
        struct LinkedList *next;
}node;


//This function for manager login
int manager_login(void);

//This function for employee login
void manager_register(void);

//This function for add employee to project
int Addemployeetoproject(void); 

//This function for remove a project from employee
int Removeemployeefromproject(Emp e,node *head);

//This function for add a project details 
int AddProjectDetails(void);

//This function for maintain a project status
int MaintainProjectStatus(void);

//This function for adding a reports of the project
int AddingReports(void);


