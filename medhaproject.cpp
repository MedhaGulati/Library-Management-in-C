#include<iostream>
#include<fstream>
#include<clear.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class train
{
        private: int trainno,afseat,asseat,fsseat,ssseat;
                 char trainname[30],sp[30],dest[30];

        public: train()
                    {
                        trainno=0;
                        afseat=0;
                        asseat=0;
                        fsseat=0;
                        ssseat=0;


                    }
                void input()
                {
                    cout<<"ENTER THE TRAIN NUMBER"<<endl;
                    cin>>trainno;
                    cout<<"ENTER NUMBER OF A/C FIRST CLASS SEATS";
                    cin>>afseat;
                    cout<<"ENTER NUMBER OF A/C SECOND CLASS SEATS";
                    cin>>asseat;
                    cout<<"ENTER NUMBER OF FIRST CLASS SLEEPER SEATS";
                    cin>>fsseat;
                    cout<<"ENTER NUMBER OF SECOND CLASS SLEEPER SEATS";
                    cin>>ssseat;
                    cout<<"ENTER THE TRAIN NAME:"<<endl;
                    cin>>trainname;
                    cout<<"ENTER THE STARTING POINT:"<<endl;
                    cin>>sp;
                    cout<<"ENTER THE DESTINATION:"<<endl;
                    cin>>dest;
                    cout<<"Press any key to continue..."<<endl;

                }

                int rettrno()
                {
                     return trainno;

                }

                int acf()
                {
                    return afseat;
                }

                int acs()
                {
                    return asseat;
                }

                int fcs()
                {
                    return fsseat;
                }

                int scs()
                {
                    return ssseat;
                }

                void display()
                {
                    cout<<"TRAIN NUMBER:"<<trainno<<endl;
                    cout<<"TRAIN NAME:"<<trainname<<endl;
                    cout<<"NO OF A/C FIRST CLASS SEATS:"<<afseat<<endl;
                    cout<<"NO OF A/C SECOND CLASS SEATS:"<<asseat<<endl;
                    cout<<"NO OF FIRST CLASS SLEEPER SEATS:"<<fsseat<<endl;
                    cout<<"NO OF SECOND CLASS SLEEPER SEATS:"<<ssseat<<endl;
                    cout<<"Starting point:"<<sp<<endl;
                    cout<<"Destination:"<<dest<<endl;

                }
};

class tickets
{ train trn;
                  private: int resno,age,toaf,nofaf,toas,nofas,tofs,noffs,toss,nofss,rando;
                         char status[30],name[30];
                public: tickets()
                        {
                            resno=0;
                            toaf=0;
                            nofaf=0;
                            toas=0;
                            nofas=0;
                            tofs=0;
                            noffs=0;
                            toss=0;
                            nofss=0;
                            rando=3467;
                        }
                        int random()
                        {
                            rando++;
                        }
                        int ret()


