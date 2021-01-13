#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int valid(char *m,char *p)//checks for correct match of emailid and password
	
	{
		FILE *fp;
		int f=0;
		fp=fopen("pwd.txt","r");
		char *s=(char*)malloc(30);
		char *s1=(char*)malloc(30);


		while(fscanf(fp,"%s",s)!=EOF)
		{
		fscanf(fp,"%s",s1);

		if(strcmp(s,m)==0)
			{
			if(strcmp(s1,p)==0)
				{
					f=1;
				}
			}
	}

	return f;
}
int passwordvalidation(char *p)//checks that the password contains uppercase letter,lowercaseletter,number
	{

		int i,l=0,c=0,s=0,n=0,sc=0,f=0;

		 if(strlen(p)>=8)
	            l=1;

		for(i=0;i<strlen(p);i++)
		{
	            if(p[i]>=65&&p[i]<=90)
	                c=1;
		}

		for(i=0;i<strlen(p);i++)
		{
	            if(p[i]>=97&&p[i]<=120)
	                s=1;
		}
		for(i=0;i<strlen(p);i++)
		{
            		if(p[i]>=48&&p[i]<=57)
                	n=1;
		}

		if(l==1&&c==1&&n==1&&s==1)
		f=1;

	return f;
	}
int rnovalidation(char *p)
{
	int f=0;
	if(p[0]>=48&&p[0]<=57&&p[1]>=48&&p[1]<=57&&strlen(p)==9)//checks that the fisrt 2 character of rollno is a number and length is 9
		{
			if(p[2]=='e'&&p[3]=='u')
			{
				if(p[6]>=48&&p[6]<=57&&p[7]>=48&&p[7]<=57&&p[8]>=48&&p[8]<=57)//checks that the 6th and 7th character of rollno is a number and length is 9
				f=1;
			}
		}
	return f;
}
int dobvalidation(char *p)//checks the dob format dd/mm/yyyy
	{
		int f=0;
		if(p[2]=='/'&&p[5]=='/'&&strlen(p)==10)
		{
			if(p[0]>=48&&p[0]<=57&&p[1]>=48&&p[1]<=57&&p[3]>=48&&p[3]<=57&&p[4]>=48&&p[4]<=57&&p[6]>=48&&p[6]<=57&&p[7]>=48&&p[7]<=57&&p[8]>=48&&p[8]<=57&&p[9]>=48&&p[9]<=57)
			{
				f=1;
			}
		}
	return f;
}
int emailvalidation(char *p)//checks that email ends with "skcet.ac.in"
	{
		int i,f=0;
		for(i=0;i<strlen(p);i++)
			{
			if(p[i]=='@')
	{
		p=p+i+1;
		break;
	}
}
		if(strcmp(p,"skcet.ac.in")==0)
		f=1;

		p=p-i-1;

		FILE *fp;
		fp=fopen("studata.txt","r");

		if(fp==NULL)
		f=1;

		char *s=(char*)malloc(30);
		while(fscanf(fp,"%s",s)!=EOF)
		{
		if(strcmp(s,p)==0)
		f=2;
	}
	fclose(fp);
	return f;
}
int bgvalidation(char *p)
{
	int f=0;
			if(strcmp(p,"a+ve")==0||strcmp(p,"b+ve")==0||strcmp(p,"o+ve")==0||strcmp(p,"a-ve")==0||strcmp(p,"b-ve")==0||strcmp(p,"o-ve")==0||strcmp(p,"ab+ve")==0||strcmp(p,"ab-ve")==0||strcmp(p,"a1b+ve")==0)
		{
			f=1;
		}
	return f;
}
int deptvalidation(char *p)
{
		int f=0;
		if(strcmp(p,"cse")==0||strcmp(p,"it")==0||strcmp(p,"mct")==0||strcmp(p,"eee")==0||strcmp(p,"ece")==0)
		f=1;
		return f;
}
int quotavalidation(char *p)
{
	int f=0;
		if(strcmp(p,"gq")==0||strcmp(p,"mq")==0||strcmp(p,"sq")==0)
		f=1;
	return f;
}
int contactnovalidation(char *p)//checks for contact no contauins length of 10
{
	int f=0,i;
		for(i=0;i<=9&&strlen(p)==10;i++)
			{
			if(p[i]>=48&&p[i]<=57)
			f=1;

			else
			{
			f=0;
			break;
			}
			}
	return f;
}
int cgpavalidation(char *p)
	{
		int f=0,i;
			if(p[1]=='.'&&p[0]>=48&&p[0]<=57&&strlen(p)==4)
				{
					if(p[2]>=48&&p[2]<=57&&p[3]>=48&&p[3]<=57)
					f=1;
				}
	return f;
	}
