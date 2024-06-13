#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
void HomePage();
void BookingPage();
void ShowBrochure1();
void ShowBrochure2();
void ShowPackage();
void UserRegd();
void UserLogin();
int ChangePW();
void exit_system();
int main()
{
	int choice1;
	while (1)
    {
	HomePage();
	printf("\n\t\t\t\tEnter:"); 
		scanf("%d",&choice1);
        switch(choice1)
            {
                case 1:
                    UserRegd();
                    break;
                case 2:
                    UserLogin();
                    break;
                case 3:
                    ShowPackage();                
                    break;
                case 4:
                    exit_system();
                    exit(0);
                    break;
                default:
                	{
                		printf("Not a valid input\n");
                		system("PAUSE");
					}
            }
}
return 0;
}
void HomePage()
{
	system("CLS");
	printf("\n\n\n\n");
	printf("\t\t\t\t                _____                          \n");
    printf("\t\t\t\t               /_  _/______/\\                 \n");
    printf("\t\t\t\t                / /___  __/  \\                \n");
    printf("\t\t\t\t              _/ /_  / / / /\\ \\             \n");   
    printf("\t\t\t\t             /____/ / / /_/  \\_\\            \n");
    printf("\t\t\t\t                   /_/                         \n");
    printf("\t\t\t\t===============================================\n");
    printf("\t\t\t\t|        INTERNATIONAL TOURISM AGENCY         |\n");
    printf("\t\t\t\t|  Developed by Santosh Kumar & Sai Dhanush   |\n");
    printf("\t\t\t\t===============================================\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|          User Registration   - 1            |\n");
	printf("\t\t\t\t|          Login User          - 2            |\n");
	printf("\t\t\t\t|          Brochure            - 3            |\n");
	printf("\t\t\t\t|          Exit                - 4            |\n");
	printf("\t\t\t\t===============================================\n");
}
void BookingPage()
{
    system("CLS");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t========================================");
	printf("\n\t\t\t\t|     INTERNATIONAL TOURISM AGENCY     |");
	printf("\n\t\t\t\t|             BOOKING PAGE             |");
	printf("\n\t\t\t\t========================================");
	printf("\n\t\t\t\t|                                      |\n");
	printf("\t\t\t\t|         Book Package    - 1          |\n");
	printf("\t\t\t\t|         Check Ticket    - 2          |\n");
	printf("\t\t\t\t|         Print Ticket    - 3          |\n");
	printf("\t\t\t\t|         Cancel Ticket   - 4          |\n");
	printf("\t\t\t\t|         Change Password - 5          |\n");
	printf("\t\t\t\t|         Logout User     - 6          |\n");
	printf("\t\t\t\t|         Brochure        - 7          |\n");
	printf("\t\t\t\t|         Exit            - 8          |\n");
	printf("\t\t\t\t========================================\n");
}
void ShowBrochure1()
{
	system("CLS");
	printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\tPRICE LIST\n\t\t\t=====================================================================================\n");
	printf("\t\t\tNo                     Description                       Duration     Price\n");
	printf("\t\t\t=====================================================================================\n");
	printf("\t\t\t1. Glimpse of Goa with Flight                           3 Days Rs. 20000 per person\n");
	printf("\t\t\t2. Exotic Kerala with Flight                            4 Days Rs. 25000 per person\n");
	printf("\t\t\t3. Darjeeling & Gangtok - Himalayan Beauty              4 Days Rs. 18000 per person\n");
	printf("\t\t\t4. Kashmir Leisure                                      3 Days Rs. 12000 per person\n");
    printf("\t\t\t5. Shimla & Manali Tour Package                         5 Days Rs. 12000 per person\n");
	printf("\t\t\t6. Rajasthan: Splendid Heritage & Sand Dunes            8 Days Rs. 20000 per person\n");
	printf("\t\t\t7. Corbett & Mussoorie: Wildlife to Scenic Hills        4 Days Rs. 20000 per person\n");
	printf("\t\t\t8. Best Of Andaman                                      5 Days Rs. 25000 per person\n");
	printf("\t\t\t=====================================================================================\n");
	}
