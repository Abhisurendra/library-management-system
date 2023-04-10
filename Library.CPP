#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<dos.h>
void frame()
{ int i,j;
  for(i=3,j=1;i<78;i++,j++)
  {
    gotoxy(i,2);
    cout<<char(205);
    sound(j*10);
    delay(10);
    nosound();
  }
  nosound();
  for(i=3;i<47;i++,j++)
  {
    gotoxy(77,i);
    cout<<char(205);
    sound(j*20);
    delay(10);
    nosound();
  }
  nosound();
  for(i=77;i>2;i--,j--)
  {
    gotoxy(i,47);
    cout<<char(205);
    sound(j*20);
    delay(10);
    nosound();
  }
  nosound();
    for(i=46;i>2;i--,j--)
    { gotoxy(3,i);
      cout<<char(205);
      sound(j*10);
      delay(10);
      nosound();
    }
  nosound();
}

class student{int roll;
	      float ad,fine;
	      char names[30], address[100],b,finet[50],cs[5];
	      public:
		student()
		  {roll=0;
		   ad=0; fine=0;
		   strcpy(names,NULL);strcpy(address,NULL);b='A';
		   strcpy(finet,"NILL");strcpy(cs,NULL);
		  }
		void saccept()
		  {gotoxy(25,15);
		   cout<<"Enter the roll no";
		   cin>>roll;
		   gotoxy(25,17);
		   cout<<"Enter the admission no of student";
		   cin>>ad;
		   gotoxy(25,19);
		   cout<<"Enter the name of student";
		   cin>>names;
		   gotoxy(25,21);
		   cout<<"Enter the class of student";
		   cin>>cs;
		   gotoxy(25,23);
		   cout<<"Enter the address";
		   cin>>address;
		  }
	       void sdisplay()
		  {clrscr();
		   frame();
		   gotoxy(25,15);
		   cout<<"Roll no"<<":-";
		   gotoxy(55,15);
		   cout<<roll;
		   gotoxy(25,17);
		   cout<<"Admission No"<<":-";
		   gotoxy(55,17);
		   cout<<ad;
		   gotoxy(25,19);
		   cout<<"Name"<<":-";
		   gotoxy(55,19);
		   cout<<names;
		   gotoxy(25,21);
		   cout<<"Class"<<":-";
		   gotoxy(55,21);
		   cout<<cs;
		   gotoxy(25,23);
		   cout<<"Address"<<":-";
		   gotoxy(55,23);
		   cout<<address;
		   gotoxy(25,25);
		   cout<<"Behaviour of student"<<":-";
		   gotoxy(55,25);
		   cout<<b;
		   gotoxy(25,27);
		   cout<<"Fine"<<":-";
		   gotoxy(55,27);
		   cout<<fine;
		   gotoxy(25,29);
		   cout<<"Type of fine"<<":-";
		   gotoxy(55,29);
		   cout<<finet;
		   gotoxy(40,40);
		   cout<<"Press any key... ";
		   getch();
		  }
	       void modify(float f)
		  {clrscr();
		   frame();
		     if(f==ad)
		       {gotoxy(25,15);
			cout<<"Enter roll no";
			cin>>roll;
			gotoxy(25,17);
			cout<<"Enter the name";
			cin>>names;
			gotoxy(25,19);
			cout<<"Enter the Class";
			cin>>cs;
			gotoxy(25,21);
			cout<<"Enter the address";
			cin>>address;
			gotoxy(25,23);
			cout<<"Enter the fine";
			cin>>fine;
			gotoxy(25,25);
			cout<<"Enter the behaviour(Grade A-F)";
			cin>>b;
			gotoxy(25,27);
			cout<<"Enter the type of fine";
			cin>>finet;
		      }}
	       float returnad()
	       {return ad;
	       }
	       float returnf()
	       {return fine;
	       }
	       int fineany(float ad1)
		{clrscr();
		 frame();
		 if(ad==ad1)
		   {char be;
		    gotoxy(25,15);
		    cout<<"Enter the type of fine";
		    cin>>finet;
		    gotoxy(25,17);
		    cout<<"Enter the fine";
		    cin>>fine;
		    gotoxy(25,19);
		    cout<<"Do you want to change the grade of behaviour Y/N";
		    cin>>be;
		    gotoxy(25,21);
		    if(toupper(be)=='Y')
		     {gotoxy(25,23);
		      cout<<"Behaviour Grade";
		      cin>>b;
		      }
		    return 1;
		    }
		  else
		   {gotoxy(25,40);
		    cout<<"The given admission no is not found";
	       }   }
	   };