int categoryvalidation(char *p)
	{
		int f=0;
		if(strcmp(p,"Hosteller")==0||strcmp(p,"Dayscholar")==0)
		f=1;
		return f;
	}

char *s;
char a;

int main()
{
char n;
X:printf("enter the choice:\n1.Transport\n2.Hostel\n3.Academics\n4.student\n5.Exam details\n6.Queries\n");
scanf("%c",&n);
	FILE *fpt;
	switch(n)
	{
		case '1':
		{			
			FILE *fpt;
			int a,b=0;

		char *s=(char*)malloc(5);

			printf("\t\t\t\t\t\t\tTransport\n");
			printf("\t\t\t\t\t\t\t*********\n");
			printf("\n");
			fpt=fopen("transport.txt","r");

			while(fgets(s,5,fpt)!=NULL)
			{
				printf("%s",s);
			}
			fclose(fpt);
			 free(s);
			printf("do you want to continue 1/0");
			scanf("%c",&a);
			if(a==1)
			goto X;
			else
			break;
}
case '2':
{
	int choice,choice1,choice2;
	FILE *fp,*fp1,*fp2,*fp3,*fp4;
	printf("1.staff\t2.student\nEnter your choice\n");
	fp=fopen("srules.txt","r");
	fp2=fopen("strules.txt","r");
	fp3=fopen("stfees.txt","r");
	fp4=fopen("outpass.txt","r");
	scanf("%d",&choice);
	char *s=(char*)malloc(5);
	if(choice==1)
		{
		printf("1.Rules\n2.Fees\nEnter your choice\n");
		scanf("%d",&choice1);
	if(choice1==1)
		{
	while(fgets(s,5,fp)!=NULL)
			{
	printf("%s",s);
			}
	fclose(fp);
		}
	if(choice1==2)
		{
	fp1=fopen("sfees.txt","r");
	while(fgets(s,5,fp1)!=NULL)
			{
	printf("%s",s);
			}
	fclose(fp1);
		}
	}
	 if(choice==2)
	 {
	    printf("1.Rules\n2.Fees\n3.Outpass");
	    scanf("%d",&choice2);
	     if(choice2==1)
	    {
	       while(fgets(s,5,fp2)!=NULL)
	       {
		  printf("%s",s);
	       }
	fclose(fp2);
	    }
	     if(choice2==2)
	    {
	       while(fgets(s,5,fp3)!=NULL)
	       {
		  printf("%s",s);
	       }
	fclose(fp3);
	    }
	if(choice2==3)
		{
	while(fgets(s,5,fp4)!=NULL)
	{
		printf("%s",s);
	}	
	fclose(fp4);
	free(s);
    }
 }
 printf("do you want to continue 1/0");
	scanf("%c",&a);
	if(a==1)
	goto X;
	else
	break;
}



case '3':
{
FILE *fpd;

int n;
	char *s=(char*)malloc(5);
	printf("Enter\n1.department details\n2.academic calender\n3.fees structure\n4..librarydetails \n");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
	fpd=fopen("dept.txt","r");
	break;
	case 2:
	fpd=fopen("ac.txt","r");
	break;
	case 3:
	fpd=fopen("fs.txt","r");
	break;
	case 4:
	fpd=fopen("lb.txt","r");
	break;
	default:
	printf("Enter valid choice");
	}
while(fgets(s,10,fpd)!=NULL)
	{
	printf("%s",s);
	}
	fclose(fpd);
	free(s);
	printf("do you want to continue 1/0");
			scanf("%c",&a);
			if(a==1)
			goto X;
			else
			break;
}
	case '4':
	{
	FILE *fpa;
	int a;
	printf("Enter 1.student details\n 2.attendance \n3.admission\n");
	scanf("%d",&a);
	if(a==1)
	{
	int j=0,i;
	FILE *fps;
	char *s=(char*)malloc(100);
	char *n=(char*)malloc(100);
	char *n1=(char*)malloc(100);
	char *pw=(char*)malloc(100);
	printf("Enter \n 1.previous year students\n 2.current year students\n");
	scanf("%d",&i);
	if(i==1)
	fps=fopen("std.txt","r");
	else if(i==2)
	fps=fopen("studata.txt","r");
	else
	printf("Enter a valid choice");
	
	printf("Enter mail id");
	scanf("%s",n);
	printf("Enter pwd");
	scanf("%s",pw);
	if(strcmp(pw,"admin")!=0)
	{
	if(valid(n,pw))
	{
	for(i=0;i<9;i++)
	n1[i]=n[i];
	
	while(fscanf(fps,"%s",s)!=EOF)
	{
	if(strcmp(s,n1)==0)
	{
		while(j<11)
		{
		if(j==0)
		printf("id          :");
		if(j==1)
		printf("name        :");
		 if(j==2)
		printf("dob         :");
		if(j==3)
		printf("mail id     :");
		if(j==4)
		printf("bloodgroup  :");
		if(j==5)
		printf("department  :");
		if(j==6)
		printf("quota       :");
		if(j==7)
		printf("address     :");
		if(j==8)
		printf("phone num   :");
		if(j==9)
		printf("cgpa        :");
		if(j==10)
		printf("category    :");
		printf("%s\n",s);
		fscanf(fps,"%s",s);
		j++;
		}
	}
	}
	}
	else
	printf("Enter valid details");
	fclose(fps);
	}
	else
	{
	for(i=0;i<9;i++)
	n1[i]=n[i];

	while(fscanf(fps,"%s",s)!=EOF)
		{
	if(strcmp(s,n1)==0)
		{
		while(j<11)
			{
			if(j==0)
			printf("id          :");
				if(j==1)
				printf("name        :");
 				if(j==2)
				printf("dob         :");
				if(j==3)
				printf("mail id     :");
				if(j==4)
				printf("bloodgroup  :");
				if(j==5)
				printf("department  :");
				if(j==6)
				printf("quota       :");
				if(j==7)
				printf("address     :");
				if(j==8)
				printf("phone num   :");
				if(j==9)
				printf("cgpa        :");
				if(j==10)
				printf("category    :");
				printf("%s\n",s);
		fscanf(fps,"%s",s);	
		j++;
		}
		}
	}	
	}

}
if(a==2)
{
char t[50];
char *p=(char*)malloc(100);
char *s=(char*)malloc(100);
printf("\t\t\t\tattendance\n");
printf("\n");

printf("Enter mailid");
scanf("%s",t);


fpa=fopen("at.txt","r");

while(fscanf(fpa,"%s",s)!=EOF)
{
fscanf(fpa,"%s",p);


if(strcmp(s,t)==0)
{
printf("number of days present=%s",p);
break;
}
else
continue;
}
if(fscanf(fpa,"%s",s)==EOF)
printf("Enter a valid email id");
fclose(fpa);
}
if(a==3)
{

int i,f=0,n;
int ch;
		char *s=(char*)malloc(1000);
printf("enter the choice number:\n1.New creations\n2.fetching details\n");
scanf("%d",&ch);
if(ch==1)
{
printf("enter the number of students detail to be entered\n");
scanf("%d",&n);
FILE *fp,*fpp;
fp=fopen("studata.txt","a");
for(i=0;i<n;i++)
{
printf("Enter the rollno\n");
X1:scanf("%s",s);
if(rnovalidation(s))
fprintf(fp,"%s\t",s);
else
{
printf("Enter a valid rollno");
goto X1;
}

printf("Enter the name\n");
scanf("%s",s);
fprintf(fp,"%s\t",s);

printf("Enter the dob in the format date/month/year\n");
X2:scanf("%s",s);
if(dobvalidation(s))
fprintf(fp,"%s\t",s);
else
{
printf("Enter a valid date of birth");
goto X2;
}


printf("Enter the email\n");
X3:scanf("%s",s);
int a1=emailvalidation(s);
if(a1==2)
{
printf("This mailid is already taken");
goto X3;
}
else if(a1==1)
{
fprintf(fp,"%s\t",s);
fpp=fopen("pwd.txt","a");
fprintf(fpp,"%s\t",s);
printf("Enter password");
C1:scanf("%s",s);
if(passwordvalidation(s))
{
fprintf(fpp,"%s\n",s);
fclose(fpp);
}
else
{
printf("Enter valid password");
goto C1;
}
}
else
{
printf("Enter a valid emailid");
goto X3;
}

printf("Enter the bloodgroup\n");
X4:scanf("%s",s);
if(bgvalidation(s))
fprintf(fp,"%s\t",s);
else
{
printf("Enter a valid bloodgroup");
goto X4;
}

printf("Enter the department\n");
X5:scanf("%s",s);
if(deptvalidation(s))
fprintf(fp,"%s\t",s);
else
{
printf("Enter a valid dept");
goto X5;
}

printf("Enter the quota\n");
X6:scanf("%s",s);
if(quotavalidation(s))
fprintf(fp,"%s\t",s);
else
{
printf("Enter a valid quota");
goto X6;
} 

printf("Enter the address without whitespace\n");
scanf("%s",s);
fprintf(fp,"%s\t",s);

printf("Enter the contact number\n");
X7:scanf("%s",s);
if(contactnovalidation(s))
fprintf(fp,"%s\t",s);
else
{
printf("Enter a valid contact no");
goto X7;
}

printf("Enter the cgpa\n");
X8:scanf("%s",s);
if(cgpavalidation(s))
fprintf(fp,"%s\t",s);
else
{
printf("Enter a valid cgpa");
goto X8;
}


printf("Enter the category:\n");
X9:scanf("%s",s);
if(categoryvalidation(s))
fprintf(fp,"%s\n",s);
else
{
printf("Enter a valid category");
goto X9;
}
}
fclose(fp);
}

}

printf("do you want to continue 1/0");
			scanf("%d",&a);
			if(a==1)
			goto X;
			else
			break;
}


	case '5':
		{
				printf("                                                SRI KRISHNA INSTITUTIONS\n");
		printf("                    EXAM DETAILS\n");
		int ch;
	printf("Enter the choice\n1.Result\n2.Hall ticket\n3.Timetable\n4.forms\n5.Fees\n");
	scanf("%d",&ch);
	int i;
	if(ch==1)
	{
			//FILE *fptr;
			int n=6;
	//fptr=fopen(fptr,"r ");
		int f=0;
		char s[30],str[30],str1[30];
		printf("Enter your registration number\n");
		scanf("%s",str);
		printf("Enter your password\n");
		scanf("%s",str1);
		FILE *fp;
		fp=fopen("result.txt","r");
		//strcpy(s,fgetc(*fp));
		fscanf(fp,"%s",s);
		if(strcmp(str1,"admin")!=0)
		{
		while(s!="-1")
	{
		if(strcmp(s,str)==0)
		{
			fscanf(fp,"%s",s);
			//printf("Password:%s\n",s);
			if(strcmp(s,str1)==0)
			{
				while(n!=0)
				{
					f=1;
				fscanf(fp,"%s",s);
				printf("%s\n",s);
				n--;
			}
			}	
		}
			fscanf(fp,"%s",s);
	}
		if(f==0)
		{
			printf("Invalid Password\n");
		}
	}
		else
		{
			while(n!=0)
				{
					f=1;
				fscanf(fp,"%s",s);
				printf("%s\n",s);
				n--;
			}
		}
		}
else if(ch==2)
{
	printf("        HALL TICKET\n");
		int n=6;
		int f=0;
		char s[30],str[30],str1[30];
		printf("Enter your mail_id\n");
		scanf("%s",str);
		printf("Enter your password\n");
		scanf("%s",str1);
		FILE *fp;
		fp=fopen("hallticket.txt","r");
		//strcpy(s,fgetc(*fp));
		fscanf(fp,"%s",s);
		if(strcmp(str1,"admin")!=0)
		{
		while(s!="-1")
		{
		if(strcmp(s,str)==0)
		{
			fscanf(fp,"%s",s);
			if(strcmp(s,str1)==0)
			{
				while(n!=0)
				{
					f=1;
				fscanf(fp,"%s",s);
				printf("%s\n",s);
				n--;
			}
			}
		}
			fscanf(fp,"%s",s);
		}
		if(f==0)
		{
			printf("Invalid Password\n");
		}
	}
	else
	{
		while(n!=0)
				{
					f=1;
				fscanf(fp,"%s",s);
				printf("%s\n",s);
				n--;
			}
	}
		}
else if(ch==3)
{
	char st[5];
//	int n=6,m;
	printf("                         Time table\n");
	printf("Enter the department in uppercase letter\n");
	scanf("%s",st);
	printf("Session:FN\nTime:9.00am to 12.00pm\n");
	printf("   Subjects\n");
	if(strcmp(st,"CSE")==0)
	{
		printf("1.Fourierseriesandcomputationalmethod\n2.Computernetworks\n3.TheoryofComputationalmethods\n4.Artificialintelligence\n5.Microprocessorandmicrocontroller\n6.AdvancedJavaProgramming/Data mining");
	}
	else if(strcmp(st,"ECE")==0)
	{
		printf("Microcontrollers\nDigital Electronics\nElectron devices\nDigital system processing\n Control systems\nDigital communication\n");
	}
	else if(strcmp(st,"EEE")==0)
	{
		printf("Design of electrical machines\nVirtual instrumentation\nMicroprocessor and microcontroller Interfacing\nPower electronics\nRenewable energy systeSmart grid\n");
	}
	else if(strcmp(st,"IT"))
	{
		printf("Fourierseries and computational method\nComputer networks \nTheory of Computational methods\nMachine Learning\nMicroprocessor and microcontroller\nAdvanced Java Programming/Data mining\n ");
		
	}
}
else if(ch==4)
{
	printf("                   APPLICATION FORM\n");
	int c;
	printf("Enter the choice\n1.Arrear application form\n2.Exam Appliaction form\n");	
	scanf("%d",&c);
	if(c==1)
	{
		printf("------------------------------------------------------------------------------------------------------------\n");
		printf("              Sri krishna college of technology,kovaipudur\n");
		printf("               Arrear Application form\n");
		printf("Name:------------\nRegister number-------------\nDepartment:----------\nYear of study&semester:--------&----------\nNo.of arrears:\nArrear subjects:\n\n\n");
		printf("Signature of student         Signature of tutor          Signature of HOD\n");
		printf("------------------------------------------------------------------------------------------------------------\n");
		
	}
	else if(c==2)
	{
		printf("------------------------------------------------------------------------------------------------------------\n");
		printf("              Sri krishna college of technology,kovaipudur\n");
		printf("                Exam Application form\n");
		printf("Name:-----------\nRegister number:------------\nDepartment:------------\nYear of study&semester:-------&-------\n\n\n");
		printf("Signature of student         Signature of tutor          Signature of HOD\n");
		printf("------------------------------------------------------------------------------------------------------------\n");	
	}
	else
	printf("Invalid choice\n");
}
else if(ch==5)
{
	printf("                  FEE DETAILS\n");
	printf("Exam fees\n");
	printf("-------------------------------------------\n");
	printf("Department                      Fees\n");
	printf(" CSE                           10,000\n");
	printf(" IT                            10,000\n");
	printf(" EEE                           10,500\n");
	printf(" ECE                           10,500\n");
	printf(" MECHANICAL                    10,700\n");
	printf(" CIVIL                         10,700\n");
	printf("--------------------------------------------\n");
	printf("Due date:25/12/2019\n");
}

else
printf("Invalid choice\n");

			printf("do you want to continue 1/0");
			scanf("%c",&a);
			if(a==1)
			goto X;
			else
			break;
}
			case '6':
				{
					FILE *q;
char d[20];
q=fopen("query.txt","r");
while(fscanf(q,"%s",d)!=EOF)
{
printf("%s",d);
}
printf("do you want to continue 1/0");
			scanf("%c",&a);
			if(a=='1')
			goto X;
			else
			break;
				}
				default:
				{
				printf("Enter a valid choice");
				printf("do you want to continue 1/0");
			scanf("%c",&a);
			if(a=='1')
			goto X;
			else
			break;
				}
				}
	}




