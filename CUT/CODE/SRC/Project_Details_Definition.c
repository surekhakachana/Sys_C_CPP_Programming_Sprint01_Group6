#include"Manager_Header.h"


/*function header::
This function is used to accept project details from the manager
parameters:No parameter
return-type:void
*/



int AddProjectDetails(void)
{
        int ch;
        pro p;
        Employee_Project ep;
        char temp[20];
        char *token=NULL;
        FILE *fptr;
        fptr=fopen("project.txt","w");
        if(fptr=NULL)
        {
                printf("\ncannot open file");
                exit(0);
        }
        do
        {
                printf("\n Enter project id::");
                scanf("%d",&ep.Pro_id);
                printf("\n Enter project name::");
                while(getchar()!='\n');
                fgets(p.Pro_name,20,stdin);
                printf("\n Enter project start_date(dd/mm/yyyy):");
                scanf("%d/%d/%d",&p.start_date.day,&p.start_date.month,&p.start_date.year);
                printf("\n Enter project end_date(dd/mm/yyyy):");
                scanf("%d/%d/%d",&p.end_date.day,&p.end_date.month,&p.end_date.year);
                fprintf(fptr,"%s",p.Pro_name);
                fprintf(fptr,"%d,%d,%d",ep.Pro_id,p.start_date,p.end_date);
                printf("\nDo you want to continue(1/0):: ");
                scanf("%d",&ch);
                }while(ch!=0);
        fclose(fptr);
        fopen("Project.txt","r");
        if(fptr==NULL)
        {
                printf("\nCannot open file");
                exit(0);
        }
        //return-type for fscanf() is int
        while(fgets(temp,20,fptr) !=NULL)             //EOF=-1
        {
                printf("\nRecord::");
                token = strtok(temp,",");
                while(token!=NULL)
                {
                        printf("%s\t",token);
                        token = strtok(NULL,",");
                }
                printf("\n");
        }
        fclose(fptr);
}


/*function header
function name: this function is used to maintain project details
parameters: no parameters
return-type:void
*/

int MaintainProjectStatus(void)
{
        int ch;
        pro p;
        char temp[20];
        FILE *fptr;
        char *token=NULL;
        fptr= fopen("Project_Status.txt","w");
        if(fptr==NULL)
        {
            printf("\nCannot open file");
                exit(0);
        }
        do
        {
                printf("\nEnter project summary::\n");
                while(getchar()!='\n');
                fgets(p.Pro_summary,20,stdin);
                printf("\n Enter project status::");
                while(getchar()!='\n');
                fgets(p.Pro_status,20,stdin);
                printf("\nEnter project budget:: ");
                scanf("%d",&p.Pro_Budget);
                fprintf(fptr,"%s,%s,%d\n",p.Pro_summary,p.Pro_status,p.Pro_Budget);
                printf("\nDo you want to continue(1/0):: ");
                scanf("%d",&ch);
        }while(ch!=0);
        fclose(fptr);
        //reading formatted data from file::
        fptr = fopen("Project_status.txt","r");
        if(fptr==NULL)
        {
                printf("\n cannot open file");
                exit(0);
        }
        //return-type for fscanf()is int
        while(fgets(temp,20,fptr)!=NULL)
        {
                printf("\nRecord::");
                //code to fetch multiple token from same string:
                 token=strtok(temp,",");
                while(token!=NULL)
                {
                        printf("%s\t",token);
                        token=strtok(NULL,",");
                }
                printf("\n");
        }
        fclose(fptr);
}



/*function header
function :This is used to add reports of the project
parameters:no parameters
return-type:void it returns  nothing
*/

int AddingReports(void)
{
        int ch;
        pro p;
        char temp[20];
        char *token=NULL;
        FILE *fptr;
        fptr=fopen("project_Reports.txt","w");
        if(fptr==NULL)
        {
                printf("\ncannot open file");
                exit(0);
        }
        do
        {
                //get data from user and write to file
                printf("\n project Description::");
                while(getchar()!='\n');
                fgets(p.Pro_Description,30,stdin);
                printf("\nDo you want to continue(1/0)::");
                scanf("%d",&ch);
        }while(ch!=0);
        fclose(fptr);
}
