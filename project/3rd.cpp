#include<cstring>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<mmsystem.h>
using namespace std;
class Input
{
protected:
    char sr[50];  //sr for search
public:
    void input()
    {
        fflush(stdin);
        cout<<"\t\t\t\t\t    ##########################################\n";
        cout<<"\t\t\t\t\t    ##  Press any key to start searching    ##\n    ";
        cout<<"\t\t\t\t\t    ##########################################\n";
        PlaySound(TEXT("pressentertosetcursorposition.wav"),NULL,SND_SYNC);
        getche();
        system("cls");
        formating1();
        cout<<"\t\t\t\t\t    ###########################################################################################\n";
        cout<<"\t\t\t\t\t    #";
        cout<<"\t\t\t\t\t                                                      #\n";
        cout<<"\t\t\t\t\t    ###########################################################################################\n";
        COORD e;
        e.X=45;
        e.Y=18;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),e);
        cin.getline(sr,51);
        e.X=50;
        e.Y=20;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),e);
        for(int i=0;i<50 && sr[i]!='\n';i++)
        {
            sr[i]=tolower(sr[i]);
        }

        ofstream history("history.txt",ios::app);
        history<<"-->";

        for(int i=0;i<50 && sr[i]!='\0';i++)
        {
            history<<sr[i];
        }

        history<<endl;

        history.close();

    }

    int again()
    {
        CA:
            fflush(stdin);
        cout<<endl<<endl;
        char c;
        cout<<"\n \t\t\t\t\t    1.Search  \n \t\t\t\t\t    2.Check History \n \t\t\t\t\t    3.Clear History \n \t\t\t\t\t    4.End \n\t\t\t\t\t    "<<endl;
        cin>>c;
        if((c=='1') || (c=='2') || (c=='3') || (c=='4'))
        {
            return c;
        }
        else
        {
            cout<<"Enter valid choice."<<endl;
            goto CA;
        }
    }
    void check_history();
    void clear_history();
    void formating1();
    void formating();

};
void Input::formating1()
{
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t        ####  ##      ##        ##        ## ####     ##    ##    ######        ##        ########	   "<<endl;
    cout<<"\t\t\t\t\t      ##      ##      ##      ##  ##      ##    ##    ##    ##   ##           ##  ##         ##       "<<endl;
    cout<<"\t\t\t\t\t     ##       ## #### ##     ##    ##     ## ####     ##    ##    #####      ##    ##        ##       "<<endl;
    cout<<"\t\t\t\t\t      ##      ##      ##    ##  ##  ##    ##    ##    ##    ##        ##    ##  ##  ##       ##       "<<endl;
    cout<<"\t\t\t\t\t       ####   ##      ##   ##        ##   ##     ##     ####     ######    ##        ##      ##       "<<endl;
    cout<<endl<<endl;
    cout<<"\t\t\t\t     ####  #####      #      ######  ######  #    #          ######  #     #  #########  #######  #     #  ######"<<endl;
    cout<<"\t\t\t\t     #     #         # #     #    #  #       #    #          #       # #   #  #             #     # #   #  #"<<endl;
    cout<<"\t\t\t\t     ####  #####    #####    ######  #       ######          ######  #  #  #  #  ######     #     #  #  #  ######"<<endl;
    cout<<"\t\t\t\t        #  #       #     #   # #     #       #    #          #       #   # #  #   # #       #     #   # #  #"<<endl;
    cout<<"\t\t\t\t     ####  #####  #       #  #  ###  ######  #    #          ######  #     #  #####   #  #######  #     #  ######"<<endl;
    cout<<"\t\t\t\t    -------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"\t\t\t\t    -------------------------------------------------------------------------------------------------------------"<<endl;
}
void Input::formating()
{
    cout<<endl<<endl;
    Sleep(300);
    cout<<"\t\t\t\t\t        ####  ##      ##        ##        ## ####     ##    ##    ######        ##        ########	   "<<endl;
    Sleep(600);
    cout<<"\t\t\t\t\t      ##      ##      ##      ##  ##      ##    ##    ##    ##   ##           ##  ##         ##       "<<endl;
    Sleep(600);
    cout<<"\t\t\t\t\t     ##       ## #### ##     ##    ##     ## ####     ##    ##    #####      ##    ##        ##       "<<endl;
    Sleep(600);
    cout<<"\t\t\t\t\t      ##      ##      ##    ##  ##  ##    ##    ##    ##    ##        ##    ##  ##  ##       ##       "<<endl;
    Sleep(600);
    cout<<"\t\t\t\t\t       ####   ##      ##   ##        ##   ##     ##     ####     ######    ##        ##      ##       "<<endl;
    Sleep(600);
    cout<<endl<<endl;
    Sleep(600);
    cout<<"\t\t\t\t     ####  #####      #      ######  ######  #    #          ######  #     #  #########  #######  #     #  ######"<<endl;
    Sleep(600);
    cout<<"\t\t\t\t     #     #         # #     #    #  #       #    #          #       # #   #  #             #     # #   #  #"<<endl;
    Sleep(600);
    cout<<"\t\t\t\t     ####  #####    #####    ######  #       ######          ######  #  #  #  #  ######     #     #  #  #  ######"<<endl;
    Sleep(600);
    cout<<"\t\t\t\t        #  #       #     #   # #     #       #    #          #       #   # #  #   # #       #     #   # #  #"<<endl;
    Sleep(600);
    cout<<"\t\t\t\t     ####  #####  #       #  #  ###  ######  #    #          ######  #     #  #####   #  #######  #     #  ######"<<endl;
    Sleep(600);
    cout<<"\t\t\t\t    -------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"\t\t\t\t    -------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"\t\t\t\t                                                                                             -SPONSERED BY GOOGLE"<<endl;
}