void ShowBrochure2()
{
	system("CLS");
	printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\tPRICE LIST\n\t\t\t=====================================================================================\n");
	printf("\t\t\tNo                     Description                       Duration     Price\n");
	printf("\t\t\t=====================================================================================\n");
	printf("\t\t\t1. Wonderful Dubai                                      3 Days Rs. 30000 per person\n");
	printf("\t\t\t2. Essential Bali - Youth Special                       5 Days Rs. 25000 per person\n");
	printf("\t\t\t3. Spectacular Mauritius with Casela Bird Park          6 Days Rs. 75000 per person\n");
	printf("\t\t\t4. Magical Maldives with flight                         3 Days Rs. 55000 per person\n");
    printf("\t\t\t5. Simply Singapur                                      4 Days Rs. 46000 per person\n");
	printf("\t\t\t6. Tops of Switzerland                                  4 Days Rs. 95000 per person\n");
	printf("\t\t\t7. Essential Italy                                      6 Days Rs. 85000 per person\n");
	printf("\t\t\t8. Wilf life safari in Africa                           3 Days Rs. 50000 per person\n");
	printf("\t\t\t=====================================================================================\n");
}
void ShowPackage()
{
	int choice3;
	system("CLS");
	printf("\n\n\n\n\n\n");
                         printf("\t\t\t\t===============================================\n");
                         printf("\t\t\t\t|            CHOOSE CATEGORY                  |\n");
                         printf("\t\t\t\t|  Developed by Santosh Kumar & Sai Dhanush   |\n");
                         printf("\t\t\t\t===============================================\n");
                         printf("\t\t\t\t|                                             |\n");
                         printf("\t\t\t\t|               Indian   - 1                  |\n");
	                     printf("\t\t\t\t|               Abroad   - 2                  |\n");
	                     printf("\t\t\t\t|                                             |\n");
	                     printf("\t\t\t\t===============================================\n");
	                     printf("\n\t\t\t\tEnter Category:"); 
		                 scanf("%d",&choice3);
   	                   switch(choice3)
                   {
                case 1:
                    ShowBrochure1();
                    system("PAUSE");
                    break;
                case 2:
                    ShowBrochure2();
                    system("PAUSE");
                    break;
			    default:
                    {
                    	printf("Not a valid input\n");
                        exit_system();
						exit(0);	
					}
                   }
}
void UserRegd()
{
	system("CLS");
	FILE *f1;
	char surname[100],lastname[100],address1[100],address2[100],address3[100],contact[100];
	char tmailid[100],mailid[100],password[100],desti[100],dura[100],perhead[100],totbill[100],datjor[20];
	f1=fopen("Admin.txt","a+");
	printf("\n\n\n\n\n\n");
	printf("\n\t\t\t\t=====================================");
	printf("\n\t\t\t\t        NEW USER REGISTRATION        ");
	printf("\n\t\t\t\t=====================================");
	printf("\n\t\t\t\tEnter Your Mail ID :");
	scanf("%s",&tmailid);
	/*--------------*/
	while(feof(f1)==0)
    {
    fscanf(f1,"%s %s %s %s %s %s %s %s",mailid,password,surname,lastname,address1,address2,address3,contact);
    if(!strcmp(tmailid,mailid))
    {
    	printf("\n\t\t\t\tThis email already exists\n\t\t\t\tYou can Login with your credentials...\n\t\t\t\t");
    	system("PAUSE");
    	return;
	}
    /*--------------*/
	}
	printf("\t\t\t\tEnter Password :");
	scanf("%s",&password);
	printf("\t\t\t\tEnter Surname :");
	scanf("%s",&surname);
	printf("\t\t\t\tEnter Last Name :");
	scanf("%s",&lastname);
	printf("\t\t\t\tEnter Address line-1 :");
	scanf("%s",&address1);
	printf("\t\t\t\tEnter Address line-2 :");
	scanf("%s",&address2);
	printf("\t\t\t\tEnter Address line-3 :");
	scanf("%s",&address3);
	printf("\t\t\t\tEnter Contact No :");
	scanf("%s",&contact);
	strcpy(mailid,tmailid);
	printf("\t\t\t\t=====================================\n");
	fprintf(f1,"%s %s %s %s %s %s %s %s",mailid,password,surname,lastname,address1,address2,address3,contact);
	fprintf(f1,"\n");
	printf("\t\t\t\t%s %s %s","Dear ",surname,"You are successfully Registered\n\t\t\t\t");
	fclose(f1);
	system("PAUSE");
}
void UserLogin()
{
	system("CLS");
	int choice2;
	FILE *f1;
	FILE *f2;
	FILE *f3;
	char surname[100],lastname[100],address1[100],address2[100],address3[100],contact[100],tmailid[100],mailid[100],password[100];
	char tpassword[100],fname[50],desti[100],dura[100],perhead[100],totbill[100],datjor[20];
	f1=fopen("Admin.txt","r+");
	printf("\n\n\n\n\n\n");
	printf("\n\t\t\t\t=====================================");
	printf("\n\t\t\t\t              USER LOGIN             ");
	printf("\n\t\t\t\t=====================================");
	printf("\n\t\t\t\tEnter Your Mail ID :");
	scanf("%s",&tmailid);
	printf("\t\t\t\tEnter Your Password :");
	scanf("%s",&tpassword);
	while(feof(f1)==0)
    {
    fscanf(f1,"%s %s %s %s %s %s %s %s",mailid,password,surname,lastname,address1,address2,address3,contact);
    if((!strcmp(tmailid,mailid)) && (!strcmp(tpassword,password)))
    {
		printf("%s %s %s","Dear ",surname,"Your Log-in is successful\n");
		system("PAUSE");
		strcpy(fname,mailid);
		strcat(fname,"_Booking.txt");
		BookingPage();
		{
			printf("\t\t\t\tEnter:");
			scanf("%d",&choice2);
            switch(choice2)
            {
                case 1:
                    {
					/*to book ticket*/
					int np,totalcost,choice4;
					char choice5[10],datjor[20],buffer[10];
					     system("CLS");
	                     printf("\n\n\n\n\n\n");
                         printf("\t\t\t\t===============================================\n");
                         printf("\t\t\t\t|               CHOOSE CATEGORY               |\n");
                         printf("\t\t\t\t|  Developed by Santosh Kumar & Sai Dhanush   |\n");
                         printf("\t\t\t\t===============================================\n");
                         printf("\t\t\t\t|                                             |\n");
                         printf("\t\t\t\t|               Indian   - 1                  |\n");
	                     printf("\t\t\t\t|               Abroad   - 2                  |\n");
	                     printf("\t\t\t\t|                                             |\n");
	                     printf("\t\t\t\t===============================================\n");
	                     printf("\n\t\t\t\tEnter Category:"); 
		                 scanf("%d",&choice4);
		           switch(choice4)     
                   {
                case 1:
                    ShowBrochure1();
                    system("PAUSE");
                    break;
                case 2:
                    ShowBrochure2();
                    system("PAUSE");
                    break;
			    default:
                    {
                    	printf("Not a valid input\n");
                        exit_system();
						exit(0);	
					}
                   }
                   printf("\t\t\t\tEnter Place Code:");
			       scanf(" %[^\n]s",&choice5);
			       printf("\t\t\t\tEnter Number of Persons:");
			       scanf("%d",&np);
			       printf("\t\t\t\tEnter Date of Journey (dd-mm-yyyy):");
			       scanf(" %[^\n]s",&datjor);
			       /*======================================*/
		if (choice4==1)
        {
        if(strcmp(choice5,"1")==0)
        {
        f2=fopen("Admin_Ledger.txt","a+");	
        f3=fopen(fname,"w+");
        fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Glimpse-of-Goa 3-Days Rs.20000/person");
		fprintf(f3,"Glimpse-of-Goa 3-Days Rs.20000/person");
	    totalcost=20000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
	    fclose(f2);
	    fclose(f3);
	    fclose(f1);
	    }
        else if(strcmp(choice5,"2")==0)
        {
        f2=fopen("Admin_Ledger.txt","a+");	
        f3=fopen(fname,"w+");
        fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Exotic-Kerala 4-Days Rs.25000/person");
		fprintf(f3,"Exotic-Kerala 4-Days Rs.25000/person");
	    totalcost=25000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
		fclose(f2);
	    fclose(f3);	
	    fclose(f1);
		}
        else if(strcmp(choice5,"3")==0)
        {
        f2=fopen("Admin_Ledger.txt","a+");	
        f3=fopen(fname,"w+");
        fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Darjeeling-&-Gangtok-Himalayan Beauty 4-Days Rs.18000/person");
		fprintf(f3,"Darjeeling-&-Gangtok-Himalayan Beauty 4-Days Rs.18000/person");
	    totalcost=18000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
		fclose(f2);
	    fclose(f3);
		fclose(f1);	
		}
    	else if(strcmp(choice5,"4")==0)
    	{
    	f2=fopen("Admin_Ledger.txt","a+");	
    	f3=fopen(fname,"w+");
    	fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Kashmir-Leisure 3-Days Rs.12000/person");
		fprintf(f3,"Kashmir-Leisure 3-Days Rs.12000/person");
	    totalcost=12000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
	    fclose(f2);
	    fclose(f3);
	    fclose(f1);
	    }
       	else if(strcmp(choice5,"5")==0)
       	{
       	f2=fopen("Admin_Ledger.txt","a+");	
       	f3=fopen(fname,"w+");	
       	fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Shimla-&-Manali-Tour-Package 5-Days Rs.12000/person");
		fprintf(f3,"Shimla-&-Manali-Tour-Package 5-Days Rs.12000/person");
	    totalcost=12000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
		fclose(f2);
	    fclose(f3);	
	    fclose(f1);
		}
    	else if(strcmp(choice5,"6")==0)
    	{
    	f2=fopen("Admin_Ledger.txt","a+");	
    	f3=fopen(fname,"w+");	
    	fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Rajasthan:Splendid-Heritage-&-Sand-Dunes 8-Days Rs.20000/person");
		fprintf(f3,"Rajasthan:Splendid-Heritage-&-Sand-Dunes 8-Days Rs.20000/person");
	    totalcost=20000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
	    fclose(f2);
	    fclose(f3);
	    fclose(f1);
		}
    	else if(strcmp(choice5,"7")==0)
    	{
    	f2=fopen("Admin_Ledger.txt","a+");	
    	f3=fopen(fname,"w+");	
    	fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Corbett-&-Mussoorie:Wildlife-to-Scenic-Hills 4-Days Rs.20000/person");
		fprintf(f3,"Corbett-&-Mussoorie:Wildlife-to-Scenic-Hills 4-Days Rs.20000/person");
	    totalcost=20000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
		fclose(f2);
	    fclose(f3);
		fclose(f1);	
		}
    	else if(strcmp(choice5,"8")==0)
    	{
    	f2=fopen("Admin_Ledger.txt","a+");	
    	f3=fopen(fname,"w+");	
    	fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Best-Of-Andaman 5-Days Rs.25000/person");
		fprintf(f3,"Best-Of-Andaman 5-Days Rs.25000/person");
	    totalcost=25000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
		fclose(f3);
	    fclose(f2);
		fclose(f1);	
		}
	 	else
    	{
        printf("That tour code doesn't exist\n");
        return;
    	}
		}
		else
		{
		if(strcmp(choice5,"1")==0)
		{
		f2=fopen("Admin_Ledger.txt","a+");	
		f3=fopen(fname,"w+");	
		fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Wonderful-Dubai 3-Days Rs.55000/person");
		fprintf(f3,"Wonderful-Dubai 3-Days Rs.55000/person");
	    totalcost=55000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
		fclose(f2);
	    fclose(f3);
		fclose(f1);	
		}
        else if(strcmp(choice5,"2")==0)
        {
        f2=fopen("Admin_Ledger.txt","a+");	
        f3=fopen(fname,"w+");	
        fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Essential Bali-Youth-Special 5-Days Rs.65000/person");
		fprintf(f3,"Essential Bali-Youth-Special 5-Days Rs.65000/person");
	    totalcost=65000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
	    fclose(f2);
	    fclose(f3);
	    fclose(f1);
		}
    	else if(strcmp(choice5,"3")==0)
    	{
    	f2=fopen("Admin_Ledger.txt","a+");	
    	f3=fopen(fname,"w+");	
    	fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Spectacular-Mauritius-with-Casela-Bird-Park 6-Days Rs.75000/person");
		fprintf(f3,"Spectacular-Mauritius-with-Casela-Bird-Park 6-Days Rs.75000/person");
	    totalcost=75000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
	    fclose(f3);
	    fclose(f2);
	    fclose(f1);
		}
    	else if(strcmp(choice5,"4")==0)
    	{
    	f2=fopen("Admin_Ledger.txt","a+");	
    	f3=fopen(fname,"w+");	
    	fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Magical-Maldives 3-Days Rs.55000/person");
		fprintf(f3,"Magical-Maldives 3-Days Rs.55000/rson");
	    totalcost=55000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
	    fclose(f2);
	    fclose(f3);
	    fclose(f1);
		}
    	else if(strcmp(choice5,"5")==0)
    	{
    	f2=fopen("Admin_Ledger.txt","a+");	
    	f3=fopen(fname,"w+");	
    	fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Simply-Singapur 4-Days Rs.46000/person");
		fprintf(f3,"Simply-Singapur 4-Days Rs.46000/person");
	    totalcost=46000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
	    fclose(f2);
	    fclose(f3);
	    fclose(f1);
		}
    	else if(strcmp(choice5,"6")==0)
    	{
    	f2=fopen("Admin_Ledger.txt","a+");	
    	f3=fopen(fname,"w+");	
    	fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Tops-of-Switzerland 4 Days Rs.95000/person");
		fprintf(f3,"Tops-of-Switzerland 4 Days Rs.95000/person");
	    totalcost=95000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
	    fclose(f2);
	    fclose(f3);
	    fclose(f1);
		}
    	else if(strcmp(choice5,"7")==0)
    	{
    	f2=fopen("Admin_Ledger.txt","a+");	
    	f3=fopen(fname,"w+");	
    	fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"Essential-Italy 6-Days Rs.85000/person");
		fprintf(f3,"Essential-Italy 6-Days Rs.85000/person");
	    totalcost=85000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
	    fclose(f2);
	    fclose(f3);
	    fclose(f1);
		}
    	else if(strcmp(choice5,"8")==0)
    	{
    	f2=fopen("Admin_Ledger.txt","a+");	
    	f3=fopen(fname,"w+");	
    	fprintf(f2,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
	    fprintf(f3,"%s %s %s %s %s %s %s %s ",mailid,password,surname,lastname,address1,address2,address3,contact);	
		fprintf(f2,"WilfLife-Safari-in-Africa 3-Days Rs.50000/person");
		fprintf(f3,"WilfLife-Safari-in-Africa 3-Days Rs.50000/person");
	    totalcost=50000*np;
	    fprintf(f2," %s",itoa(totalcost,buffer,10));
	    fprintf(f3," %s",itoa(totalcost,buffer,10));
	    fprintf(f2," %s",&datjor);
	    fprintf(f3," %s",&datjor);
	    fprintf(f2,"\n");
	    fclose(f2);
	    fclose(f3);
	    fclose(f1);
		}
	 	else
    	{
        printf("That tour code doesn't exist\n");
        return;
    	}
		}	
                    }
                    system("PAUSE");
                    fflush(stdin);
                    system("CLS");
                    break;
                case 2:
                	{
                	fflush(stdin);		
                    FILE *f9;
                    char surname[100],lastname[100],address1[100],address2[100],address3[100],contact[100];
                	char mailid[100],password[100],desti[100],dura[100],perhead[100],totbill[100],datjor[20];
                    char uname[25],filetoshow[25];
                    printf("\n\t\t\t\tConfirm your User Name:");
	                scanf("\t\t\t\t%s",&uname);
	                strcat(uname,"_Booking.txt");
                    strcpy(filetoshow,uname);
                    f9=fopen(filetoshow,"r");
	                rewind(f9);
	                fscanf(f9,"%s %s %s %s %s %s %s %s",mailid,password,surname,lastname,address1,address2,address3,contact);
                    fscanf(f9,"%s %s %s %s %s %s %s %s",desti,dura,perhead,totbill,datjor);
                    system("CLS");
                    if(f9 != NULL)
                    {
                    printf("\n\n\n\n\n\n");
                    printf("\n\t\t\t======================================================================");
                    printf("\n\t\t\t                           TICKET STATUS                            \n");
                    printf("\t\t\t======================================================================\n");
                    printf("\t\t\tCongratulation %s your ticket(s) are confirmed                        \n",lastname); 
                    printf("\t\t\t======================================================================\n");
                    printf("\t\t\tTurism Package               : %s\n",desti);
                    printf("\t\t\tDate of Journey              : %s\n",datjor);
                    printf("\t\t\t======================================================================\n");
	                printf("\n");
	                fclose(f9);	
	                }
	                else
	                {
	                printf("\t\t\tCould not find any confirmed ticket...\n");	
					}
					}
                    system("PAUSE");
                    break;
                case 3:
                    /*to print ticket*/
                    {
    FILE *f10;
    FILE *f20;
	char surname[100],lastname[100],address1[100],address2[100],address3[100],contact[100];
	char mailid[100],password[100],desti[100],dura[100],perhead[100],totbill[100],datjor[20];
	char urname[25],xyz[25],file10[25],file20[25];
	printf("\n\t\t\t\tConfirm your User Name:");
	scanf("\t\t\t\t%s",&urname);
	strcpy(xyz,urname);
	strcat(urname,"_Booking.txt");
	strcat(xyz,"_Ticket.txt");
    strcpy(file10,urname);
    strcpy(file20,xyz);
	f10=fopen(urname,"r+");
	if(f10 != NULL)
	{
	f20=fopen(xyz,"w+");
    fscanf(f10,"%s %s %s %s %s %s %s %s",mailid,password,surname,lastname,address1,address2,address3,contact);
    fscanf(f10,"%s %s %s %s %s %s %s %s",desti,dura,perhead,totbill,datjor);
    system("CLS");
	printf("\n\n\n");
	printf("\t\t\t\t================================================================\n");
	printf("\t\t\t\t      _____                                                     \n");
    printf("\t\t\t\t     /_  _/______/\\                                            \n");
    printf("\t\t\t\t      / /___  __/  \\       INTERNATIONAL TOURISM AGENCY        \n");
    printf("\t\t\t\t    _/ /_  / / / /\\ \\          CONFIRMATION TICKET            \n");   
    printf("\t\t\t\t   /____/ / / /_/  \\_\\                                        \n");
    printf("\t\t\t\t         /_/                                                    \n");
    printf("\t\t\t\t================================================================\n");
    printf("\t\t\t\t%s %s\n",surname,lastname);
    printf("\t\t\t\t%s\n",address1);
    printf("\t\t\t\t%s\n",address2);
    printf("\t\t\t\t%s\n",address3);
    printf("\t\t\t\t%s\n",contact);
    printf("\t\t\t\t================================================================\n");
    printf("\t\t\t\tCongratulation %s your tickets have been booked.\n",lastname); 
    printf("\t\t\t\t================================================================\n");
    printf("\t\t\t\tTurism Package               : %s\n",desti);
    printf("\t\t\t\tDuration                     : %s\n",dura);
    printf("\t\t\t\tDate of Journey              : %s\n",datjor);
    printf("\t\t\t\tTotal Value of Package Tour  : Rs.%s.00\n",totbill);
    printf("\t\t\t\t================================================================\n");
	printf("\t\t\t\tDownLoad Itenary from our WebSite...\n");
	printf("\t\t\t\tWish you happy journey...\n");
	
	fprintf(f20,"================================================================\n");
	fprintf(f20,"      _____                                                     \n");
    fprintf(f20,"     /_  _/______/\\                                            \n");
    fprintf(f20,"      / /___  __/  \\       INTERNATIONAL TOURISM AGENCY        \n");
    fprintf(f20,"    _/ /_  / / / /\\ \\          CONFIRMATION TICKET            \n");   
    fprintf(f20,"   /____/ / / /_/  \\_\\                                        \n");
    fprintf(f20,"         /_/                                                    \n");
    fprintf(f20,"================================================================\n");
    fprintf(f20,"%s %s\n",surname,lastname);
    fprintf(f20,"%s\n",address1);
    fprintf(f20,"%s\n",address2);
    fprintf(f20,"%s\n",address3);
    fprintf(f20,"%s\n",contact);
    fprintf(f20,"================================================================\n");
    fprintf(f20,"Congratulation %s your tickets have been booked.\n",lastname); 
    fprintf(f20,"================================================================\n");
    fprintf(f20,"Turism Package               : %s\n",desti);
    fprintf(f20,"Duration                     : %s\n",dura);
    fprintf(f20,"Date of Journey              : %s\n",datjor);
    fprintf(f20,"Total Value of Package Tour  : Rs.%s.00\n",totbill);
    fprintf(f20,"================================================================\n");
	fprintf(f20,"DownLoad Itenary from our WebSite...\n");
	fprintf(f20,"Wish you happy journey...\n");
	fclose(f10);
	fclose(f20);
    }
	else
	{
		printf("Could not find any confirmed ticket...");
	}
}
/*ticket printing ends*/
                    system("PAUSE");
                    system("CLS");
                    break;
                case 4:
                	{	
                	int status;
                    char uname[25],uname1[25],filetodelete1[25],filetodelete2[25];
                    system("CLS");
                    printf("\n\n\n\n\n\n");
                    printf("\n\t\t\t======================================================================");
                    printf("\n\t\t\t                        TICKET CANCELLATION                            \n");
                    printf("\t\t\t======================================================================\n");
                    printf("\t\t\tConfirm your User Name:");
	                scanf("%s",&uname);
	                strcpy(uname1,uname);
	                strcat(uname,"_Booking.txt");
	                strcat(uname1,"_Ticket.txt");
                    strcpy(filetodelete1,uname);
                    strcpy(filetodelete2,uname1);
                    status = remove(filetodelete1);
                    status = remove(filetodelete2);
                             if( status == 0 )
                               {
                               printf("Your Ticket is Cancelled Successfully.\n");
                               printf("Refund will be credited in your bank account as per contract...\n");
                               }
                             else {
                               printf("\n\tCould not find any confirmed ticket...");
                               perror("\n\tContact Admin....");
                                  }
					}
                    system("PAUSE");
                    system("CLS");
                    break;
                case 5:
                	fclose(f1);
                	ChangePW();
                    break;
                case 6:
                    printf("You are Logged-out....Thank you...see you again\n");
                    system("PAUSE");
                    system("CLS");
                    break;
                case 7:
                    ShowPackage();
                    system("CLS");
                    break;
                case 8:
                    exit_system();
                    exit(0);
                    break;
                default:
                	{
                    printf("Not a valid input at this stage\n");
                    system("PAUSE");
                    }
            }
		}
		system("PAUSE");
    	return;
	}
    else if((!strcmp(tmailid,mailid)) && (strcmp(tpassword,password)))
        {
            printf("Password mismatch\n");
            system("PAUSE");
            return;
        }
	}
	printf("Sorry, User does not exist\n");
	system("PAUSE");
	fclose(f1);
	fclose(f2);
	fclose(f3);
	return;
}
void exit_system()
{
    printf("Exiting...\nProject by M.Santosh Kumar and G.Sai Dhanush\n\nPress \"Enter/Return\" to exit");
    char exitprog;
    fflush(stdin);
    scanf("%c",&exitprog);
}
int ChangePW()
{
FILE *f11;
FILE *f22;
char surname[100],lastname[100],address1[100],address2[100],address3[100],contact[100],tmailid[100],mailid[100],password[100];
char tpassword[100];
f11=fopen("Admin.txt","r+");
f22=fopen("temp.txt","w+");
system("CLS");
printf("\n\n\n\n\n\n");
printf("\n\t\t\t\t=====================================");
printf("\n\t\t\t\t         CHANGE USER PASSWORD        ");
printf("\n\t\t\t\t=====================================");
printf("\n\t\t\t\tConfirm Your User ID: ");
scanf("\n\t\t\t\t%s",tmailid);
printf("\n\t\t\t\tEnter Your New Password: ");
scanf("\n\t\t\t\t%s",tpassword);
while(feof(f11)==0)
    {
    fscanf(f11,"%s %s %s %s %s %s %s %s",mailid,password,surname,lastname,address1,address2,address3,contact);
    if((!strcmp(tmailid,mailid)))
    {
    fprintf(f22,"%s %s %s %s %s %s %s %s\n",mailid,tpassword,surname,lastname,address1,address2,address3,contact);	
	}
	else
	{
	fprintf(f22,"%s %s %s %s %s %s %s %s\n",mailid,password,surname,lastname,address1,address2,address3,contact);
    }
    }
    fclose(f22);
    fclose(f11);
    remove("Admin.txt");
    rename("temp.txt","Admin.txt");
    printf("User DataBase is Successfully Updated...");
    return 0;
}
