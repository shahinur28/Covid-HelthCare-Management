#include<bits/stdc++.h>
using namespace std;

struct COVID
{
    //admin//
    char h_n[50];//hospital_name
    char d_n[50];//doctor_name
    char l_n[50];//location_name
    unsigned long long int num;
    char nuum[50];
    char p_d[50];
    char m_n[50];

    //user//
    char p_u_n[50];
    char p_u_m[50];
    unsigned long long int pon;

};

///all functions start
void hospital_add();//add
void hospital_update();//update
void hospital_show();//show
void hospital_delete();//delete
void hospital();

void doctors_add();//add
void doctors_update();//update
void doctors_show();//show
void doctors_delete();//delete
void doctors();

void location_add();//add
void location_update();//update
void location_show();//show
void location_delete();//delete
void covid_test_location();

void number_add();//add
void number_update();//update
void number_show();//show
void number_delete();//delete
void hot_line_number();

void first_aid_info_add();//add
void first_aid_info_update();//update
void first_aid_info_show();//show
void first_aid_info_delete();//delete
void prevent_covid_first_aid();


void medicine_add();//add
void medicine_update();//update
void medicine_show();//show
void medicine_delete();//delete

void Online_payment_method_for_user_add();//add
void Online_payment_method_for_user_update();//update
void Online_payment_method_for_user_show();//show
void Online_payment_method_for_user_delete();//delete
void Online_payment_method_for_user();
void buy_medicine();

void about_us_add();//add
void about_us_update();//update
void about_us_showw();//show
void about_us_delete();//delete
void about_us();

void order_from_user();

void Home();

void admin_profile();//admin profile

void admin_profile_edit();//admin profile edit

void admin_panel_login();//admin login

void admin_panel_registration();//admin registration

void admin_panel();

void hospital_user();

void doctors_user();

void covid_test_location_user();

void hot_line_number_user();

void prevent_covid_first_aid_user();

void payment_matching();

void payment(char mn[]);

void address();

void for_buy_medicine();

void medicine_for_you();

void Home_user(char name[],char mail[],char pass[]);

void user_panel();

void user_panel_registration();

void user_panel_login();

void spacef();

void order_confirmation(char t[]);

void user_profile(char name[],char mail[],char pass[]);

void edit_user_profile(char name[],char mail[],char pass[]);

void brows_info();

void edit_brows_info(char name[],char mail[],char pass[]);

void brows_matching_data(char name[],char mail[],char pass[]);

void about_us_show();

///all functions end

int main()
{
    cout<< "                                        #################################"<<endl;
    cout<< "                                        # Welcome to COVID health care. #"<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 Admin Panel                 |"<<endl;
    cout<< "                                        | 2 User Panel                  |"<<endl;
    cout<< "                                        | 3 Exit                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int n;
    cin>>n;
    system("cls");

    switch(n)
    {

    case 1:
        admin_panel();
        break;
    case 2:
        user_panel();
        break;
    case 3:
        break;
    }
    return 0;
    system("cls");
}



///############### admine panel (begin) #################///

///hospital (begin)///

