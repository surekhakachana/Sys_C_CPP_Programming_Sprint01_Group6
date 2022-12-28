/*************************************************************************************
 *   FILENAME: Employee_Header.h
 *
 *   DESCRIPTION: This is a Project header file.
 *
 ****************************************************************************************/
//Preprocessor directives

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>                     
#include"Data_Validation_Header.h";

//define a macros

#define REGISTER 1
#define LOGIN 2
#define display 3
#define EXIT 0


//Declaring structure of employeee

typedef struct employee
{
        char emp_id[10];
        char username[10];
        char password[10];
        char email[20];
        long int mobileno;
        struct employee *next;
}emp;



//This Function for employee menu
int display_employee_menu(void);

//This Function for employee Login 
int employee_login(void);

//This Function for employee register                                                                                                                                                   
int employee_register(void);