class library{int accno,admno;
	      char author[20],title[20],pub[20],issue;
	      float price;
	      public:
		void accept()
		{clrscr();
		 frame();
		 gotoxy(25,15);
		 cout<<"Enter the access no";
		 cin>>accno;
		 gotoxy(25,17);
		 cout<<"Enter the title";
		 cin>>title;
		 gotoxy(25,19);
		 cout<<"Enter the author";
		 cin>>author;
		 gotoxy(25,21);
		 cout<<"Enter the publisher";
		 cin>>pub;
		 gotoxy(25,23);
		 cout<<"Enter the price";
		 cin>>price;
		 admno=0;
		 issue='N';
		 }
		void display()
		 {clrscr();
		  frame();
		  gotoxy(25,15);
		  cout<<"Access no "<<":-";
		  gotoxy(55,15);
		  cout<<accno;
		  gotoxy(25,17);
		  cout<<"Title "<<":-";
		  gotoxy(55,17);
		  cout<<title;
		  gotoxy(25,19);
		  cout<<"Author "<<":-";
		  gotoxy(55,19);
		  cout<<author;
		  gotoxy(25,21);
		  cout<<"Publications "<<":-";
		  gotoxy(55,21);
		  cout<<pub;
		  gotoxy(25,23);
		  cout<<"Price "<<":-";
		  gotoxy(55,23);
		  cout<<price;
		  gotoxy(25,25);
		  cout<<"Issue status "<<":-";
		  gotoxy(55,25);
		  cout<<issue;
		  if(issue=='Y')
		   {gotoxy(25,27);
		    cout<<"Issued to Admission No "<<":-";
		    gotoxy(55,27);
		    cout<<admno;
		 }
		 gotoxy(40,40);
		 cout<<"Press any key...";
		 getch();
		 }
		 void modifyl(float fl)
		 {clrscr();
		  frame();
		  if(fl==accno)
		 {gotoxy(25,15);
		  cout<<"Enter the title";
		  cin>>title;
		  gotoxy(25,17);
		  cout<<"Enter the author";
		  cin>>author;
		  gotoxy(25,19);
		  cout<<"Enter the publication";
		  cin>>pub;
		  gotoxy(25,21);
		  cout<<"Enter the price";
		  cin>>price;
		  }}
		 int returnac()
		 {return accno;
		 }
		 void issue1()
		  {clrscr();
		   if(issue=='Y'||issue=='y')
		    {gotoxy(25,15);
		     cout<<"Book is already issued";
		    }
		   else
		     {frame();
		      gotoxy(25,15);
		      cout<<"Enter the admission no";
		      cin>>admno;
		      issue='Y';
		      gotoxy(25,17);
		      cout<<"Book is issued"<<'\n';
		      delay(1000);
		      }
		   }
		   void returnb()
		    {frame();
		     admno=0;
		     issue='N';
		     gotoxy(25,19);
		     cout<<"Book is returned"<<endl;
		     delay(1000);
		     }
		   };