void hospital_add()//add
{
    struct COVID h;
    FILE *hptl;
    hptl=fopen("hospital.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn,mm;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        How many Hospital name you want  "<<endl;
        cout<< "                                        to add? "<<endl;
        cout<< "                                        ";
        cin>>nn;
        cout<< "                                        Add Hospital Name."<<endl;
        for(int i=0; i<nn; i++)
        {
            cout<< "                                        ";
            cin>>h.h_n;
            fprintf(hptl, "%s\n",h.h_n);
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose Option : ";
        cin>>mm;
        switch(mm)
        {
        case 1:
            hospital();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void hospital_update()//update
{
    struct COVID h[500];
    int i=0;
    char Delete_name[500],Update_name[500];
    bool r;

    FILE *hptl;
    hptl=fopen("hospital.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Hospital"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&h[i].h_n);
            cout<< "                                        "<<h[i].h_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("hospital.txt","w");
    fclose(hptl);

    hptl=fopen("hospital.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which hospital do you want to"<<endl;
        cout<< "                                        update? : ";
        cin>>Delete_name;
        cout<< "                                        New Hospital : ";
        cin>>Update_name;

        for(int j=0; j<=i; j++)
        {
            r=strcmp(Delete_name,h[j].h_n);
            if(r==0)
            {
                fprintf(hptl, "%s\n",Update_name);
            }
            else if (r==1)
            {
                fprintf(hptl, "%s\n",h[j].h_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        hospital();
        break;
    case 2:
        break;
    }
    system("cls");
}

void hospital_show()//show
{
    struct COVID h;
    FILE *hptl;
    hptl=fopen("hospital.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Hospital Name.                   "<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",h.h_n);
            cout<<"                                        "<<h.h_n<<endl;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            hospital();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void hospital_delete()//delete
{
    struct COVID h[500];
    int i=0;
    char Delete_name[500];
    bool r;

    FILE *hptl;
    hptl=fopen("hospital.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Hospital"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&h[i].h_n);
            cout<< "                                        "<<h[i].h_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("hospital.txt","w");
    fclose(hptl);

    hptl=fopen("hospital.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which hospital do you want to"<<endl;
        cout<<"                                         delete? : ";
        cin>>Delete_name;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,h[j].h_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",h[j].h_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        hospital();
        break;
    case 2:
        break;
    }
    system("cls");
}


void hospital()
{
    system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Add Hospital.                |"<<endl;
    cout<< "                                        |2 Upadte Hospital.             |"<<endl;
    cout<< "                                        |3 Show Hospital.               |"<<endl;
    cout<< "                                        |4 Delete Hospital.             |"<<endl;
    cout<< "                                        |5 Back.                        |"<<endl;
    cout<< "                                        |6 Exit.                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        hospital_add();
        break;
    case 2:
        hospital_update();
        break;
    case 3:
        hospital_show();
        break;
    case 4:
        hospital_delete();
        break;
    case 5:
        Home();
        break;
    case 6:
        break;
    }
}
///hospital (end) ///


///doctors (begin)///

void doctors_add()//add
{
    struct COVID d;
    FILE *hptl;
    hptl=fopen("doctor.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        How many doctors name you want to input? "<<endl;
        cout<< "                                        ";
        cin>>nn;
        cout<< "                                        Input Doctors Name."<<endl;
        for(int i=0; i<nn; i++)
        {
            cout<< "                                        ";
            cin>>d.d_n;
            fprintf(hptl, "%s\n",d.d_n);
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            doctors();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void doctors_update()//update
{
    struct COVID d[500];
    int i=0;
    char Delete_name[500],Updte_name[500];
    bool r;
    FILE *hptl;
    hptl=fopen("doctor.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Doctors"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&d[i].d_n);
            cout<< "                                        "<<d[i].d_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("doctor.txt","w");
    fclose(hptl);

    hptl=fopen("doctor.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which doctor do you want to"<<endl;
        cout<< "                                        update? : ";
        cin>>Delete_name;
        cout<< "                                        New Doctor : ";
        cin>>Updte_name;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,d[j].d_n);
            if(r==0)
            {
                fprintf(hptl, "%s\n",Updte_name);
            }
            else if (r==1)
            {
                fprintf(hptl, "%s\n",d[j].d_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        doctors();
        break;
    case 2:
        break;
    }
    system("cls");
}

void doctors_show()//show
{
    struct COVID d;
    FILE *hptl;
    hptl=fopen("doctor.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        doctors name."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",d.d_n);
            cout<< "                                        "<<d.d_n<<endl;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            doctors();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void doctors_delete()//delete
{
    struct COVID d[500];
    int i=0;
    char Delete_name[500];
    bool r;
    FILE *hptl;
    hptl=fopen("doctor.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Doctors"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&d[i].d_n);
            cout<< "                                        "<<d[i].d_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("doctor.txt","w");
    fclose(hptl);

    hptl=fopen("doctor.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which doctor do you want to"<<endl;
        cout<< "                                        delete? : ";
        cin>>Delete_name;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,d[j].d_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",d[j].d_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        doctors();
        break;
    case 2:
        break;
    }
    system("cls");
}


void doctors()
{
    system("cls");
    cout<< "                                        ----------------------------------"<<endl;
    cout<< "                                        |1 Add Doctors.                  |"<<endl;
    cout<< "                                        |2 Update Doctors.               |"<<endl;
    cout<< "                                        |3 Show Doctors.                 |"<<endl;
    cout<< "                                        |4 Delete Doctors.               |"<<endl;
    cout<< "                                        |5 Back.                         |"<<endl;
    cout<< "                                        |6 Exit.                         |"<<endl;
    cout<< "                                        ----------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        doctors_add();
        break;
    case 2:
        doctors_update();
        break;
    case 3:
        doctors_show();
        break;
    case 4:
        doctors_delete();
        break;
    case 5:
        Home();
        break;
    case 6:
        break;
    }
}
///doctors (end) ///


///test location (begin)///

void location_add()//add
{
    system("cls");
    struct COVID l;
    FILE *hptl;
    hptl=fopen("location.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        how many location want to add? "<<endl;
        cout<< "                                        ";
        cin>>nn;
        cout<< "                                        add location."<<endl;
        for(int i=0; i<nn; i++)
        {
            cout<< "                                        ";
            cin>>l.l_n;
            fprintf(hptl, "%s\n",l.l_n);
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            covid_test_location();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void location_update()//update
{
    system("cls");
    struct COVID l[500];
    int i=0;
    char Delete_name[500],Update_loc[500];
    bool r;
    FILE *hptl;
    hptl=fopen("location.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Location"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&l[i].l_n);
            cout<< "                                        "<<l[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("location.txt","w");
    fclose(hptl);

    hptl=fopen("location.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which location do you want to"<<endl;
        cout<< "                                        update? : ";
        cin>>Delete_name;
        cout<< "                                        New Location : ";
        cin>>Update_loc;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,l[j].l_n);
            if(r==0)
            {
                fprintf(hptl, "%s\n",Update_loc);
            }
            else if(r==1)
            {
                fprintf(hptl, "%s\n",l[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        covid_test_location();
        break;
    case 2:
        break;
    }
    system("cls");
}

void location_show()//show
{
    system("cls");
    struct COVID l;
    FILE *hptl;
    hptl=fopen("location.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        location name."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",l.l_n);
            cout<< "                                        " <<l.l_n<<endl;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            covid_test_location();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void location_delete()//delete
{
    system("cls");
    struct COVID l[500];
    int i=0;
    char Delete_name[500];
    bool r;
    FILE *hptl;
    hptl=fopen("location.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Location"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&l[i].l_n);
            cout<< "                                        "<<l[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("location.txt","w");
    fclose(hptl);

    hptl=fopen("location.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which location do you want to"<<endl;
        cout<< "                                        delete? : ";
        cin>>Delete_name;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,l[j].l_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",l[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        covid_test_location();
        break;
    case 2:
        break;
    }
    system("cls");
}
void covid_test_location()
{
    system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Add Location.                |"<<endl;
    cout<< "                                        |2 Update Location.             |"<<endl;
    cout<< "                                        |3 Show Location.               |"<<endl;
    cout<< "                                        |4 Delete Location.             |"<<endl;
    cout<< "                                        |5 Back.                        |"<<endl;
    cout<< "                                        |6 Exit.                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        location_add();
        break;
    case 2:
        location_update();
        break;
    case 3:
        location_show();
        break;
    case 4:
        location_delete();
        break;
    case 5:
        Home();
        break;
    case 6:
        break;
    }
}
///test location (end) ///

///hot line number (begin) ///

void number_add()//add
{
    system("cls");
    struct COVID numb;
    FILE *hptl;
    hptl=fopen("number.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        how many number you want to input? "<<endl;
        cout<< "                                        ";
        cin>>nn;
        cout<< "                                        input number."<<endl;
        for(int i=0; i<nn; i++)
        {
            cout<< "                                        ";
            cin>>numb.num;
            fprintf(hptl, "%llu\n",numb.num);
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            hot_line_number();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void number_update()//update
{
    system("cls");
    struct COVID hot[500];
    int i=0;
    char Delete_name[500],new_num[500];
    bool r;
    FILE *hptl;
    hptl=fopen("number.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Numbers"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&hot[i].l_n);
            cout<< "                                        "<<hot[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("number.txt","w");
    fclose(hptl);

    hptl=fopen("number.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which Number do you want to "<<endl;
        cout<< "                                        update? : ";
        cin>>Delete_name;
        cout<< "                                        New Number : ";
        cin>>new_num;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,hot[j].l_n);
            if(r==0)
            {
                fprintf(hptl, "%s\n",new_num);
            }
            else if(r==1)
            {
                fprintf(hptl, "%s\n",hot[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        hot_line_number();
        break;
    case 2:
        break;
    }
    system("cls");
}

void number_show()//show
{
    system("cls");
    struct COVID numb;
    FILE *hptl;
    char c[500];
    hptl=fopen("number.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Number."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%llu\n",&numb.num);
            cout<< "                                        " <<numb.num<<endl;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            hot_line_number();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void number_delete()//delete
{
    system("cls");
    struct COVID hot[500];
    int i=0;
    char Delete_name[500];
    bool r;
    FILE *hptl;
    hptl=fopen("number.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Numbers"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&hot[i].l_n);
            cout<< "                                        "<<hot[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("number.txt","w");
    fclose(hptl);

    hptl=fopen("number.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which Number do you want to "<<endl;
        cout<< "                                        delete? : ";
        cin>>Delete_name;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,hot[j].l_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",hot[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        hot_line_number();
        break;
    case 2:
        break;
    }
    system("cls");
}

void hot_line_number()
{
    system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Add Number.                  |"<<endl;
    cout<< "                                        |2 Update Number.               |"<<endl;
    cout<< "                                        |3 Show Number.                 |"<<endl;
    cout<< "                                        |4 Delete Number.               |"<<endl;
    cout<< "                                        |5 Back.                        |"<<endl;
    cout<< "                                        |6 Exit.                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        number_add();
        break;
    case 2:
        number_update();
        break;
    case 3:
        number_show();
        break;
    case 4:
        number_delete();
        break;
    case 5:
        Home();
        break;
    case 6:
        break;
    }
    system("cls");
}
///hot line number (end) ///

///prevent covid & first aid (begin) ///

void first_aid_info_add()//add
{
    system("cls");
    struct COVID pre;
    FILE *hptl;
    hptl=fopen("first_aid.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        How many lines you want to input? "<<endl;
        cout<< "                                        ";
        cin>>nn;
        cout<< "                                        Input first aid info and prevent "<<endl;
        cout<< "                                        policy."<<endl;
        for(int i=0; i<nn; i++)
        {
            cout<< "                                        ";
            cin>>pre.p_d;
            fprintf(hptl, "%s\n",pre.p_d);
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose Option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            prevent_covid_first_aid();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void first_aid_info_update()//update
{
    system("cls");
    struct COVID first_aid[500];
    int i=0;
    char Delete_name[500],new_line[500];
    bool r;
    FILE *hptl;
    hptl=fopen("first_aid.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        First Aid Info"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&first_aid[i].l_n);
            cout<< "                                        "<<first_aid[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("first_aid.txt","w");
    fclose(hptl);

    hptl=fopen("first_aid.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which line do you want to "<<endl;
        cout<< "                                        update? : ";
        cin>>Delete_name;
        cout<< "                                        New Line : ";
        cin>>new_line;

        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,first_aid[j].l_n);
            if(r==0)
            {
                fprintf(hptl, "%s\n",new_line);
            }
            else if(r==1)
            {
                fprintf(hptl, "%s\n",first_aid[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        prevent_covid_first_aid();
        break;
    case 2:
        break;
    }
    system("cls");
}

void first_aid_info_show()//show
{
    system("cls");
    struct COVID pre;
    FILE *hptl;
    hptl=fopen("first_aid.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        First aid info and prevent policy."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",pre.p_d);
            cout<< "                                        " <<pre.p_d<<endl;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            prevent_covid_first_aid();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void first_aid_info_delete()//delete
{
    system("cls");
    struct COVID first_aid[500];
    int i=0;
    char Delete_name[500];
    bool r;
    FILE *hptl;
    hptl=fopen("first_aid.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        First Aid Info"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&first_aid[i].l_n);
            cout<< "                                        "<<first_aid[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("first_aid.txt","w");
    fclose(hptl);

    hptl=fopen("first_aid.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which Number do you want to "<<endl;
        cout<< "                                        delete? : ";
        cin>>Delete_name;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,first_aid[j].l_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",first_aid[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        prevent_covid_first_aid();
        break;
    case 2:
        break;
    }
    system("cls");
}

void prevent_covid_first_aid()
{
    system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Add First Aid Info.          |"<<endl;
    cout<< "                                        |2 Update First Aid Info.       |"<<endl;
    cout<< "                                        |3 Show First Aid Info.         |"<<endl;
    cout<< "                                        |4 Delete First Aid Info.       |"<<endl;
    cout<< "                                        |5 Back.                        |"<<endl;
    cout<< "                                        |6 Exit.                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        first_aid_info_add();
        break;
    case 2:
        first_aid_info_update();
        break;
    case 3:
        first_aid_info_show();
        break;
    case 4:
        first_aid_info_delete();
        break;
    case 5:
        Home();
        break;
    case 6:
        break;
    }
    system("cls");
}
///prevent covid & first aid (end) ///

///Buy medicine (begin)///

void medicine_add()//add
{
    system("cls");
    struct COVID med;
    FILE *hptl;
    hptl=fopen("medicine.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        how many medicine you want to input? "<<endl;
        cout<< "                                        ";
        cin>>nn;
        cout<< "                                        input medicine."<<endl;
        for(int i=0; i<nn; i++)
        {
            cout<< "                                        ";
            cin>>med.m_n;
            fprintf(hptl, "%s\n",med.m_n);
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            buy_medicine();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void medicine_show()//show
{
    system("cls");
    struct COVID med;
    FILE *hptl;
    hptl=fopen("medicine.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Medicine."<<endl;
        while(!feof(hptl))
        {
            fgets(med.m_n,50,hptl);
            cout<< "                                        "<<med.m_n;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        int mm;
        cout<< "                                        Choose option : ";
        cin>>mm;
        switch(mm)
        {
        case 1:
            buy_medicine();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void medicine_update()//update
{
    system("cls");
    struct COVID medicine[500];
    int i=0;
    char Delete_name[500],new_medicine[500];
    bool r;
    FILE *hptl;
    hptl=fopen("medicine.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Medicine"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&medicine[i].l_n);
            cout<< "                                        "<<medicine[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("medicine.txt","w");
    fclose(hptl);

    hptl=fopen("medicine.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which medicine do you want to"<<endl;
        cout<< "                                        update? : ";
        cin>>Delete_name;
        cout<< "                                        New Medicine : ";
        cin>>new_medicine;
        for(int j=0; j<=i; j++)
        {
            r=strcmp(Delete_name,medicine[j].l_n);
            if(r==0)
            {
                fprintf(hptl, "%s\n",new_medicine);
            }
            else if(r==1)
            {
                fprintf(hptl, "%s\n",medicine[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        buy_medicine();
        break;
    case 2:
        break;
    }
    system("cls");
}

void medicine_delete()//delete
{
    system("cls");
    struct COVID medicine[500];
    int i=0;
    char Delete_name[500];
    bool r;
    FILE *hptl;
    hptl=fopen("medicine.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Medicine"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&medicine[i].l_n);
            cout<< "                                        "<<medicine[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("medicine.txt","w");
    fclose(hptl);

    hptl=fopen("medicine.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which medicine do you want to"<<endl;
        cout<< "                                        update? : ";
        cin>>Delete_name;
        for(int j=0; j<=i; j++)
        {
            r=strcmp(Delete_name,medicine[j].l_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",medicine[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        buy_medicine();
        break;
    case 2:
        break;
    }
    system("cls");
}

void buy_medicine()
{
    system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Add Medicine.                |"<<endl;
    cout<< "                                        |2 Update Medicine.             |"<<endl;
    cout<< "                                        |3 Show Medicine.               |"<<endl;
    cout<< "                                        |4 Delete Medicine.             |"<<endl;
    cout<< "                                        |5 Online Payment For User.     |"<<endl;
    cout<< "                                        |6 Back.                        |"<<endl;
    cout<< "                                        |7 Exit.                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        medicine_add();
        break;
    case 2:
        medicine_update();
        break;
    case 3:
        medicine_show();
        break;
    case 4:
        medicine_delete();
        break;
    case 5:
        Online_payment_method_for_user();
        break;
    case 6:
        Home();
        break;
    case 7:
        break;
    }
    system("cls");
}

///Buy medicine (end)///

///Order from user (begin)///

void Online_payment_method_for_user_add()//add
{
    system("cls");
    FILE *hptl;
    char p_m[500];
    hptl=fopen("payment option.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        int nn;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        How many payment methods do you"<<endl;
        cout<< "                                        want to add?"<<endl;
        cout<< "                                        ";
        cin>>nn;
        cout<< "                                        Input payment methods."<<endl;
        for(int i=1; i<=nn; i++)
        {
            cout<< "                                        ";
            cin>>p_m;
            fprintf(hptl,"%s\n",p_m);
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            Online_payment_method_for_user();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void Online_payment_method_for_user_update()//update
{
    system("cls");
    struct COVID payment[500];
    int i=0;
    char Delete_name[500],new_payment[500];
    bool r;
    FILE *hptl;
    hptl=fopen("payment option.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Payment"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&payment[i].l_n);
            cout<< "                                        "<<payment[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("payment option.txt","w");
    fclose(hptl);

    hptl=fopen("payment option.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which payment do you want to"<<endl;
        cout<< "                                        update? : ";
        cin>>Delete_name;
        cout<< "                                        New Payment Method : ";
        cin>>new_payment;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,payment[j].l_n);
            if(r==0)
            {
                fprintf(hptl, "%s\n",new_payment);
            }
            else if(r==1)
            {
                fprintf(hptl, "%s\n",payment[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        buy_medicine();
        break;
    case 2:
        break;
    }
    system("cls");
}

void Online_payment_method_for_user_show()//show
{
    system("cls");
    FILE *hptl;
    char p_m[500];
    hptl=fopen("payment option.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        while(!feof(hptl))
        {
            fgets(p_m,100,hptl);
            cout<< "                                        ";
            cout<<p_m;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            Online_payment_method_for_user();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void Online_payment_method_for_user_delete()//delete
{
    system("cls");
    struct COVID payment[500];
    int i=0;
    char Delete_name[500];
    bool r;
    FILE *hptl;
    hptl=fopen("payment option.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Payment"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&payment[i].l_n);
            cout<< "                                        "<<payment[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("payment option.txt","w");
    fclose(hptl);

    hptl=fopen("payment option.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which payment do you want to"<<endl;
        cout<< "                                        delete? : ";
        cin>>Delete_name;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_name,payment[j].l_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",payment[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        buy_medicine();
        break;
    case 2:
        break;
    }
    system("cls");
}

void Online_payment_method_for_user()
{
    system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Add Payment Method.          |"<<endl;
    cout<< "                                        |2 Update Payment Method.       |"<<endl;
    cout<< "                                        |3 Show Payment Method.         |"<<endl;
    cout<< "                                        |4 Delete Payment Method.       |"<<endl;
    cout<< "                                        |5 Back.                        |"<<endl;
    cout<< "                                        |6 Exit.                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        Online_payment_method_for_user_add();
        break;
    case 2:
        Online_payment_method_for_user_update();
        break;
    case 3:
        Online_payment_method_for_user_show();
        break;
    case 4:
        Online_payment_method_for_user_delete();
        break;
    case 5:
        buy_medicine();
        break;
    case 6:
        break;
    }
    system("cls");
}

void order_from_user()
{
    system("cls");
    FILE *hptl;
    int i=0;
    char s1[500],s2[500],s3[500],s4[500],s5[500],s6[500];
    hptl=fopen("address.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ------------------------------------------------------------------"<<endl;
        cout<< "                                        Medicine"<<"\t\t\t\t"<<"Name"<<"\t"<<"Number"<<"\t\t"<<"Address"<<"\t"<<"Bank"<<"\t"<<"Bank_Number"<<endl;
        while(!feof(hptl))
        {
            i++;
            fscanf(hptl, "%s%s%s%s%s%s",&s1,&s2,&s3,&s4,&s5,&s6);
            cout<< "                                        ";
            cout<<s1<< "\t" <<s2<< "\t" <<s3<< "\t" <<s4<< "\t" <<s5<< "\t" <<s6<<endl;
        }
        cout<<endl<< "                                        Total Order -> "<<i-1<<endl;
        cout<<endl<< "                                        ------------------------------------------------------------------"<<endl;
    }
    fclose(hptl);
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        Choose Option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        Home();
        break;
    case 2:
        break;
    }
    system("cls");
}


///Order from user (end)///

void admin_profile_edit()
{
    FILE *hptl;
    char s1[100],s2[100],s3[100];
    hptl=fopen("registration.txt","w");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        New Name : ";
        cin>>s1;
        cout<< "                                        New Mail : ";
        cin>>s2;
        cout<< "                                        New Password : ";
        cin>>s3;
        fprintf(hptl, "%s %s %s \n",s1,s2,s3);
    }
    fclose(hptl);
    system("cls");
    admin_panel_login();
}


void admin_profile()
{
    //system("cls");
    cout<< "                                                                         "<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #            Profile            #"<<endl;
    cout<< "                                        #################################"<<endl;

    FILE *hptl;
    char s1[100],s2[100],s3[100];
    hptl=fopen("registration.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        fscanf(hptl, "%s %s %s",s1,s2,s3);
        cout<< "                                        Name  : " <<s1<<endl;
        cout<< "                                        Mail : " <<s2<<endl;
        cout<< "                                        Password  : " <<s3<<endl;
    }
    fclose(hptl);
    //system("cls");

    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Edit Profile.                  "<<endl;
    cout<< "                                        2 Back.                          "<<endl;
    cout<< "                                        3 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    system("cls");
    switch(mm)
    {
    case 1:
        admin_profile_edit();
        break;
    case 2:
        Home();
        break;
    case 3:
        break;
    }
}

void about_us_add()//add
{
    FILE *hptl;
    char s1[200];
    int x;
    hptl=fopen("about_us.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Lines Number?"<<endl;
        cout<< "                                        ";
        cin>>x;
        while(x--)
        {
            cout<< "                                        ";
            cin>>s1;
            fprintf(hptl, "%s\n",&s1);
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        about_us();
        break;
    case 2:
        break;
    }
    system("cls");
}

void about_us_update()//update
{
    system("cls");
    struct COVID about[500];
    int i=0;
    char Delete_about[500],new_about[500];
    bool r;
    FILE *hptl;
    hptl=fopen("about_us.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        About Us"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&about[i].l_n);
            cout<< "                                        "<<about[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("about_us.txt","w");
    fclose(hptl);

    hptl=fopen("about_us.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which line do you want to "<<endl;
        cout<< "                                        update? : ";
        cin>>Delete_about;
        cout<< "                                        New About : ";
        cin>>new_about;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_about,about[j].l_n);
            if(r==0)
            {
                fprintf(hptl, "%s\n",new_about);
            }
            else if(r==1)
            {
                fprintf(hptl, "%s\n",about[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        about_us();
        break;
    case 2:
        break;
    }
    system("cls");
}

void about_us_showw()//show
{
    struct COVID d;
    FILE *hptl;
    hptl=fopen("about_us.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        About Us."<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",d.d_n);
            cout<< "                                        "<<d.d_n<<endl;
        }
        fclose(hptl);
        cout<< "                                        `````````````````````````````````"<<endl;
        cout<< "                                        1 Back.                          "<<endl;
        cout<< "                                        2 Exit.                          "<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int mm;
        cin>>mm;
        switch(mm)
        {
        case 1:
            about_us();
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void about_us_delete()//delete
{
    system("cls");
    struct COVID about[500];
    int i=0;
    char Delete_about[500];
    bool r;
    FILE *hptl;
    hptl=fopen("about_us.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        About Us"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&about[i].l_n);
            cout<< "                                        "<<about[i].l_n<<endl;
            i++;
        }
        cout<< "                                        `````````````````````````````````"<<endl;
    }
    fclose(hptl);

    hptl=fopen("about_us.txt","w");
    fclose(hptl);

    hptl=fopen("about_us.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Which line do you want to"<<endl;
        cout<< "                                        delete? : ";
        cin>>Delete_about;
        for(int j=0; j<=i; j++)
        {

            r=strcmp(Delete_about,about[j].l_n);
            if(r==1)
            {
                fprintf(hptl, "%s\n",about[j].l_n);
            }
        }
    }
    fclose(hptl);
    cout<< "                                        `````````````````````````````````"<<endl;
    cout<< "                                        1 Back.                          "<<endl;
    cout<< "                                        2 Exit.                          "<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int mm;
    cin>>mm;
    switch(mm)
    {
    case 1:
        about_us();
        break;
    case 2:
        break;
    }
    system("cls");
}

void about_us()
{

    system("cls");
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Add About.                   |"<<endl;
    cout<< "                                        |2 Update About.                |"<<endl;
    cout<< "                                        |3 Show About.                  |"<<endl;
    cout<< "                                        |4 Delete About.                |"<<endl;
    cout<< "                                        |5 Back.                        |"<<endl;
    cout<< "                                        |6 Exit.                        |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        about_us_add();
        break;
    case 2:
        about_us_update();
        break;
    case 3:
        about_us_showw();
        break;
    case 4:
        about_us_delete();
        break;
    case 5:
        Home();
        break;
    case 6:
        break;
    }
    system("cls");
}

void Home()
{
    //system("cls");
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #           Home page           #"<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        |1 Hospital                     |"<<endl;
    cout<< "                                        |2 Doctors                      |"<<endl;
    cout<< "                                        |3 COVID test location          |"<<endl;
    cout<< "                                        |4 Hot line number              |"<<endl;
    cout<< "                                        |5 Prevent COVID & first aid    |"<<endl;
    cout<< "                                        |6 Buy medicine                 |"<<endl;
    cout<< "                                        |7 Order from user              |"<<endl;
    cout<< "                                        |8 Profile                      |"<<endl;
    cout<< "                                        |9 Logout                       |"<<endl;
    cout<< "                                        |10 About Us                    |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    int a;
    cout<< "                                        Choose Option : ";
    cin>>a;
    system("cls");
    switch(a)
    {
    case 1:
        hospital();
        break;
    case 2:
        doctors();
        break;
    case 3:
        covid_test_location();
        break;
    case 4:
        hot_line_number();
        break;
    case 5:
        prevent_covid_first_aid();
        break;
    case 6:
        buy_medicine();
        break;
    case 7:
        order_from_user();
        break;
    case 8:
        admin_profile();
        break;
    case 9:
        main();
        break;
    case 10:
        about_us();
        break;
    }
    //system("cls");
}

void admin_panel_login()//admin login
{
    //system("cls");
    cout<< "                                                                         "<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #             login             #"<<endl;
    cout<< "                                        #################################"<<endl;

    FILE *hptl;
    char name[100],name_user[100],mail[100];
    char pass_user[100],pass[100];
    hptl=fopen("registration.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        while(1)
        {
            cout<< "                                        ----------------------------------"<<endl;
            cout<< "                                        UserName/Mail : ";
            cin>>name_user;
            cout<< "                                        Password : ";
            cin>>pass_user;
            fscanf(hptl,"%s%s%s",&name,&mail,&pass);
            bool result=strcmp(name,name_user);
            bool result2=strcmp(mail,name_user);
            bool result3=strcmp(pass,pass_user);

            if (result==0 || result2==0 && result3==0)
            {
                system("cls");
                Home();
                break;
            }
            else
                cout<<endl<< "                                        Oops! (Wrong information)"<<endl;
            cout<< "                                        ----------------------------------"<<endl;
        }
    }
    fclose(hptl);
}

void admin_panel_registration()//admin registration
{
    //system("cls");
    cout<< "                                                                         "<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #          Registration         #"<<endl;
    cout<< "                                        #################################"<<endl;
    FILE *hptl;
    char name[100],mail[100],pass[100];
    hptl=fopen("registration.txt","w");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        --------------------------------"<<endl;
        cout<< "                                        user name :";
        getchar();
        gets(name);
        cout<< "                                        email :";
        gets(mail);
        cout<< "                                        password :";
        gets(pass);
        cout<< "                                        --------------------------------"<<endl;
        fprintf(hptl,"%s %s %s",name,mail,pass);
    }
    fclose(hptl);
    system("cls");
    admin_panel_login();
}

void admin_panel()
{
    cout<< "                                                                          "<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #     Welcome To Admin Panel   #"<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 Admin Registration.         |"<<endl;
    cout<< "                                        | 2 Admin Login.                |"<<endl;
    cout<< "                                        | 3 Back.                       |"<<endl;
    cout<< "                                        | 4 Exit.                       |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int n;
    cin>>n;
    system("cls");
    switch(n)
    {
    case 1:
        admin_panel_registration();
        break;
    case 2:
        admin_panel_login();
        break;
    case 3:
        main();
        break;
    case 4:
        break;
    }
    //system("cls");
}

///############### admin panel (end) #################///


///############### user panel (begin) #################///
void hospital_user(char name[],char mail[],char pass[])
{
    struct COVID h[500];
    int i=0;
    char hospital_name[500];
    bool r;
    FILE *hptl;
    hptl=fopen("hospital.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        #################################"<<endl;
        cout<< "                                        #           Hospitals           #"<<endl;
        cout<< "                                        #################################"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",h[i].h_n);
            cout<< "                                        ";
            cout<<h[i].h_n<<endl;
            i++;
        }
        fclose(hptl);

        cout<< "                                        Choose Hospital Name : ";
        cin>>hospital_name;

        hptl=fopen("browsing_info.txt","a");
        if(hptl==NULL)
            cout<< "File does not exist."<<endl;
        else
        {
            for(int j=0; j<=i; j++)
            {
                r=strcmp(hospital_name,h[j].h_n);
                if(r==0)
                {
                    fprintf(hptl, "Hospital : %s ",h[j].h_n);
                    cout<< "                                        " <<h[j].h_n<<endl;
                }
            }
        }
        fclose(hptl);
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        | 1 Back.                       |"<<endl;
        cout<< "                                        | 2 Exit.                       |"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int xx;
        cin>>xx;
        switch(xx)
        {
        case 1:
            Home_user(name,mail,pass);
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void doctors_user(char name[],char mail[],char pass[])
{
    struct COVID d[500];
    int i=0;
    char doctors_name[500];
    bool r;
    FILE *hptl;
    hptl=fopen("doctor.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        #################################"<<endl;
        cout<< "                                        #            Doctors            #"<<endl;
        cout<< "                                        #################################"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",d[i].d_n);
            cout<< "                                        ";
            cout<<d[i].d_n<<endl;
            i++;
        }
        fclose(hptl);


        cout<< "                                        Choose Doctor Name : ";
        cin>>doctors_name;

        hptl=fopen("browsing_info.txt","a");
        if(hptl==NULL)
            cout<< "File does not exist."<<endl;
        else
        {
            for(int j=0; j<=i; j++)
            {
                r=strcmp(doctors_name,d[j].d_n);
                if(r==0)
                {
                    fprintf(hptl, "Doctor : %s ",d[j].d_n);
                    cout<< "                                        " <<d[j].d_n<<endl;
                }
            }
        }
        fclose(hptl);


        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        | 1 Back.                       |"<<endl;
        cout<< "                                        | 2 Exit.                       |"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose option : ";
        int xx;
        cin>>xx;
        switch(xx)
        {
        case 1:
            Home_user(name,mail,pass);
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void covid_test_location_user(char name[],char mail[],char pass[])
{
    struct COVID l[500];

    int i=0;
    char location_name[500];
    bool r;

    FILE *hptl;
    hptl=fopen("location.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        #################################"<<endl;
        cout<< "                                        #            Location           #"<<endl;
        cout<< "                                        #################################"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",l[i].l_n);
            cout<< "                                        ";
            cout<<l[i].l_n<<endl;
            i++;
        }
    }
    fclose(hptl);



    cout<< "                                        Choose Location : ";
    cin>>location_name;

    hptl=fopen("browsing_info.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        for(int j=0; j<=i; j++)
        {
            r=strcmp(location_name,l[j].l_n);
            if(r==0)
            {
                fprintf(hptl, "Location : %s ",l[j].l_n);
                cout<< "                                        " <<l[j].l_n<<endl;
            }
        }
    }
    fclose(hptl);



    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 Back.                       |"<<endl;
    cout<< "                                        | 2 Exit.                       |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int xx;
    cin>>xx;
    switch(xx)
    {
    case 1:
        Home_user(name,mail,pass);
        break;
    case 2:
        break;
    }
    system("cls");
}
void hot_line_number_user(char name[],char mail[],char pass[])
{
    struct COVID numb[500];

    int i=0;
    char hot_line_number_name[500];
    bool r;

    FILE *hptl;
    //char c[50];
    hptl=fopen("number.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        #################################"<<endl;
        cout<< "                                        #            Numbers            #"<<endl;
        cout<< "                                        #################################"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",&numb[i].nuum);
            cout<< "                                        ";
            cout<<numb[i].nuum<<endl;
            i++;
        }
        fclose(hptl);


        cout<< "                                        Choose Number : ";
        cin>>hot_line_number_name;

        hptl=fopen("browsing_info.txt","a");
        if(hptl==NULL)
            cout<< "File does not exist."<<endl;
        else
        {
            for(int j=0; j<=i; j++)
            {
                r=strcmp(hot_line_number_name,numb[j].nuum);
                if(r==0)
                {
                    fprintf(hptl, "Number : %s ",numb[j].nuum);
                    cout<< "                                        " <<numb[j].nuum<<endl;
                }
            }
        }
        fclose(hptl);


        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        | 1 Back.                       |"<<endl;
        cout<< "                                        | 2 Exit.                       |"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose Option : ";
        int xx;
        cin>>xx;
        switch(xx)
        {
        case 1:
            Home_user(name,mail,pass);
            break;
        case 2:
            break;
        }
    }
    system("cls");
}
void prevent_covid_first_aid_user(char name[],char mail[],char pass[])
{
    struct COVID pre[500];

    int i=0;
    //char prevent_covid[100];
    //bool r;

    FILE *hptl;
    hptl=fopen("first_aid.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        #################################"<<endl;
        cout<< "                                        #  First Aid & Prevent Policy   #"<<endl;
        cout<< "                                        #################################"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s\n",pre[i].p_d);
            cout<< "                                        ";
            cout<<pre[i].p_d<<endl;
            i++;
        }
        fclose(hptl);






        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        | 1 Back.                       |"<<endl;
        cout<< "                                        | 2 Exit.                       |"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        Choose Option : ";
        int xx;
        cin>>xx;
        switch(xx)
        {
        case 1:
            Home_user(name,mail,pass);
            break;
        case 2:
            break;
        }
    }
    system("cls");
}

void payment_matching()
{
    FILE *hptl;
    int r;
    char s[500];
    hptl=fopen("payment option.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    cout<< "                                        Choice Bank : ";
    char x[500];
    cin>>x;
    while(!feof(hptl))
    {
        fscanf(hptl, "%s",&s);
        r=strcmp(x,s);
        if(r==0)
        {
            cout<< "                                        ";
            cout<<s<<endl;

            FILE *hptl;
            hptl=fopen("address.txt","a");
            if(hptl==NULL)
                cout<< "File does not exist."<<endl;
            else
            {
                fprintf(hptl,"%s ",s);
                cout<< "                                        Bank Number : ";
                char t[500];
                getchar();
                gets(t);
                fprintf(hptl,"%s\n",t);
                fclose(hptl);
                order_confirmation(t);
                break;
            }
        }
    }
    fclose(hptl);
}

void order_confirmation(char t[])
{
    FILE *hptl;
    char s1[500],s2[500],s3[500],s4[500],i2[500],i3[500];
    bool r;
    hptl=fopen("address.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        while(!feof(hptl))
        {
            fscanf(hptl,"%s %s %s %s %s %s",s1,s2,i2,s3,s4,i3);
            r=strcmp(t,i3);
            if(r==0)
            {
                cout<< "                                        ---------------------------------"<<endl;
                cout<< "                                        Medicine    : "<< s1<<endl;
                cout<< "                                        Name        : "<< s2<<endl;
                cout<< "                                        Mobile      : "<< i2<<endl;
                cout<< "                                        Address     : "<< s3<<endl;
                cout<< "                                        Bank        : "<< s4<<endl;
                cout<< "                                        Bank Number : "<< i3<<endl;
                cout<< "                                        ---------------------------------"<<endl;
                break;
            }
        }
        fclose(hptl);
    }
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 Back.                       |"<<endl;
    cout<< "                                        | 2 Exit.                       |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int xx;
    cin>>xx;
    system("cls");
    switch(xx)
    {
    case 1:
        medicine_for_you();
        break;
    case 2:
        break;
    }
}

void spacef()
{
    FILE *hptl;
    char s4[]="NULL",s5[]="NULL";
    hptl=fopen("address.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        fprintf(hptl, "%s %s\n",s4,s5);
    }
    fclose(hptl);

    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 Back.                       |"<<endl;
    cout<< "                                        | 2 Exit.                       |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int xx;
    cin>>xx;
    system("cls");
    switch(xx)
    {
    case 1:
        medicine_for_you();
        break;
    case 2:
        break;
    }
}

void payment(char mn[])
{
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 Cash On Delivery            |"<<endl;
    cout<< "                                        | 2 Online payment              |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Your Choice : ";
    int n;
    cin>>n;
    if(n==1)
    {
        spacef();
        cout<< "                                        ---------------------------------"<<endl;
        cout<< "                                        You Order Successful"<<endl;

        FILE *hptl;
        char s1[500],s2[500],s3[500],i[500],g[500],h[500];
        bool r;
        hptl=fopen("address.txt","r");
        if(hptl==NULL)
            cout<< "File does not exist."<<endl;
        else

        {
            while(!feof(hptl))
            {
                fscanf(hptl,"%s %s %s %s %s %s",s1,s2,i,s3,g,h);

                r=strcmp(mn,i);
                if(r==0)
                {
                    cout<< "                                        Medicine    : "<< s1<<endl;
                    cout<< "                                        Name        : "<< s2<<endl;
                    cout<< "                                        Mobile      : "<< i<<endl;
                    cout<< "                                        Address     : "<< s3<<endl;
                    cout<< "                                        ---------------------------------"<<endl;
                    break;
                }
            }
            fclose(hptl);
        }
    }
    else if(n==2)
    {
        FILE *hptl;
        char s[500];
        hptl=fopen("payment option.txt","r");
        if(hptl==NULL)
            cout<< "File does not exist."<<endl;
        else
        {
            cout<< "                                        ---------------------------------"<<endl;
            while(!feof(hptl))
            {
                fscanf(hptl, "%s",&s);
                cout<< "                                        ";
                cout<<s<<endl;
            }
            cout<< "                                        ---------------------------------"<<endl;
            fclose(hptl);

            payment_matching();
        }
    }
}

void address()
{
    FILE *hptl;
    char name[500],loc[500],mn[500];
    hptl=fopen("address.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        Enter Your Address."<<endl;
        cout<< "                                        Name : ";
        //getchar();
        //gets(name);
        cin>>name;
        cout<< "                                        Mobile No : ";
        //gets(mn);
        cin>>mn;
        cout<< "                                        Location : ";
        //getchar();
        //gets(loc);
        cin>>loc;
        fprintf(hptl,"%s %s %s ",name,mn,loc);
        fclose(hptl);
        //system("cls");
        payment(mn);
        system("cls");
    }
}

void for_buy_medicine()
{
    cout<< "                                        Choose Medicine : ";
    FILE *hptl;
    char n[500];
    int r;
    cin>>n;
    char s[500];
    hptl=fopen("medicine.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        while(!feof(hptl))
        {
            fscanf(hptl, "%s",&s);
            r=strcmp(n,s);
            if(r==0)
            {
                cout<< "                                        ";
                cout<<s<<endl;


                hptl=fopen("address.txt","a");
                if(hptl==NULL)
                    cout<< "File does not exist."<<endl;
                else
                {
                    fprintf(hptl,"%s ",s);
                    fclose(hptl);
                }
                address();
                break;
            }
        }
    }
    fclose(hptl);
}

void medicine_for_you()
{
    struct COVID med;
    FILE *hptl;
    hptl=fopen("medicine.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        cout<< "                                        #################################"<<endl;
        cout<< "                                        #            Medicines          #"<<endl;
        cout<< "                                        #################################"<<endl;
        cout<< "                                        ---------------------------------"<<endl;
        while(!feof(hptl))
        {
            fscanf(hptl, "%s",&med.m_n);
            cout<< "                                        ";
            cout<<med.m_n<<endl;
        }
        fclose(hptl);
    }
    for_buy_medicine();
}

void edit_user_profile(char name[],char mail[],char pass[])
{
    struct COVID names[500],mails[500],passs[500];
    int i=0;
    char edit_name[50],edit_mail[50],edit_pass[500];
    bool r1,r2,r3;
    FILE *hptl;
    hptl=fopen("registration_for_user.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        while(!feof(hptl))
        {
            fscanf(hptl, "%s %s %s\n",&names[i].l_n,&mails[i].l_n,&passs[i].l_n);
            i++;
        }
    }
    fclose(hptl);

    hptl=fopen("registration_for_user.txt","w");
    fclose(hptl);

    hptl=fopen("registration_for_user.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {

        cout<< "                                        New Name : ";
        cin>>edit_name;
        cout<< "                                        New Mail : ";
        cin>>edit_mail;
        cout<< "                                        New Password : ";
        cin>>edit_pass;

        for(int j=0; j<=i; j++)
        {
            r1=strcmp(name,names[j].l_n);
            r2=strcmp(mail,mails[j].l_n);
            r3=strcmp(pass,passs[j].l_n);

            if(r1==1 && r2==1 && r3==1)
            {
                fprintf(hptl, "%s %s %s\n",names[j].l_n,mails[j].l_n,passs[j].l_n);
            }
            else if(r1==0 && r2==0 && r3==0)
            {
                fprintf(hptl, "%s %s %s\n",edit_name,edit_mail,edit_pass);
            }
        }
    }
    fclose(hptl);
    user_panel_login();
    system("cls");
}

void user_profile(char name[],char mail[],char pass[])
{
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Name : "<<name<<endl;
    cout<< "                                        Mail : "<<mail<<endl;
    cout<< "                                        password : "<<pass<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 Edit Profile.               |"<<endl;
    cout<< "                                        | 2 Back.                       |"<<endl;
    cout<< "                                        | 3 Exit.                       |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int xx;
    cin>>xx;
    switch(xx)
    {
    case 1:
        edit_user_profile(name,mail,pass);
        break;
    case 2:
        Home_user(name,mail,pass);
        break;
    case 3:
        break;
    }
    system("cls");
}

void edit_brows_info(char name[],char mail[],char pass[])
{

    /*
    struct COVID s1[500],s2[500],s3[500],s4[500],s5[500],s6[500],s7[500],s8[500],s9[500],s10[500],s11[500],s12[500],s13[500],s14[500],s15[500];

    char editInfo[500],newInfo[500];
    int i=0;
    bool r,r6,r9,r12,r15;

    FILE *hptl;
    hptl=fopen("browsing_info.txt","r");
    if(hptl==NULL)
        cout<< "file dose not exist"<<endl;
    else
    {
        while(!feof(hptl))
        {
            fscanf(hptl, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s",&s1[i].l_n,&s2[i].l_n,&s3[i].l_n,&s4[i].l_n,&s5[i].l_n,&s6[i].l_n,&s7[i].l_n,&s8[i].l_n,&s9[i].l_n,&s10[i].l_n,&s11[i].l_n,&s12[i].l_n,&s13[i].l_n,&s14[i].l_n,&s15[i].l_n);
            i++;
        }

    }
    fclose(hptl);

    hptl=fopen("browsing_info.txt","w");
    fclose(hptl);

    hptl=fopen("browsing_info.txt","a");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {

        for(int j=0; j<=i; j++)
        {
            r=strcmp(mail,s2[i].l_n);

            if(r==0)
            {
                cout<< "                                        What you want to edit? : ";
                cin>>editInfo;
                cout<< "                                        New Info : ";
                cin>>newInfo;

                r6=strcmp(editInfo,s6[i].l_n);
                r9=strcmp(editInfo,s9[i].l_n);
                r12=strcmp(editInfo,s12[i].l_n);
                r15=strcmp(editInfo,s15[i].l_n);
                if(r6==0)
                {
                    fprintf(hptl, "\n%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ",s1[i].l_n,s2[i].l_n,s3[i].l_n,s4[i].l_n,s5[i].l_n,newInfo,s7[i].l_n,s8[i].l_n,s9[i].l_n,s10[i].l_n,s11[i].l_n,s12[i].l_n,s13[i].l_n,s14[i].l_n,s15[i].l_n);
                }
                else if(r9==0)
                {
                    fprintf(hptl, "\n%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ",s1[i].l_n,s2[i].l_n,s3[i].l_n,s4[i].l_n,s5[i].l_n,s6[i].l_n,s7[i].l_n,s8[i].l_n,newInfo,s10[i].l_n,s11[i].l_n,s12[i].l_n,s13[i].l_n,s14[i].l_n,s15[i].l_n);
                }
                else if(r12==0)
                {
                    fprintf(hptl, "\n%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ",s1[i].l_n,s2[i].l_n,s3[i].l_n,s4[i].l_n,s5[i].l_n,s6[i].l_n,s7[i].l_n,s8[i].l_n,s9[i].l_n,s10[i].l_n,s11[i].l_n,newInfo,s13[i].l_n,s14[i].l_n,s15[i].l_n);
                }
                else if(r15==0)
                {
                    fprintf(hptl, "\n%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ",s1[i].l_n,s2[i].l_n,s3[i].l_n,s4[i].l_n,s5[i].l_n,s6[i].l_n,s7[i].l_n,s8[i].l_n,s9[i].l_n,s10[i].l_n,s11[i].l_n,s12[i].l_n,s13[i].l_n,s14[i].l_n,newInfo);
                }

            }
            else
            {
                fprintf(hptl, "\n%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s ",s1[i].l_n,s2[i].l_n,s3[i].l_n,s4[i].l_n,s5[i].l_n,s6[i].l_n,s7[i].l_n,s8[i].l_n,s9[i].l_n,s10[i].l_n,s11[i].l_n,s12[i].l_n,s13[i].l_n,s14[i].l_n,s15[i].l_n);
            }
        }
    }
    fclose(hptl);



    */
}

void brows_info(char name[],char mail[],char pass[])
{
    //struct COVID s1[500],s2[500],s3[500],s4[500],s5[500],s6[500],s7[500],s8[500],s9[500],s10[500],s11[500],s12[500],s13[500],s14[500],s15[500];
    struct COVID info[500],dot[500],data[500];
    int i=0;
    bool r;
    char s[500];

    FILE *hptl;
    hptl=fopen("browsing_info.txt","r");
    if(hptl==NULL)
        cout<< "file dose not exist"<<endl;

    /*
        else
        {
            while(!feof(hptl))
            {
                fscanf(hptl, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s",&s1[i].l_n,&s2[i].l_n,&s3[i].l_n,&s4[i].l_n,&s5[i].l_n,&s6[i].l_n,&s7[i].l_n,&s8[i].l_n,&s9[i].l_n,&s10[i].l_n,&s11[i].l_n,&s12[i].l_n,&s13[i].l_n,&s14[i].l_n,&s15[i].l_n);
                r=strcmp(mail,s2[i].l_n);
                if(r==0)
                {
                    cout<<s4[i].l_n<< " "<< s5[i].l_n<< " "<< s6[i].l_n<< " "<< s7[i].l_n<< " " <<s8[i].l_n<< " "<< s9[i].l_n<< " "<< s10[i].l_n<< " "<< s11[i].l_n<< " "<< s12[i].l_n<< " "<< s13[i].l_n<< " "<< s14[i].l_n<< " "<< s15[i].l_n<<endl;
                }
                i++;
            }

        }

    */










    else
    {
        while(!feof(hptl))
        {
            fscanf(hptl, "%s %s %s",&info[i].l_n,&dot[i].l_n,&data[i].l_n);
            r=strcmp(dot[i].l_n,mail);
            if(r==0)
            {
                fgets(s,1000,hptl);
                cout<<s<<endl;
            }
            i++;
        }

    }

    fclose(hptl);




    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 Edit Brows Info.            |"<<endl;
    cout<< "                                        | 2 Back.                       |"<<endl;
    cout<< "                                        | 3 Exit.                       |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int xx;
    cin>>xx;
    switch(xx)
    {
    case 1:
        edit_brows_info(name,mail,pass);
        break;
    case 2:
        Home_user(name,mail,pass);
        break;
    case 3:
        break;
    }



}

void brows_matching_data(char name[],char mail[],char pass[])
{
    FILE *hptl;
    hptl=fopen("browsing_info.txt","a");
    if(hptl==NULL)
        cout<< "file dose not exist"<<endl;
    else
    {
        fprintf(hptl, "\n%s %s %s ",name,mail,pass);
    }
    fclose(hptl);
    Home_user(name,mail,pass);
}

void about_us_show()
{
    FILE *hptl;
    char s1[500];
    hptl=fopen("about_us.txt","r");
    if(hptl==NULL)
        cout<< "File does not exist."<<endl;
    else
    {
        while(!feof(hptl))
        {
            fgets(s1,200,hptl);
            cout<< "                                        " <<s1;
        }
    }
}

void Home_user(char name[],char mail[],char pass[])
{
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #           Home page           #"<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 Hospital                    |"<<endl;
    cout<< "                                        | 2 Doctors                     |"<<endl;
    cout<< "                                        | 3 COVID test location         |"<<endl;
    cout<< "                                        | 4 Hot line number             |"<<endl;
    cout<< "                                        | 5 Prevent COVID & first aid   |"<<endl;
    cout<< "                                        | 6 Medicine for you            |"<<endl;
    cout<< "                                        | 7 User profile                |"<<endl;
    cout<< "                                        | 8 Browsing Info               |"<<endl;
    cout<< "                                        | 9 Logout                      |"<<endl;
    cout<< "                                        | 10 About Us                   |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose option : ";
    int a;
    cin>>a;
    switch(a)
    {
    case 1:
        system("cls");
        hospital_user(name,mail,pass);
        break;

    case 2:
        system("cls");
        doctors_user(name,mail,pass);
        break;
    case 3:
        system("cls");
        covid_test_location_user(name,mail,pass);
        break;
    case 4:
        system("cls");
        hot_line_number_user(name,mail,pass);
        break;
    case 5:
        system("cls");
        prevent_covid_first_aid_user(name,mail,pass);
        break;
    case 6:
        system("cls");
        medicine_for_you();
        break;
    case 7:
        user_profile(name,mail,pass);
        break;
    case 8:
        brows_info(name,mail,pass);
        break;
    case 9:
        system("cls");
        main();
        break;
    case 10:
        about_us_show();
        break;
    }
}

void user_panel()
{
    cout<< "                                                                         "<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #     Welcome To User Panel     #"<<endl;
    cout<< "                                        #################################"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        | 1 User Panel Registration.    |"<<endl;
    cout<< "                                        | 2 User Panel Login.           |"<<endl;
    cout<< "                                        | 3 Back.                       |"<<endl;
    cout<< "                                        | 4 Exit.                       |"<<endl;
    cout<< "                                        ---------------------------------"<<endl;
    cout<< "                                        Choose Option : ";
    int n;
    cin>>n;
    switch(n)
    {
    case 1:
        system("cls");
        user_panel_registration();
        break;
    case 2:
        system("cls");
        user_panel_login();
        break;
    case 3:
        system("cls");
        main();
        break;
    case 4:
        break;
    }
}

void user_panel_registration()
{
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #       For Registration        #"<<endl;
    cout<< "                                        #################################"<<endl;

    FILE *hptl;
    char name[50],mail[50],pass[50];
    hptl=fopen("registration_for_user.txt","a");
    if(hptl==NULL)
        cout<< "file dose not exist"<<endl;
    else
    {
        cout<< "                                        Name : ";
        cin>>name;
        cout<< "                                        Mail : ";
        cin>>mail;
        cout<< "                                        Password : ";
        cin>>pass;
        fprintf(hptl, "%s %s %s\n",name,mail,pass);
    }
    fclose(hptl);
    system("cls");
    user_panel_login();
}
void user_panel_login()
{
    cout<< "                                        #################################"<<endl;
    cout<< "                                        #           For Login           #"<<endl;
    cout<< "                                        #################################"<<endl;
    while(1)
    {


        FILE *hptl;
        char name[50],name2[50],mail[50],pass[50],pass2[50];
        bool r1,r2,r3;
        int k=1;
        hptl=fopen("registration_for_user.txt","r");
        if(hptl==NULL)
            cout<< "File dose not exist."<<endl;
        else
        {
            cout<< "                                        ---------------------------------"<<endl;
            cout<< "                                        Name / Mail : ";
            cin>>name2;
            cout<< "                                        Password : ";
            cin>>pass2;
            cout<< "                                        ---------------------------------"<<endl;
            while(!feof(hptl))
            {
                fscanf(hptl, "%s %s %s",&name,&mail,&pass);
                r1=strcmp(name,name2);
                r2=strcmp(mail,name2);
                r3=strcmp(pass,pass2);
                if( (r1==0 || r2==0) && r3==0)
                {
                    system("cls");
                    //Home_user(name,mail,pass);
                    brows_matching_data(name,mail,pass);
                    k=0;
                    /*
                                        hptl=fopen("browsing_info.txt","a");
                                        if(hptl==NULL)
                                            cout<< "file dose not exist"<<endl;
                                        else
                                        {
                                            fprintf(hptl, "\n%s %s %s ",name,mail,pass);
                                        }
                                        fclose(hptl);
                    */
                    break;
                }
            }
            if(k==1)
                cout<< "                                        Oops! wrong information."<<endl;
            else if(k==0)
                break;
        }
        fclose(hptl);
    }
}
///############### user panel (end) #################///
