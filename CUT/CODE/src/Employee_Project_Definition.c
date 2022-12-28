#include"Manager_Header.h"
//Function header
//function name:add.this function is used to add employee to project
//parameters:no parameters
//return type:void it returns nothing


int Addemployeetoproject(void)
{
   int ch;
   Employee_Project ep;

   char name[20],temp[20];   //or use structure variable
   char *token = NULL;
   FILE *fptr;

   fptr = fopen("Employee.txt","a");
   if(fptr==NULL)
   {
      printf("\nCannot open file");
      exit(0);
   }
   //get data from user and write to file
   do
   {
           printf("\nEnter Employee id:: ");
           scanf("%d",&ep.Emp_id);
           printf("\nEnter Project id:: ");
           scanf("%d",&ep.Pro_id);
           //fprintf(fptr,"%d\t%s\n",e.eid,e.name);  //OR
           fprintf(fptr,"%d,%d\n",ep.Emp_id,ep.Pro_id);
           printf("\nDO you want to continue(1/0):: ");
           scanf("%d",&ch);
           printf("----Employee add to project----");
   }while(ch!=0);
   fclose(fptr);

}

//creating newnode for LinkList with data fetched from file in formal parameter n
/*node* createNode(Emp e)
{
        node *newnode = (node*)malloc(sizeof(node));
        newnode->emp_id=e.emp_id;
        newnode->emp_name=e.emp_name;
        strcpy(newnode->Emp,e.Emp);
        newnode->next=NULL;
        return newnode;
}//end of createNode()
 */
/*adding node LinkList containing Emp 
parameters:*head pointing to first node of Linklist,*newnode containing new record fetched  from file
*/
/*
node* addNode(node *head,node *newnode)
{
        node *temp=head;
        //check if Linkedlist is empty
        if(head==NULL)
                head=newnode;
        else
        {
                while(temp->next!=NULL)
                        temp=temp->next;
                temp->next=newnode;
        }
        return head;
} //end of add node
//function header
//This function is used to remove the employee from from project
void Removeemployeeproject(Emp e,node *head)
{
        FILE *fptr;
        node *temp=NULL;
        node *tag=NULL;
        node *newnode=NULL;
        //int new_id;
        fptr=fopen("employee_project.txt","r");//reads from a existing file
        if(fptr == NULL)//file not existing then fopen returns NULL
        {
           printf("\nFile not available.....");
                exit(0);
        }
        //reading from file and adding alla data in linkedlist
        while(fscanf(fptr,"%d/%d\n",&e.emp_id,&e.pro_id)!=-1)//EOF=-1
        {
                newnode=createNode(e);
                head=addNode(head,newnode);
        }
        fclose(fptr);
        printf("\n\t enter the employee id and project id you want to delete the employee:");
        scanf("%d/%d"<&emp_id,&pro_id);
        tag=temp;
        temp=head;
        if(temp==NULL)
        {
                printf("\n\n\tLinkedlist is empty......\n");
                exit(0);
        }
        else
        {
                while(temp!=NULL)
                {
                        //printf("%d,%d",temp->emp_id,temp->pro_id)//compare the user entered project id and employee id with existing user
                        if(newe_id==temp->emp_id && newp_id==temp->pro_id)
                        {
                                if(temp==head)
                                {
                                        head=temp->next;
                                        freee(temp);
                                        break;
                                }
                                else
                                {
                                        tag->next=temp->next;
                                        free(temp);
                                        break;
                                }
                                else
                                {
                                  {
                                        tag=temp;
                                        temp=temp->next;
                                }
                        }
                        fptr=fopen("employee_project.txt","w");//write in the file
                        if(fptr==NULL)
                        {
                                printf("\nFile not available..........");
                                exit(0);
                        }
                        temp=head;
                        if(temp==NULL)
                        {
                                printf("Linkedlist is empty............\n");
                                exit(0);
                        }
                        else
                        {
                                while(temp!=NULL)
                                {
                                        fprintf(fptr,"%d,%d\n",temp->emp_id,temp->pro_id);
                                        temp=temp->next;
                                }
                                print("\n employee deleted successfully");
                        }
                        fclose(fptr);
}
*/