                        {   resno++;
                            return resno;
                        }
                        void reservations()
                        {
                            int tno,f=0;
                            cout<<"___________________RESERVATION_____________________"<<endl;
                            nofaf=trn.acf();
                            nofas=trn.acs();
                            noffs=trn.fcs();
                            nofss=trn.scs();
                            cout<<"Enter your name:";
                            cin>>name;
                            cout<<"Enter your age:";
                            cin>>age;
                            cout<<" Select the class you wish to travel:"<<endl;
                            cout<<"1. A/C First class"<<endl;
                            cout<<"2. A/C Second class"<<endl;
                            cout<<"3. First class sleeper"<<endl;
                            cout<<"4. Second class sleeper"<<endl;
                            int ch;
                            cin>>ch;
                            switch(ch)
                            {

                                case 1: toaf++;
                                        resno=random();
                                        if((nofaf-toaf)>0)
                                        {
                                            strcpy(status,"CONFIRMED");
                                            cout<<"Status:"<<status<<endl;
                                            cout<<"Your reservation number is:"<<resno<<endl;
                                        }
                                        else
                                        {
                                            strcpy(status,"PENDING");
                                            cout<<"Status:"<<status<<endl;
                                            cout<<"Your reservation number is:"<<resno<<endl;

                                        }
                                        break;
                                case 2: toas++;
                                        resno=random();
                                        if((nofas-toas)>0)
                                        {
                                            strcpy(status,"CONFIRMED");
                                            cout<<"Status:"<<status<<endl;
                                            cout<<"Your reservation number is:"<<resno<<endl;
                                        }
                                        else
                                        {
                                            strcpy(status,"PENDING");
                                            cout<<"Status:"<<status<<endl;
                                            cout<<"Your reservation number is:"<<resno<<endl;

                                        }
                                        break;
                                case 3: tofs++;
                                        resno=random();
                                        if((noffs-tofs)>0)
                                        {
                                            strcpy(status,"CONFIRMED");
                                            cout<<"Status:"<<status<<endl;
                                            cout<<"Your reservation number is:"<<resno<<endl;
                                        }
                                        else
                                        {
                                            strcpy(status,"PENDING");
                                            cout<<"Status:"<<status<<endl;
                                            cout<<"Your reservation number is:"<<resno<<endl;

                                        }
                                        break;
                                case 4: toss++;
                                        resno=random();
                                        if((nofss-toss)>0)
                                        {
                                            strcpy(status,"CONFIRMED");
                                            cout<<"Status:"<<status<<endl;
                                            cout<<"Your reservation number is:"<<resno<<endl;
                                        }
                                        else
                                        {
                                            strcpy(status,"PENDING");
                                            cout<<"Status:"<<status<<endl;
                                            cout<<"Your reservation number is:"<<resno<<endl;

                                        }
                                        break;



                            }
                        }
                        void display()
                        {
                            cout<<"Name:"<<name<<endl;
                            cout<<"Age:"<<age<<endl;
                            cout<<"Present status:"<<status<<endl;
                            cout<<"Reservation number:"<<resno<<endl;

                        }


};
int main()
{  int b,i,res;
    char cont;

    cout<<" ****  ****  *****  *    *   *   ****  *  *  ****"<<endl;
    cout<<" *  *  *  *    *    *    *   *   *  *  *  *  *"<<endl;
    cout<<" ****  ****    *    *    *   *   ****  ****  ****"<<endl;
    cout<<" * *   *  *    *    *    * * *   *  *     *     *"<<endl;
    cout<<" *  *  *  *  *****  **** ** **   *  *  ****  ****"<<endl;

train tr ;
 tickets ti;
    getch();
    system("cls");
    int choice, option;
    int n;
    fstream afile;
    fstream afile1;
do
{
cout<<"           WELCOME TO THE INDIAN RAILWAY TICKET RESERVATION"<<endl;
cout<<"==============================================================================="<<endl;
cout<<"1.ENTER DETAIL OF TRAIN"<<endl;
cout<<"2.UPDATE TRAIN DETAILS"<<endl;
cout<<"3.RESERVING OF TICKET"<<endl;
cout<<"4.CANCELING OF TICKET"<<endl;
cout<<"5.TO DISPLAY THE PRESENT TICKET STATUS"<<endl;
cout<<"6.EXIT"<<endl;
cout<<" "<<endl;
cout<<"enter choice.."<<endl;
cout<<"  "<<endl;

cin>>choice;
cout<<choice;
switch(choice)
{

    case 1:cout<<"PLEASE ENTER THE FOLLOWING DETAILS"<<endl;
                afile.open("rail.dat",ios::out|ios::app);
                afile.write((char*)&tr,sizeof(train));
                tr.input();
                afile.close();
                    break;
    case 2: cout<<"PLEASE ENTER THE FOLLOWING DETAILS WITH THE MODIFICATIONS YOU REQUIRE TO MAKE"<<endl;
              afile.open("rail.dat",ios::out|ios::app);
              afile.write((char*)&tr,sizeof(train));
                    tr.input();
                    tr.display();
              afile.close();
                    break;
    case 3:cout<<"ENTER NO. OF TICKETS YOU WANT TO RESERVE"<<endl;
              cin>>n;
              afile.open("rail.dat",ios::out|ios::app);
              for(int i=0;i<n;i++)
             {
                 ti.reservations();
                 afile.write((char*)&tr,sizeof(train));
             }
             afile.close();
                     break;
    case 4:cout<<"PLEASE ENTER THE RESERVATION NO. OF THE TICKET YOU WANT TO CANCEL"<<endl;
            cin>>res;
            afile.open("rail.dat",ios::in);
            afile1.open("rail1.dat",ios::out|ios::app);
            while(afile)
            {
                if(!afile)
                    break;
                afile.read((char*)&ti,sizeof(tickets));
                if(res!=ti.ret())
                {
                    afile1.write((char*)&tr,sizeof(train));
                    afile1.write((char*)&ti,sizeof(tickets));
                }
                else
                {
                    afile.write((char*)&tr,sizeof(train));
                    afile.write((char*)&ti,sizeof(tickets));
                }
            }
            afile1.close();
            afile.close();
            remove("rail.dat");
            rename("rail.dat","rail1.dat");
            break;

    case 5: cout<<"ENTER RESERVATION NO. OF YOUR TICKET"<<endl;
            cin>>res;
            afile.open("rail.dat",ios::in);
            while(afile)

            {
                if(!afile)
                    break;
                afile.read((char*)&ti,sizeof(tickets));
                if(res=ti.ret())
                {
                    ti.reservations();
                    ti.display();
                }
            }
            break;

}
cout<<"Want to continue?(y/n)"<<endl;
 cin>>cont;
}while(cont=='y');
getch();
}