void main()
{clrscr();
 fstream obj, sobj,t1obj,tobj;
 library l;
 student st;
 int ch,acc,r=0,c=0;
 char z,x;
 float adm;
 char chmain;
textmode(C40);
textcolor(5);

gotoxy(17,11);
char y1[]="Loading...";
cputs(y1);
char y2='-';
textcolor(12);


for(int i=0;i<3;i++)
{
 for(int j=17;j<28;j++)
 {
  gotoxy(j,14);
  clreol();
  putch(y2);
  delay(200);
  }
  clreol();
  delay(250);
 }
 textcolor(4);

 char Z[]="       WELCOME TO";
 char z1[]="ST.MARY'S INTER COLLEGE";
 for(i=1;i<12;i++)
 {
 clrscr();
 gotoxy(10,i);
 cputs(Z);
 gotoxy(10,i+1);
 cputs(z1);
 sound(i*50);
 delay(150);
 }
 nosound();
 for(i=4;i<39;i+=2)
 {
  gotoxy(i,17);
  cout<<char(2);
 }
 for(i=1;i<200;i=i+10)
 {
  sound(i*20);
  delay(175);

  nosound();
  }
  nosound();

	 do{  main:
    textmode(3);
    textmode(C4350);
    textbackground(BLACK);
    textcolor(GREEN);
    frame();
	 gotoxy(5,3);
	    cout<<"   *****************   ST MARY'S INTER COLLEGE   ******************";
	    gotoxy(20,10);
	    cout<<"****  WELCOME TO THE PROJECT OF C++  ****";
	    gotoxy(22,15);
	    cout<<" ON SCHOOL LIBRARY MANAGEMENT SYSTEM";
	    gotoxy(10,25);
	    cout<<"UNDER THE GUIDANCE OF-" ;
	    gotoxy(10,28);
	    cout<<   "MR ANIL KUMAR" ;
	    gotoxy(50,25);
	    cout<<"SUBMITTED BY-";
	    gotoxy(50,28);
	    cout<<"YATHARTHA RANA"<<endl;
	    gotoxy(22,35);
	    cout<<"WELCOME TO LIBRARY MANAGEMENT SYSTEM"<<endl;
	    delay(11000);

	     clrscr();
	    }while(0);

 do{clrscr();
    frame();
    gotoxy(30,4);
    cout<<"MAIN MENU"<<endl;
    delay(2000);
    gotoxy(25,8);
    cout<<"1-Add Student Records"<<endl;
    gotoxy(25,10);
    cout<<"2-Modify Student Records"<<endl;
    gotoxy(25,12);
    cout<<"3-Delete Student Records"<<endl;
    gotoxy(25,14);
    cout<<"4-Display single detail of student"<<endl;
    gotoxy(25,16);
    cout<<"5-Display all details of student"<<endl;
    gotoxy(25,18);
    cout<<"6-Add Library Records"<<endl;
    gotoxy(25,20);
    cout<<"7-Issue a Book"<<endl;
    gotoxy(25,22);
    cout<<"8-Return a Book"<<endl;
    gotoxy(25,24);
    cout<<"9-Display all details of library"<<endl;
    gotoxy(25,26);
    cout<<"10-Display single detail of library"<<endl;
    gotoxy(25,28);
    cout<<"11-Fine the student"<<endl;
    gotoxy(25,30);
    cout<<"12-Modify library records"<<endl;
    gotoxy(25,32);
    cout<<"13-Delete library records"<<endl;
    gotoxy(25,34);
    cout<<"14-Students having fine"<<endl;
    gotoxy(25,36);
    cout<<"15-Exit"<<endl;
    gotoxy(25,40);
    delay(1000);
    cout<<"Enter your choice";
    cin>>ch;
    clrscr();
    //textmode(MONO);
    switch (ch)
    {case 1:
	frame();
	sobj.open("stud.dat",ios::binary|ios::app);
	st.saccept();
	sobj.write((char*)&st,sizeof(st));
	sobj.close();
	break;
     case 2:
	frame();
	sobj.open("stud.dat",ios::binary|ios::in|ios::out);
	gotoxy(25,15);
	cout<<"Enter the admission no";
	cin>>adm;
	r=0;
	while(!sobj.eof())
	  {sobj.read((char*)&st,sizeof(st));
	     if(sobj.eof())
	       break;
	     r++;
	     if(adm==st.returnad())
		 { st.modify(adm);
		  sobj.seekp((r-1)*sizeof(st),ios::beg);
		  sobj.write((char*)&st,sizeof(st));
		  c=1;
		  break;
		  }}
	     if(c==0)
	       {gotoxy(25,40);
		cout<<"The admission no is not found"<<endl;
		}
	       sobj.close();
	       break;
     case 3:
	frame();
	sobj.open("stud.dat",ios::binary|ios::in);
	t1obj.open("temp1.dat",ios::binary|ios::out);
	gotoxy(25,15);
	cout<<"Enter the admission no of student";
	cin>>adm;
	r=0;
	  while(!sobj.eof())
	    {sobj.read((char*)&st,sizeof(st));
	     if(sobj.eof())
	       break;
	     if(adm==st.returnad())
		 r=1;
	     else
	       t1obj.write((char*)&st,sizeof(st));
	     }
	t1obj.close();
	sobj.close();
	remove("stud.dat");
	rename("temp1.dat","stud.dat");
	if(r==0)
	  {gotoxy(25,40);
	   cout<<"The record is not found"<<endl;
	   }
	else
	  {gotoxy(25,40);
	   cout<<"The record is deleted"<<endl;
	   }
	  break;
     case 4:
	clrscr();
	frame();
	sobj.open("stud.dat",ios::binary|ios::in);
	gotoxy(25,15);
	cout<<"Enter the Admission no";
	cin>>adm;
	while(!sobj.eof())
	   {sobj.read((char*)&st,sizeof(st));
	    if(adm==st.returnad())
	      {st.sdisplay();
	       r=1;
	       break;
	       }
	   }
	if(r==0)
	  {frame();
	   gotoxy(25,40);
	   cout<<"The given student is not found"<<endl;
	  }
	  sobj.close();
	  break;
     case 5:
	frame();
	sobj.open("stud.dat",ios::binary|ios::in);
	while(!sobj.eof())
	  {sobj.read((char*)&st,sizeof(st));
	    if(sobj.eof())
	       break;
	    st.sdisplay();
	   }
	sobj.close();
	break;
     case 6:
	frame();
	obj.open("lib.dat",ios::binary|ios::app);
	l.accept();
	obj.write((char*)&l,sizeof(l));
	obj.close();
	break;
     case 7:
	frame();
	obj.open("lib.dat",ios::binary|ios::in|ios::out);
	c=0;
	gotoxy(25,15);
	cout<<"Enter the Access no";
	cin>>acc;
	while(!obj.eof())
	  {obj.read((char*)&l,sizeof(l));
	   c++;
	   r=l.returnac();
	   if(r==acc)
	     {l.issue1();
	      obj.seekp((c-1)*sizeof(l),ios::beg);
	      obj.write((char*)&l,sizeof(l));
	      gotoxy(25,40);
	      cout<<"The book is Issued";
	      break;
	     }
	  }
	if(r!=acc)
	  {frame();
	   gotoxy(25,40);
	   cout<<"The given book is not found"<<endl;
	  }
	obj.close();
	break;
     case 8:
	frame();
	obj.open("lib.dat",ios::binary|ios::in|ios::out);
	gotoxy(25,15);
	cout<<"Enter the Access no";
	cin>>acc;
	c=0;
	while(!obj.eof())
	  {obj.read((char*)&l,sizeof(l));
	   c++;
	   r=l.returnac();
	   if(r==acc)
	      {l.returnb();
	       obj.seekp((c-1)*sizeof(l),ios::beg);
	       obj.write((char*)&l,sizeof(l));
	       gotoxy(25,40);
	       cout<<"The book is returned";
	       break;
	       }
	  }
	if(r!=acc)
	  {gotoxy(25,40);
	   cout<<"The given book is not found"<<endl;
	   }
	obj.close();
	break;
     case 9:
	frame();
	obj.open("lib.dat",ios::binary|ios::in);
	while(!obj.eof())
	  {obj.read((char*)&l,sizeof(l));
	     if(obj.eof())
		 break;
	l.display();
	  }
	obj.close();
	break;
     case 10:
	frame();
	obj.open("lib.dat",ios::binary|ios::in);
	gotoxy(25,12);
	cout<<"Enter the Access no";
	cin>>acc;
	while(!obj.eof())
	  {obj.read((char*)&l,sizeof(l));
	   r=l.returnac();
	   if(r==acc)
	     {l.display();
	      break;
	     }
	  }
	if(r!=acc)
	  {frame();
	   gotoxy(25,40);
	   cout<<"The given book is not found"<<endl;
	  }
	obj.close();
	break;
     case 11:
	frame();
	sobj.open("stud.dat",ios::binary|ios::in|ios::out);
	gotoxy(25,15);
	cout<<"Enter the admission no";
	cin>>adm;
	c=0;
	while(!sobj.eof())
	  {sobj.read((char*)&st,sizeof(st));
	   r=st.fineany(adm);
	   c++;
	   if(r==1)
	     {sobj.seekp((c-1)*sizeof(st),ios::beg);
	      sobj.write((char*)&st,sizeof(st));
	      break;
	      }
	  }
	if(r==0)
	   {gotoxy(25,40);
	    cout<<"The given admission no is not found"<<endl;
	    }
	sobj.close();
	break;
     case 12:
	frame();
	obj.open("lib.dat",ios::binary|ios::in|ios::out);
	gotoxy(25,15);
	cout<<"Enter the access no";
	cin>>acc;
	c=0;
	r=0;
	while(!obj.eof())
	  {obj.read((char*)&l,sizeof(l));
	   if(sobj.eof())
	   break;
	   c++;
	   if(acc==l.returnac())
	      {l.modifyl(acc);
	       obj.seekp((c-1)*sizeof(l),ios::beg);
	       obj.write((char*)&l,sizeof(l));
	       r=1;
	       break;
	       }
	   }
	if(r==0)
	  {gotoxy(25,40);
	   cout<<"The access no is not found"<<endl;
	  }
	obj.close();
	break;
     case 13:
	frame();
	obj.open("lib.dat",ios::binary|ios::in);
	tobj.open("temp.dat",ios::binary|ios::out);
	gotoxy(25,15);
	cout<<"Enter the access no";
	cin>>acc;
	r=0;
	while(!obj.eof())
	  {obj.read((char*)&l,sizeof(l));
	   if(obj.eof())
	   break;
	   if(acc==l.returnac())
	      r=1;
	   else
	      tobj.write((char*)&l,sizeof(l));
	  }
	tobj.close();
	obj.close();
	remove("lib.dat");
	rename("temp.dat","lib.dat");
	if(r==0)
	  {gotoxy(25,40);
	   cout<<"The record is not found"<<endl;
	   }
	else
	  {gotoxy(25,40);
	   cout<<"The record is deleted"<<endl;
	   }
	break;
     case 14:
	frame();
	sobj.open("stud.dat",ios::binary|ios::in);
	while(!sobj.eof())
	   {clrscr();
	    sobj.read((char*)&st,sizeof(st));
	    float fn=st.returnf();
	    if(obj.eof())
	       break;
	    if(fn>0)
	       st.sdisplay();
	    else
	       {gotoxy(25,15);
		cout<<"No students with fine";
	       }
	    gotoxy(40,40);
	    cout<<"Press any key...";
	    getch();
	    }
	sobj.close();
	break;
     case 15:
	exit(0);
     default:
	{frame();
	 gotoxy(25,20);
	 cout<<"Wrong choice"<<endl;
	 }
   }
 }while(1);
}
