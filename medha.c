#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct library{
	char title[20];
	char author[20];
	int ISDN;
	int noc;
	int ref_no;
	};
	struct purchase{
	int no_c;
	int refno;
	int price;
	int discount;
	char dname[10];	
	};
int main()
{
struct library b;
struct purchase p;int isd;int f=1,fl2=1;char name[10];int refer;
int ch,n,i,choice=1;
FILE *afile,*bfile,*cfile,*dfile;
bfile=fopen("d:\\temp.txt","a");
do{
printf("\nEnter 1 to enter library books records\n2 to read library books\n3 To remove a copy \n4 To add book by dealer\n5 To display book names by a dealer-\n6 to EXIT\n");
scanf("%d",&ch);

switch(ch)
{
	case 1: afile=fopen("d:\\books.txt","w+");
	
			if(afile==NULL)
			{printf("ERROR WHILE SAVING STUDENT DATA");
			return 1;
			}
			while(1)
			{		printf("\nEnter title of the book-");
					scanf("%s",b.title);
					printf("\nEnter author-");
					scanf("%s",b.author);
					printf("\nEnter ISDN no-");
					scanf("%d",&b.ISDN);
					printf("\nEnter no of copies-");
					scanf("%d",&b.noc);
					printf("\nEnter reference no-");
					scanf("%d",&b.ref_no);
					fprintf(afile,"%s \t %s \t %d \t %d \t %d\n",b.title,b.author,b.ISDN,b.noc,b.ref_no);
					printf("Want to add one more entry to library? y/n ");
					char c=getch();
					if(c=='n')
						break;
					
			}
			fclose(afile);
			
			break;
	case 2: 	afile=fopen("d:\\books.txt","r");
				if(afile==NULL)
				{
					printf("error");
					return 1;
				}

				while(1)
				{	printf("\nTitle  Author  ISDN no  No of copies  Ref no\n");
					int eof=fscanf(afile,"\n%s \t %s \t %d \t %d \t %d\n",&b.title,&b.author,&b.ISDN,&b.noc,&b.ref_no);
					if(eof==-1){break;}
					
					printf("\n%s \t %s \t %d \t %d \t %d\n",b.title,b.author,b.ISDN,b.noc,b.ref_no);
				}
				fclose(afile);
				break;
	case 3: 	
				printf("\nEnter the isdn no of book for deletion in copies\n");
				scanf("%d",&isd);
				int flag=0;
				afile=fopen("d:\\books.txt","r");
				if(afile==NULL)
				{
					printf("error");
					return 1;
				}
				while(fscanf(afile,"\n%s \t %s \t %d \t %d \t %d\n",&b.title,&b.author,&b.ISDN,&b.noc,&b.ref_no)!=EOF)
				{	if(b.ISDN==isd)
					{
					
					fprintf(bfile,"%s \t %s \t %d \t %d \t %d\n",b.title,b.author,b.ISDN,b.noc-1,b.ref_no);
					flag=1;
					}
					else
					{ fprintf(bfile,"%s \t %s \t %d \t %d \t %d\n",b.title,b.author,b.ISDN,b.noc,b.ref_no);
				
					}
					if(flag==0)
					{printf("isdn no not found");
					}
					
				}
				fclose(afile);
				fclose(bfile);
				 afile=fopen("d:\\books.txt","w"); //deleting book's contents
				 fclose(afile);
				 afile=fopen("d:\\books.txt","a");//copying from temp file
				 bfile=fopen("d:\\temp.txt","r");
				 while(fscanf(bfile,"%s \t %s \t %d \t %d \t %d\n",&b.title,&b.author,&b.ISDN,&b.noc,&b.ref_no)!=EOF)
				 {
					 fprintf(afile,"%s \t %s \t %d \t %d \t %d\n",b.title,b.author,b.ISDN,b.noc,b.ref_no);
				 }
				 fclose(afile);
				 fclose(bfile);
				 remove("d:\\temp.txt");
				 
				break;
	case 4:		 cfile=fopen("d:\\dealer.txt","w+");
	
				if(cfile==NULL)
				{printf("ERROR WHILE SAVING DATA");
				return 1;
				}
					while(1)
			{		printf("\nEnter dealer's name-");
					scanf("%s",&p.dname);
					printf("\nEnter ref no-");
					scanf("%d",&p.refno);
					printf("\nEnter no of copies");
					scanf("%d",&p.no_c);
					printf("\nEnter price-");
					scanf("%d",&p.price);
					printf("\nEnter discount-");
					scanf("%d",&p.discount);
					fprintf(cfile,"%s \t %d \t %d \t %d \t %d\n",p.dname,p.refno,p.no_c,p.price,p.discount);
					printf("\nADDED!");
					printf("Want to add one more entry to library? y/n ");
					char d=getch();
					if(d=='n')
					break;
			}
					fclose(cfile);
					/*afile=fopen("d:\\books.txt","w+");
					while(fscanf(cfile,"%s \t %d \t %d \t %d \t %d\n",&p.dname,&p.refno,&p.no_c,&p.price,&p.discount)!=EOF)
				{	while(fscanf(afile,"\n%s \t %s \t %d \t %d \t %d\n",&b.title,&b.author,&b.ISDN,&b.noc,&b.ref_no)!=EOF)
					if(p.refno==)
					{
					
					fprintf(bfile,"%s \t %s \t %d \t %d \t %d\n",b.title,b.author,b.ISDN,b.noc-1,b.ref_no);
					flag=1;
					}
					else
					{ fprintf(bfile,"%s \t %s \t %d \t %d \t %d\n",b.title,b.author,b.ISDN,b.noc,b.ref_no);
				
					}
					if(flag==0)
					{printf("isdn no not found");
					}
					
				}
				fclose(afile);
				fclose(bfile);
				 afile=fopen("d:\\books.txt","w"); //deleting book's contents
				 fclose(afile);
				 afile=fopen("d:\\books.txt","a");//copying from temp file
				 bfile=fopen("d:\\temp.txt","r");
				 while(fscanf(bfile,"%s \t %s \t %d \t %d \t %d\n",&b.title,&b.author,&b.ISDN,&b.noc,&b.ref_no)!=EOF)
				 {
					 fprintf(afile,"%s \t %s \t %d \t %d \t %d\n",b.title,b.author,b.ISDN,b.noc,b.ref_no);
				 }
				 fclose(afile);
				 fclose(bfile);
				 remove("d:\\temp.txt");*/
					break;
	case 5: 	
				printf("\nEnter the dealer name who's details of books is to be displayed");
			scanf("%s",&name);
			int fl=0;
				cfile=fopen("d:\\dealer.txt","r");
				
				if(cfile==NULL)
				{
					printf("error");
					return 1;
				}
				
				while(fscanf(cfile,"\n%s \t %d \t %d \t %d \t %d\n",&p.dname,&p.refno,&p.no_c,&p.price,&p.discount)!=EOF)
				{	if(strcmp(name,p.dname)==0)
					{
					refer=p.refno;
					printf("%s \t %d \t %d \t %d \t %d\n",p.dname,p.refno,p.no_c,p.price,p.discount);
					
					printf("refno is %d",&refer);
					}
					
					
					
				}
				afile=fopen("d:\\books.txt","r");
				if(afile==NULL)
				{
					printf("error");
					return 1;
				}
				while(fscanf(afile,"\n%s \t %s \t %d \t %d \t %d\n",&b.title,&b.author,&b.ISDN,&b.noc,&b.ref_no)!=EOF)
					{	if(refer=b.ref_no)
						{
						printf("\twith title %s \tand author %s\n",b.title,b.author);
						fl=1;
						}
					}
					if(fl==0)
					{printf("dealer not found");
					}
					
				
				fclose(cfile);
				fclose(bfile); 
				break;
	
	
	case 6: 
			exit(0);
}
}

while(ch!=6);
return 0;
}
					
					