void Input::check_history()
{
    ifstream history("history.txt");
        char c;
         PlaySound(TEXT("displayed.wav"),NULL,SND_SYNC);
        history.get(c);
        while(!(history.eof()))
        {
            history.get(c);
            cout<<c;
        }
    history.close();
}


void Input::clear_history()
{
    ofstream history("history.txt");
     PlaySound(TEXT("cleared.wav"),NULL,SND_SYNC);
    history.close();
}

class Search:public Input       //class search for open file
{
    public:

        void Find();
        ~Search()
        {
            PlaySound(TEXT("thank.wav"),NULL,SND_SYNC);
            cout<<endl<<endl;
            cout<<"\n\t\t\t\t\t\t thanks for  visit"<<endl<<endl;
            getche();
        }

};
void Search::Find()
{
    int a;
    ifstream file;


    if(strstr(sr,"campus") || strstr(sr,"gate"))
    {
        file.open("campus.txt");
    }
    else if(strstr(sr,"faculty")||strstr(sr,"professor")||strstr(sr,"faculties"))
    {
        file.open("faculty.txt");
    }
    else if(strstr(sr,"fee"))
    {
        file.open("fee.txt");
    }
    else if(strstr(sr,"hostel") || strstr(sr,"girl"))
    {
        file.open("hostel.txt");
    }
    else if(strstr(sr,"ground"))
    {
        file.open("ground.txt");
    }
    else if(strstr(sr,"event")|| strstr(sr,"workshop") || strstr(sr,"spoural") || strstr(sr,"cognizance"))
    {
        file.open("event.txt");
    }
    else if(strstr(sr,"transport")|| strstr(sr,"bus") )
    {
        file.open("transport.txt");
    }
    else if(strstr(sr,"sport"))
    {
        file.open("sport.txt");
    }
    else if(strstr(sr,"stationary") || strstr(sr,"stationaries"))
    {
        file.open("stationary,txt");
    }
    else if(strstr(sr,"egovernance"))
    {
        file.open("egovernance.txt");
    }
    else if(strstr(sr,"library") || strstr(sr,"libraries"))
    {
        file.open("library.txt");
    }
    else if(strstr(sr,"branch") || strstr(sr,"field"))
    {
        file.open("branch.txt");
    }
    else if(strstr(sr,"bank") || strstr(sr,"atm") || strstr(sr,"postoffice"))
    {
        file.open("bank.txt");
    }
    else if(strstr(sr,"academic") || strstr(sr,"education") ||  strstr(sr,"semester") )
    {
        file.open("academic.txt");
    }
    else if(strstr(sr,"student") || strstr(sr,"boy"))
    {
        file.open("student.txt");
    }
    else if(strstr(sr,"canteen") || strstr(sr,"cafeteria") || strstr(sr,"cafe"))
    {
        file.open("canteen.txt");
    }
    else if(strstr(sr,"career") || strstr(sr,"development"))
    {
        file.open("career.txt");
    }
    else if(strstr(sr,"credit") || strstr(sr,"grade") ||  strstr(sr,"result"))
    {
        file.open("credit.txt");
    }
    else if(strstr(sr,"egovernance"))
    {
        file.open("egovernance.txt");
    }
    else if(strstr(sr,"department") || strstr(sr,"building") || strstr(sr,"admin"))
    {
        file.open("department.txt");
    }
    else if(strstr(sr,"lab") || strstr(sr,"laboratory"))
    {
        file.open("lab.txt");
    }
    else if(strstr(sr,"admission"))
    {
        file.open("admission.txt");
    }
    else if(strstr(sr,"rpcp") || strstr(sr,"pdpi") || strstr(sr,"cmpica") || strstr(sr,"i2im"))
    {
        file.open("department.txt");
    }
    else if(strstr(sr,"arip") || strstr(sr,"mtin") || strstr(sr,"chandubhai"))
    {
        file.open("department.txt");
    }
    else if(strstr(sr,"event"))
    {
        file.open("event.txt");
    }
    else if(strstr(sr,"foyer") || strstr(sr,"reading"))
    {
        file.open("foyer.txt");
    }
    else if(strstr(sr,"ground"))
    {
        file.open("ground.txt");
    }
    else if(strstr(sr,"hospital") || strstr(sr,"health"))
    {
        file.open("hospital.txt");
    }
    else if(strstr(sr,"infrastructure"))
    {
        file.open("infrastructure.txt");
    }
    else if(strstr(sr,"placement") || strstr(sr,"company") || strstr(sr,"companies"))
    {
        file.open("placement.txt");
    }
    else if(strstr(sr,"social"))
    {
        file.open("social life.txt");
    }
    else if(strstr(sr,"sport") || strstr(sr,"activity") || strstr(sr,"activities") || strstr(sr,"cricket"))
    {
        file.open("sport.txt");
    }
    else if(strstr(sr,"chess") || strstr(sr,"ball") || strstr(sr,"carrom") || strstr(sr,"tennis") || strstr(sr,"gym"))
    {
        file.open("sport.txt");
    }
    else if(strstr(sr,"stationary") || strstr(sr,"stationaries") || strstr(sr,"material") || strstr(sr,"reprograph"))
    {
        file.open("stationary.txt");
    }
    else if(strstr(sr,"training"))
    {
        file.open("training.txt");
    }
    else if(strstr(sr,"transport") || strstr(sr,"bus"))
    {
        file.open("transport.txt");
    }
    else if(strstr(sr,"wifi") || strstr(sr,"enternet")|| strstr(sr,"wincell") || strstr(sr,"sophos"))
    {
        file.open("wifi.txt");
    }
    else if(strstr(sr,"depstar") || strstr(sr,"devang"))
    {
        file.open("depstar.txt");
    }
    else if(strstr(sr,"cspit") || strstr(sr,"chandubhai"))
    {
        file.open("cspit.txt");
    }
     else if(strstr(sr,"game") || strstr(sr,"movie") || strstr(sr,"facebook") || strstr(sr,"fb") || strstr(sr,"insta"))
    {
       PlaySound(TEXT("funny.wav"),NULL,SND_SYNC);
       goto f;
    }
     else if(strstr(sr,"charusat") || strstr(sr,"university") ||  strstr(sr,"charotar"))
    {
        file.open("charusat.txt");
    }
    else
    {
        f:
        a=1;
        cout<<"no result found ......";

    }
    if(a==1)
    {
         PlaySound(TEXT("wah.wav"),NULL,SND_SYNC);
         PlaySound(TEXT("result.wav"),NULL,SND_SYNC);
    }
    else
    {
        PlaySound(TEXT("searchinginprocess.wav"),NULL,SND_SYNC);
        Sleep(800);
        cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        char c;
        PlaySound(TEXT("data.wav"),NULL,SND_SYNC);
        while(!(file.eof()))
        {
            file.get(c);
            cout<<c;
        }
        cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    }
}


int main()
{
    char c;

    system("color 47");
    Search S1;
    S1.formating();
    PlaySound(TEXT("welcome.wav"),NULL,SND_SYNC);
    PlaySound(TEXT("from.wav"),NULL,SND_SYNC);
    S1.again();

    do
    {

        system("cls");
        S1.formating1();

        S1.input();
        S1.Find();

        c=S1.again();
    a:
        system("cls");
        S1.formating1();

        if(c=='2')
        {
                S1.check_history();
                getche();

                system("cls");
                S1.formating1();
                c=S1.again();

                if(c=='2')
                    goto a;

        }

    b:
        system("cls");
        S1.formating1();

        if(c=='3')
        {
            S1.clear_history();

            cout<<"History is cleared."<<endl;

            getche();
            system("cls");

            S1.formating1();
            c=S1.again();

            if(c=='3')
                goto b;
                if(c=='2')
                    goto a;
        }

    }while(c=='1' || c=='2' || c=='3' );

}

