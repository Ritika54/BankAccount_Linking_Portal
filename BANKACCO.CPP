/***************************************************************/
/***********************DIGITALIZED INDIA***********************/
/***************************************************************/
#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
char A;
struct dob
{
  int date,year;
  char month[10];
};
class aadhar
{
  dob d;
  public:
   int n;
   char a_no[13],m_no[12];
   char name[30],gender,add[40],*l_no;
   aadhar()
   {
     l_no="mp14mx12345";
   }
   void enter()
   {
      cout<<"\nName: ";
      gets(name);
      cout<<"\nGender(M/F): ";
      cin>>gender;
      cout<<"\nDate of Birth(D/M/Y)";
      cout<<"\nDate: ";
      cin>>d.date;
      cout<<"\nMonth(in alphabets): ";
      gets(d.month);
      cout<<"\nYear: ";
      cin>>d.year;
      cout<<"\nAddress: ";
      gets(add);
      cout<<"\nMobile number: ";
      gets(m_no);
      cout<<"\nAadhar number: ";
      gets(a_no);
      cout<<"You want to enter licence number or not(Y/N): ";
      cin>>A;
      elicence(A);
  }
    void elicence(char A)
    {
      if(A=='Y')
      {
	cout<<"\nLicence no: ";
	cin>>l_no;
	n=strlen(l_no);
      }
    }
   void show()
   {
      cout<<"\nDetails of ";
      cout.write(name,20);
      cout<<"\nGender: "<<gender;
      cout<<"\nDate of birth: "<<d.date<<" ";puts(d.month);cout<<","<<d.year;
      cout<<"\nAddress: ";
      puts(add);
      cout<<"\nMobile no: ";puts(m_no);
      cout<<"\nAadhar no: ";puts(a_no);
      slicence(A);
   }
   void slicence(char A)
   {
      if(A=='Y')
      {
	cout<<"\nLicence no: ";
	for(int i=0;i<n;i++)
	{
	  cout<<*l_no;
	  l_no++;
	}
      }
   }
}ad;
class pancard
{
 dob d;
 public:
  char name[20],gender,add[40],pan_no[11],f_name[20],m_no[11];
   void enter()
   {
     cout<<"\nName: ";
      gets(name);
      cout<<"\nGender(M/F): ";
      cin>>gender;
      cout<<"\nDate of birth(D/M/Y) ";
      cout<<"\nDate: ";
      cin>>d.date;
      cout<<"\nMonth(in alphabets): ";
      gets(d.month);
      cout<<"\nYear: ";
      cin>>d.year;
      cout<<"\nAddress: ";
      gets(add);
      cout<<"\nMobile no: ";
      gets(m_no);
      cout<<"\nFather name: ";
      gets(f_name);
      cout<<"\nPan card number(sample:aaaaa9999a): ";
      gets(pan_no);
   }
   void show()
   {
      cout<<"\nDetails of ";cout.write(name,20);
      cout<<"\nGender: "<<gender;
      cout<<"\nDate of birth: "<<d.date<<" ";puts(d.month);cout<<","<<d.year;
      cout<<"\nAddress: ";puts(add);
      cout<<"\nMobile no: ";puts(m_no);
      cout<<"\nFather name: ";puts(f_name);
      cout<<"\nPan card number: ";puts(pan_no);
   }
}pn;
class bank:public aadhar
{
  randomize();
  public:
  int q,ac_no[12];
  char IFSC[12],b_name[20],x[11],y[13];
	 void initial()
	 {
	   for(q=0;q<12;q++)
	   {
	     ac_no[q]=random(9)+1;
	   }
	   strcpy(IFSC,"BOBV0542000");
	   strcpy(b_name,"BANK OF BESTIES");
	 }
	 void final()
	 {
	   cout<<"\nName of Bank: ";
	   puts(b_name);
	   cout<<"\nAccount number: ";
	   for( q=0;q<12;q++)
	   {
	   cout<<ac_no[q];
	   }
	   cout<<"\n\nIFSC: ";
	   puts(IFSC);
	 }
	 void info(char pan_no[],char a_no[])
	 {
	   strcpy(x,pan_no);
	   strcpy(y,a_no);
	 }
}ba;
void Advertisment();
void main()
{
   clrscr();
   int n,x,y=0,w,r,z=1,v,b=1,h;
   char ad_no[13],mo_no[12],mob_no[11];
   char *l_no=NULL,p_no[11];
   fstream ac("bankaccount.txt",ios::in|ios::out|ios::app);
   fstream a("aadhar.txt",ios::in|ios::out|ios::app);
   fstream p("pancard.txt",ios::in|ios::out|ios::app);
   cout<<"\n\n\n\n\n\n\n";
   cout<<"                        WELCOME TO RVHA LINKING PORTAL";
   cout<<"\n"<<"LOADING";
   for(int i=0;i<4;i++)
   {
    cout<<".";
    sleep(2);
   }
   sleep(2);
   clrscr();
   cout<<"\n\n\n\nEnter 1 if you are registered user for aadhar and pan card";
   cout<<"\n\nEnter 2 if you are new user for aadhar and pan card";
   cout<<"\n\nEnter 3 if you want to exit\n\n";
   cout<<"\n---------------------------------------------------------------\n";
   cin>>n;
   sleep(1);
   clrscr();
   if(n<3&&n>0)
   {
    cout<<"\n\n\n\nPLEASE WAIT WHILE WE ARE OPENING YOUR DESIRED PORTAL ";
    sleep(3);
    cout<<"\n\nHAVE A TOUR OF OUR PORTAL\n\n\n\n ";
    Advertisment();
    sleep(5);
   }
   clrscr();
   switch(n)
   {
   case 1:
	  cout<<"\n\nWELCOME BACK(From RVHA TEAM)";
	  sleep(3);
	  New:
	  ac.close();
	  a.close();
	  p.close();
	  a.open("aadhar.txt",ios::in|ios::out|ios::app);
	  ac.open("bankaccount.txt",ios::in|ios::out|ios::app);
	  p.open("pancard.txt",ios::in|ios::out|ios::app);
	  cout<<"\n\nEnter 1 if you want to edit your Aadhar card ";
	  cout<<"\n\nEnter 2 if you want to edit your pan card ";
	  cout<<"\n\nEnter 3 if you want to link your Aadhar card with driving licence number";
	  cout<<"\n\nEnter 4 if you want to link your Aadhar card  with PANcard";
	  cout<<"\n\nEnter 5 if you want to exit";
	  cout<<"\n\nEnter 6 if you want to leave it and continue ";
	  cout<<"\n---------------------------------------------------------------\n";
	  cin>>x;
	  clrscr();
	  switch(x)
	  {  case 1:cout<<"\n\nEnter your aadhar number: ";
		    gets(ad_no);
		    while(!a.eof())
		    {
		       a.read((char*)&ad,sizeof(ad));
		       if(strcmp(ad.a_no,ad_no)==0)
		       {
			 cout<<"\n Please edit";
			 a.seekg(-1*sizeof(ad),ios::cur);
			 ad.enter();
			 a.write((char*)&ad,sizeof(ad));
		       }
		     sleep(2);
		     clrscr();
		     cout<<"\nYour data has been updated ";
		     sleep(2);
		     clrscr();
		     goto New;
		    }
		    break;
	     case 2: cout<<"\n\nEnter your pan number: ";
		     gets(p_no);
		     while(!p.eof())
		     {  p.read((char*)&pn,sizeof(pn));
			if(strcmp(pn.pan_no,p_no)==0)
			{
			  cout<<"\n Please edit ";
			  p.seekg(-1*sizeof(pn),ios::cur);
			  pn.enter();
			  p.write((char*)&pn,sizeof(pn));
			}
			sleep(2);
			clrscr();
			cout<<"\nYour data has been updated ";
			sleep(2);
			 clrscr();
			 goto New;
		     }

		     break;
	     case 3: cout<<"\n\nEnter mobile number: ";
		     gets(mo_no);
		     while(!a.eof())
		     {
		      a.read((char*)&ad,sizeof(ad));
		      if(strcmp(ad.m_no,mo_no)==0)
		      {
		      A='Y';
		      ad.elicence(A);
		      a.write((char*)&ad,sizeof(ad));
		      }
		     }
		     sleep(2);
		     clrscr();
		     cout<<"\nYour data has been updated ";
		     sleep(2);
		     clrscr();
		     goto New;
		    break;
	     case 4:cout<<"\n\nEnter your mobile number: ";
		    gets(mo_no);
		    cout<<"\nEnter again for confirmation: ";
		    gets(mob_no);
	    New2:  while(!a.eof())
		    {
		      a.read((char*)&ad,sizeof(ad));
		      while(!p.eof())
		      {
			 p.read((char*)&pn,sizeof(pn));
			 if((strcmp(ad.m_no,mo_no)==0)&&(strcmp(pn.m_no,mob_no)==0));
			 {
			   strcpy (p_no,pn.pan_no);
			    strcpy(ad_no,ad.a_no);
			    ba.info(p_no,ad_no);
			    v=1;
			 }
		      }
		    }
		    if(z==v)
		    {
		      cout<<"\nLinking done\n\n ";
		      h=1;
		    }
		    else
		    {
		     cout<<"\nNo match found for your mobile number\n\n ";
		     goto New;
		    }
		    sleep(4);
		    clrscr();
		    break;
	     case 5: clrscr();
		     cout<<"\n\n\n\n\n                           ";
		     cout<<"THANKS FOR USING\n\n\n\n ";
		     sleep(5);
		     exit(0);
	     case 6: goto New1;
	     default:cout<<"\nWrong Digit Entered\n\n ";
		     goto New;
	  }
	  break;
   case 2:   cout<<"\nWELCOME\nEnter information for aadhar card\n\n ";
	     ad.enter();
	     a.write((char*)&ad,sizeof(ad));
	     sleep(2);
	     clrscr();
	     cout<<"\n\nEnter information for PAN card\n\n";
	     pn.enter();
	     p.write((char*)&pn,sizeof(pn));
	     sleep(2);
	     clrscr();
	     cout<<"\n\n\n\nYour aadhar card and pan card information saved ";
	     sleep(3);
	     clrscr();
	     goto New;
	     break;
   case 3:   cout<<"\n\n\n\n\n                                ";
	     cout<<"THANKS FOR USING\n\n\n\n\n";
	     sleep(5);
	     exit(0);
   default:  cout<<"\nNostalamayo\n\n";
   }
  New1:
       if(b==h)
       {
	cout<<"\n\nEnter 1 if you want to create bank account  ";
	cout<<"\n\nEnter 2 if you want to exit  ";
	cout<<"\n\nEnter 3 if you want to leave this and continue ";
	cout<<"\n---------------------------------------------------------------\n";
	cin>>y;
	sleep(2);
	clrscr();
	switch(y)
	{
	 case 1: cout<<"\n\n\n                         WELCOME TO BANK OF BESTIES\n";
		 ba.initial();
		 ba.final();
		 ac.write((char*)&ba,sizeof(ba));
		 sleep(6);
		 clrscr();
		 break;
	 case 2: cout<<"\n\n\n\n\n                          THANKS FOR USING";
		 sleep(5);
		 exit(0);
	 case 3: goto Look;
	}
       }
  ac.close();
  a.close();
  p.close();
  a.open("aadhar.txt",ios::in|ios::out);
  ac.open("bankaccount.txt",ios::in|ios::out);
  p.open("pancard.txt",ios::in|ios::out);
  Look:
  cout<<"\n\nEnter 1 if you want to have a look at your Aadhar card";
  cout<<"\n\nEnter 2 if you want to have a look at your Pan card";
  if(b==h)
  {
    if(y==1)
    cout<<"\n\nEnter 3 if you want to have a look at your Bank Account with your all documents";
  }
  cout<<"\n\nEnter 4 for exit ";
  cout<<"\n\nEnter 5 if you want to go to previous screen " ;
  cout<<"\n---------------------------------------------------------------\n";
  if(b!=h)
  {
  cout<<"\n\n\nif you want to see information of your bankaccount with aadhar card and pan card,so, you need to go previous screen ";
  cout<<"\n---------------------------------------------------------------\n";
  }
  cin>>w;
  sleep(2);
  clrscr();
  switch(w)
  {
    case 1: cout<<"\n\nEnter 1 if you want to see your Aadhar card through your mobile number ";
	    cout<<"\n\nEnter 2 if you want to see your Aadhar card through your licence number ";
	    cout<<"\n\nEnter 3 if you want to see your Aadhar card through Aadhar number ";
	    if(b==h)
	    {
	      if(y==1)
	      cout<<"\n\nEnter 4 if you want to see your Aadhar card through Pan number ";
	    }
	    cout<<"\n\nEnter 5 for exit ";
	    cout<<"\n\nEnter 6 if you want to go to previous screen " ;
	    cout<<"\n---------------------------------------------------------------\n";
	    cin>>r;
	    sleep(2);
	    clrscr();
	    switch(r)
	    {
	       case 1: Mo_no:
		       cout<<"\nEnter your mobile number: ";
		       gets(mo_no);
		       while(!a.eof())
		       {
			a.read((char*)&ad,sizeof(ad));
			if(strcmp(ad.m_no,mo_no)==0)
			{
			  ad.show();
			  sleep(5);
			  clrscr();
			  cout<<"\n\n\n\n\n";
			  cout<<"                                    THANKS FOR USING";
			  sleep(2);
			  exit(0);
			}
			else
			{
			  cout<<"\nWrong mobile number entered \n";
			  a.seekg(ios::beg);
			  int rl;
			  cout<<"\nEnter 1 to exit ";
			  cout<<"\nEnter 2 to enter again ";
			  cin>>rl;
			  if(rl==1)
			  {
			    cout<<"\n\n\n\n\n";
			    cout<<"                                    THANKS FOR USING";
			    sleep(2);
			    exit(0);
			  }
			  else if(rl==2)
			  goto Mo_no;
			}
		       }
		       sleep(4);
		       clrscr();
		       break;
	       case 2: L_no:
		       cout<<"\nEnter your licence number:  ";
		       cin>>l_no;
		       while(!a.eof())
		       {
			a.read((char*)&ad,sizeof(ad));
			if(ad.l_no==l_no)
			{
			  ad.show();
			  sleep(5);
			  clrscr();
			  cout<<"\n\n\n\n\n";
			  cout<<"                                    THANKS FOR USING";
			  sleep(2);
			  exit(0);
			}
			else
			{
			  cout<<"\nWrong licence number entered\n ";
			  a.seekg(ios::beg);
			  int rl;
			  cout<<"\nEnter 1 to exit ";
			  cout<<"\nEnter 2 to enter again ";
			  cin>>rl;
			  if(rl==1)
			  {
			    cout<<"\n\n\n\n\n";
			    cout<<"                                    THANKS FOR USING";
			    sleep(2);
			    exit(0);
			  }
			  else if(rl==2)
			  goto L_no;
			}
		       }
		       sleep(4);
		       clrscr();
		       break;
	       case 3: A_no:
		       cout<<"\nEnter your aadhar number:  ";
		       gets(ad_no);
		Ad:    while(!a.eof())
		       {
			a.read((char*)&ad,sizeof(ad));
			if(strcmp(ad.a_no,ad_no)==0)
			{
			  ad.show();
			  sleep(5);
			  clrscr();
			  cout<<"\n\n\n\n\n";
			  cout<<"                                    THANKS FOR USING";
			  sleep(3);
			  exit(0);
			}
			else
			{
			  cout<<"\nWrong aadhar number entered\n ";
			  a.seekg(ios::beg);
			  int rl;
			  cout<<"\nEnter 1 to exit ";
			  cout<<"\nEnter 2 to enter again ";
			  cin>>rl;
			  if(rl==1)
			  {
			    cout<<"\n\n\n\n\n";
			    cout<<"                                    THANKS FOR USING";
			    sleep(2);
			    exit(0);
			  }
			  else if(rl==2)
			  goto A_no;
			}
		       }
		       sleep(4);
		       clrscr();
		       break;
	       case 4: AP:
		       cout<<"\nEnter your Pan number:  ";
		       gets(p_no);
		       ac.seekg(ios::beg);
		       while(!ac.eof())
		       {
			 ac.read((char*)&ba,sizeof(ba));
			 if(strcmp(ba.x,p_no)==0)
			 {
			   strcpy(ad_no,ba.y);
			   goto Ad;
			 }
			 else
			 {
			   cout<<"\nWrong pan number entered \n ";
			   a.seekg(ios::beg);
			   int rl;
			  cout<<"\nEnter 1 to exit ";
			  cout<<"\nEnter 2 to enter again ";
			  cin>>rl;
			  if(rl==1)
			  {
			    cout<<"\n\n\n\n\n";
			    cout<<"                                    THANKS FOR USING";
			    sleep(2);
			    exit(0);
			  }
			  else if(rl==2)
			   goto AP;
			 }
		       }
		       sleep(4);
		       clrscr();
		       break;
	       case 5: cout<<"\n\n\n\n\n                          THANKS FOR USING";
		       sleep(5);
		       exit(0);
	       case 6: goto Look;
	    }
	    break;

    case 2: cout<<"\n\nEnter 1 if you want to see your Pan card through your mobile number ";
	    cout<<"\n\nEnter 2 if you want to see your Pan card through Pan number ";
	    if(b==h)
	    {
	      if(y==1)
	      cout<<"\n\nEnter 3 if you want to see your Pan card through Aadhar number ";
	    }
	    cout<<"\n\nEnter 4 for exit ";
	    cout<<"\n\nEnter 5 if you want to go to previous screen ";
	    cout<<"\n---------------------------------------------------------------\n";
	    cin>>r;
	    sleep(2);
	    clrscr();
	    switch(r)
	    {
	      case 1: Mob_no:
		      cout<<"\nEnter your mobile number: ";
		      gets(mob_no);
		      while(!p.eof())
		      {
		       p.read((char*)&pn,sizeof(pn));
		       if(strcmp(pn.m_no,mob_no)==0)
		       {
			  pn.show();
			  sleep(5);
			  clrscr();
			  cout<<"\n\n\n\n\n";
			  cout<<"                                    THANKS FOR USING";
			  sleep(2);
			  exit(0);
		       }
		       else
		       {
			 cout<<"\nWrong mobile number entered\n ";
			 p.seekg(ios::beg);
			 int rl;
			  cout<<"\nEnter 1 to exit ";
			  cout<<"\nEnter 2 to enter again ";
			  cin>>rl;
			  if(rl==1)
			  {
			    cout<<"\n\n\n\n\n";
			    cout<<"                                    THANKS FOR USING";
			    sleep(2);
			    exit(0);
			  }
			  else if(rl==2)
			 goto Mob_no;
		       }
		      }
		      sleep(4);
		      clrscr();
		      break;
	      case 2: P_no:
		      cout<<"\nEnter your pan number: ";
		      gets(p_no);
		 Pan: while(!p.eof())
		      {
		       p.read((char*)&pn,sizeof(pn));
		       if(strcmp(pn.pan_no,p_no)==0)
		       {
			 pn.show();
			 sleep(5);
			 clrscr();
			 cout<<"\n\n\n\n\n";
			 cout<<"                                    THANKS FOR USING";
			 sleep(2);
			 exit(0);
		       }
		       else
		       {
			 cout<<"\nWrong Pan number entered\n ";
			 p.seekg(ios::beg);
			 int rl;
			  cout<<"\nEnter 1 to exit ";
			  cout<<"\nEnter 2 to enter again ";
			  cin>>rl;
			  if(rl==1)
			  {
			    cout<<"\n\n\n\n\n";
			    cout<<"                                    THANKS FOR USING";
			    sleep(2);
			    exit(0);
			  }
			  else if(rl==2)
			 goto P_no;
		       }
		      }
		      sleep(4);
		      clrscr();
		      break;
	      case 3: PA:
		      cout<<"\nEnter your Aadhar number: ";
		      gets(ad_no);
		      ac.seekg(ios::beg);
		      while(!ac.eof())
		      {
			ac.read((char*)&ba,sizeof(ba));
			if(strcmp(ba.y,ad_no)==0)
			{
			  strcpy(p_no,ba.x);
			  goto Pan;
			}
			else
			{
			  cout<<"\nYou Enter wrong aadhar number\n ";
			  p.seekg(ios::beg);
			  int rl;
			  cout<<"\nEnter 1 to exit ";
			  cout<<"\nEnter 2 to enter again ";
			  cin>>rl;
			  if(rl==1)
			  {
			    cout<<"\n\n\n\n\n";
			    cout<<"                                    THANKS FOR USING";
			    sleep(2);
			    exit(0);
			  }
			  else if(rl==2)
			  goto PA;
			}
		      }
		      sleep(4);
		      clrscr();
		     break;
	     case 4: cout<<"\n\n\n\n\n                          THANKS FOR USING";
		     sleep(5);
		     exit(0);
	     case 5: goto Look;
	    }
	    break;
   case 3: AB:
	   cout<<"\nEnter your Aadhar number: ";
	   gets(ad_no);
	   clrscr();
	   ac.seekg(ios::beg);
	   while(!ac.eof())
	   {
	     ac.read((char*)&ba,sizeof(ba));
	     if(strcmpi(ba.y,ad_no)==0)
	     {
		 cout<<"\n\nYour Aadhar Details are\n ";
		 a.seekg(ios::beg);
		 while(!a.eof())
		 {
		    a.read((char*)&ad,sizeof(ad));
		    if(strcmp(ad.a_no,ad_no)==0)
		    {
		       ad.show();
		       break;
		    }
		 }
	       sleep(6);
	       clrscr();
	       strcpy(p_no,ba.x);
	       cout<<"\n\nYour Pan card Details are\n ";
	       p.seekg(ios::beg);
	       while(!p.eof())
	       {
		  p.read((char*)&pn,sizeof(pn));
		  if(strcmp(pn.pan_no,p_no)==0)
		   {
		     pn.show();
		     sleep(5);
		     clrscr();
		     cout<<"\n\n\n\n\n";
		     cout<<"                                    THANKS FOR USING";
		     sleep(3);
		     exit(0);
		   }
	       }
	       sleep(6);
	       clrscr();
	       getch();
	       ba.final();
	     }
	     else
	     {
		cout<<"\nYou entered wrong aadhar number\n ";
		int rl;
		cout<<"\nEnter 1 to exit ";
		cout<<"\nEnter 2 to enter again ";
		cin>>rl;
		if(rl==1)
		{
		cout<<"\n\n\n\n\n";
		cout<<"                                    THANKS FOR USING";
		sleep(2);
		exit(0);
		}
		else if(rl==2)
		goto AB;
	     }
	   }
	   sleep(4);
	   clrscr();
	   break;
    case 4: cout<<setw(50)<<"\n\n\n\n\n";
	    cout<<"                                   THANKS FOR USING\n\n\n\n";
	    sleep(5);
	    exit(0);
    case 5: goto New ;
  }
  ac.close();
  a.close();
  p.close();
  cout<<"\n\n\n\n\n";
  cout<<"                                    THANKS FOR USING";
  sleep(3);
  getch();
}
void Advertisment()
{
   randomize();
   int aj=random(5);
   switch(aj)
   {
    case 0:cout<<"\t\t\t\t\t\"Road safety should be a priority,\n";
	   cout<<"\t\t\t\t\tas someone is waiting\n"
	       <<"\t\t\t\t\tfor you at your home\"";
	   break;
    case 1:cout<<"\t\t\t\t\t\"Always cross railway stops\n"
	       <<"\t\t\t\t\t\tcarefully\n";
	   cout<<"\t\t\t\t\t\t-IRCTC\"";
	   break;
    case 2:cout<<"\t\t\t\t\t\"Lets make india\n"
	       <<"\t\t\t\t\ta beautiful place to live,\n";
	   cout<<"\t\t\t\t\tsupport clean india campaign\n";
	   cout<<"\t\t\t\t*****swatch bharat swasth bharat*****\"";
	   break;
    case 3:cout<<"\t\t\t\t\t\t\t\"GST:GOOD AND SIMPLE TAX\n";
	   cout<<"\t\t\t\t\t\tBE A GOOD CITIZEN AND FILE\n"
	       <<"\t\t\t\t\t\t\tGST BY 31 MARCH\"";
	   break;
    case 4:cout<<"\t\t\t\t\t\t\"RVHA FORMS ARE\n";
	   cout<<"\t\t\t\t\t\tAVAILABLE BY NEXT\n";
	   cout<<"\t\t\t\t\t\tMONTHS ENROLL FAST\"";
	   break;
    case 5:cout<<"\t\t\t\t\t\t\"Worrying about the future\n"
	       <<"\t\t\t\t\t\tof your kid,let take\n"
	       <<"\t\t\t\t\t\tthese worry of yours by DVM\n"
	       <<"\t\t\t\t\t\t-a trusted institution\"";
	   break;
}
}