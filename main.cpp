#include <iostream>
#include <math.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
using namespace std;


    float sina(float A, float C)
    {
        float wynik;
        wynik= A/C;
        return wynik;
    }
    float cosa(float B, float C)
    {
        float wynik;
        wynik=B/C;
        return wynik;
    }

    float tga(float A, float B)
    {
        float wynik;
        wynik = A/B;
        return wynik;
    }
     float ctga(float B, float A)
    {
        float wynik;
        wynik = B/A;
        return wynik;
    }




float a,b,c;
int main()
{

    while(1==1)
    {


    cout << "Podaj a b c wzgledem konta alfa(jezeli nie znasz jakies dlugosci wstaw 0): " ;
    cin>>a>>b>>c;

    if(a==0&&b!=0&&c!=0)
    {
        int b1=b*b;
        int c1=c*c;

        a=c1-b1;
        a=sqrt(a);

    }
    else
        if(b==0&&a!=0&&c!=0)
    {
        int a1=a*a;
        int c1=c*c;
        b=c1-a1;
        b=sqrt(b);
    }
      else
        if(b!=0&&a!=0&&c==0)
    {
            int a1 =a*a;
            int b1=b*b;
            c=a1+b1;
            c=sqrt(c);
    }
    else
    if(b!=0&&a==0&&c==0||b==0&&a!=0&&c==0||b==0&&a==0&&c!=0||b==0&&a==0&&c==0)
    {
        cout<<" 2 albo 3 Liczby sa rowne zero program nie wie jak policzyc ";

    }
    system("cls");
    cout<<"A rowna sie: "<<a<<endl;
    cout<<"B rowna sie: "<<b<<endl;
    cout<<"C rowna sie: "<<c<<endl;
    cout<<endl;
    int flaga=1;


    while(flaga=1)
{
    cout<<"Wybierz co chcesz obliczyc"<<endl;
    cout<<"_________________________"<<endl;
    cout<<"1: sinus kata alfa"<<endl;
    cout<<"2: cosinus kata alfa"<<endl;
    cout<<"3: tangens kata alfa"<<endl;
    cout<<"4: cotangens kata alfa"<<endl;
    cout<<"5: Wszystko w kacie alfa"<<endl;

    cout<<"6: sinus kata beta"<<endl;
    cout<<"7: cosinus kata beta"<<endl;
    cout<<"8: tangens kata beta"<<endl;
    cout<<"9: cotangens kata beta"<<endl;
    cout<<"0: Wszystko w kacie beta"<<endl;



char wybor;
wybor=getch();
    switch( wybor )
{
case '1':
    cout<<"Sinus w kacie alfa = "<<sina(a,c);
    break;

    case '2':
    cout<<"cosinus w kacie alfa "<<cosa(b,c);
    break;

     case '3':
    cout<<"Tangens w kacie alfa = "<<tga(a,b);
    break;

     case '4':
    cout<<"Cotangens w kacie alfa = "<<ctga(b,a);
    break;

     case '5':
    cout<<"Sinus alfa = "<<sina(a,c)<<endl;
    cout<<"Cosinus alfa = "<<cosa(b,c)<<endl;
    cout<<"Tangens alfa = "<<tga(a,b)<<endl;
    cout<<"Cotangens alfa = "<<ctga(b,a)<<endl;
    break;
       case '6':
    cout<<"Sinus w kacie beta = "<<cosa(b,c);
    break;
    case '7':
    cout<<"Cosinus w kacie beta = "<<sina(a,c);
    break;
     case '8':
    cout<<"Tangens w kacie beta = "<<ctga(b,a);
    break;
     case '9':
    cout<<"Cotangens w kacie beta = "<<tga(a,b);
    break;
       case '0':
    cout<<"Sinus beta = "<<sina(a,c)<<endl;
    cout<<"Cosinus beta = "<<cosa(b,c)<<endl;
    cout<<"Tangens beta = "<<tga(a,b)<<endl;
    cout<<"Cotangens beta = "<<ctga(b,a)<<endl;
    break;

default:
    cout<<"Nic nie wybrales !!!!!";
 Sleep( 2500 );
 system("cls");
    break;
}

    cout<<" Co dalej?"<<endl;
    cout<<"1: Powrot do menu wyboru"<<endl;
    cout<<"2: Wyjscie z programu"<<endl;

    char wybor2;
wybor2=getch();
 switch( wybor2 )
 {
    case '1':
    system("cls");
    break;
    case '2':
        exit(0);
        break;


        default:
        cout<<"Nic nie wybrales!!!!!";
        break;
 }

}
    }
    return 0;
}
