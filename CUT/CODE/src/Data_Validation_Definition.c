#include"Data_Validation_Header.h"

/*
   Function is use to check username is valid or not
   Parameters:username
   return type: int
*/

int Is_username_valid(char *username)
{
        int len,i;
        int small=0,caps=0,num=0;
        len = strlen(username);
        if(len > 20)            //check if username length is greater 10 or not

        {
                return 0;
        }
        else
        {
                for(i=0;i<len;i++)
                {
                        if(username[i] >= 'a' && username[i] <= 'z')    //check username have small letters or not                                                                                          small++;
                        else if(username[i] >= 'A' && username[i] <= 'Z')  //check username have Capital letters or not
                                caps++;
                        else if(username[i] >= '0' && username[i] <= '9')       //check username have digits or not
                                num++;
                }
                if(small >= 1 && caps >= 1 && num == 1)
                {
                        return 1;
                }
                else
                {

                        return 0;
                }
        }
}

/*
Function is use to check password is valid or not
Parameters:password
return type: int
*/

int Is_password_valid(char *password)
{
        int i,len;
        int small=0,caps=0,num=0,spec_char=0;
        len=strlen(password);
        if(len > 12)           //check if length is greater than or not
        {
                return 0;
        }
        else
        {
                for(i=0;i<len;i++)
                {
                        if(password[i] >= 'a' && password[i] <= 'z')        //check password has small letters or not
                                small++;                                                                                                          else if(password[i] >= 'A' && password[i] <= 'Z')  //check password has capital letters or not
                                        caps++;
                        else if(password[i] >= '0' && password[i] <= '9')           //check password has digits or not
                                num++;
                        else if(password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] =='$' || password[i] =='%' || password[i] =='^' || password[i] == '*')  // check password has special characters or not
                                spec_char++;
                }
                if(small >= 1 && caps >= 1 && num >= 1 && spec_char >= 1)
                {
                        return 1;
                }
                {
                        return 0;
                }

        }
        return 0;
}


/*
Function is use to check Mobileno is valid or not
Parameters:mobileno
return type: int
*/

int Is_Mobileno_valid(long mobileno)
{
        int count=0;
        while(mobileno!=0)
        {
                mobileno/=10;
                count++;
        }//while
        if(count!=10)
                return 1;
        else
                return 0;

        return 0;
}



/*
Function is use to check email is valid or not
Parameters:email
return type: int
*/

int Is_email_valid(char *email)
{
        int dot=0,special_char=0,i,len,b;
        len=strlen(email);
        for(i=0;i<len;i++)
        {
                b=email[i];
                if(b=='@')   //check email contain @ or not
                        special_char++;
                if(b=='.')   //check email contain @ or not
                        dot++;
        }
        if(dot == 1 && special_char == 1)
        {
                if(strlen(email) <= 30)
                {
                        return 1;
                }
        }
        else
        {
                return 0;
        }


        return 0;
}



/*
Function is use to check Employee name is valid or not
Parameters:Emp_name
return type: int
*/

int Is_emp_name_valid(char *Emp_name)
{
        int len,i;
        int small=0,caps=0,num=0;
        len = strlen(Emp_name);
        if(len > 20)              //check if Employee name length is greater 20 or not
        {
                return 0;
        }
        else
        {
                for(i=0;i<len;i++)
                {
                        if(Emp_name[i] >= 'a' && Emp_name[i] <= 'z')       //check Employee name have small letters or not
                                small++;
                        else if(Emp_name[i] >= 'A' && Emp_name[i] <= 'Z')        //check Employee name have Capital letters or not
                                caps++;
                        else if(Emp_name[i] >= '0' && Emp_name[i] <= '9')       //check Employye name have digits or not
                                num++;
                }
                if(small >= 1 && caps >= 1 && num == 1)
                {
                        return 1;
                }
                else
                {
                        return 0;
                }
        }
}



/*
Function is use to check Employee id is valid or not
Parameters:Emp_id
return type: int
*/

int Is_emp_id_valid(char *Emp_id)
{
        int i,len;
        int small=0,caps=0,num=0,spec_char=0;
        len=strlen(Emp_id);
        if(len > 10)           //check if length is greater than or not
        {
                return 0;
        }
        else
        {
                for(i=0;i<len;i++)
                {
                        if(Emp_id[i] >= 'a' && Emp_id[i] <= 'z')                //check Employee id has small letters or not
                                small++;
                        else if(Emp_id[i] >= 'A' && Emp_id[i] <= 'Z')           //check Employee id has capital letters or not
                                caps++;
                        else if(Emp_id[i] >= '0' && Emp_id[i] <= '9')           //check Employee id has digits or not
                                num++;
                }
                if(small >= 1 && caps >= 1 && num >= 1)
                {
                        return 1;
                }
                else
                {
                        return 0;
                }
                return 0;
        }
}



/*
Function is use to check Manager name name is valid or not
Parameters:Mng_name
return type: int
*/

int Is_manager_name_valid(char *Mng_name)
{
        int len,i;
        int small=0,caps=0,num=0;
        len = strlen(Mng_name);
        if(len > 20)              //check if Manager name length is greater 20 or not
        {
                return 0;
        }
        else
        {
                for(i=0;i<len;i++)
                {
                        if(Mng_name[i] >= 'a' && Mng_name[i] <= 'z')       //check Manager name have small letters or not
                                small++;
                        else if(Mng_name[i] >= 'A' && Mng_name[i] <= 'Z')        //check Manager name have Capital letters or not
                                caps++;
                        else if(Mng_name[i] >= '0' && Mng_name[i] <= '9')       //check Manager name have digits or not
                                num++;
                }
                if(small >= 1 && caps >= 1 && num == 1)
                {
                        return 1;
                }
                else
                {
                        return 0;
                }
        }
}



/*
Function is use to check Manager  id is valid or not
Parameters:Mng_id
return type: int
*/

int Is_Manager_id_valid(char *Mng_id)
{
        int i,len;
        int small=0,caps=0,num=0,spec_char=0;
        len=strlen(Mng_id);
        if(len > 10)           //check if length is greater than or not
        {
                return 0;
        }
        else
        {
                for(i=0;i<len;i++)
                {
                        if(Mng_id[i] >= 'a' && Mng_id[i] <= 'z')                //check Manager id has small letters or not
                                small++;
                        else if(Mng_id[i] >= 'A' && Mng_id[i] <= 'Z')           //check Manager id has capital letters or not
                                caps++;
                        else if(Mng_id[i] >= '0' && Mng_id[i] <= '9')           //check Manager id has digits or not
                                num++;
                }
                if(small >= 1 && caps >= 1 && num >= 1)
                {
                        return 1;
                }
                else
                {
                        return 0;
                }
                return 0;
        }
}

