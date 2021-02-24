#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,p,i,s=0,c,ok,a,b,k,p1,p2,p3,p4,p5,max,min;
    float pi;
    pi=3.14;
    system("color 7");
   while(p!=6)
{
    system("cls");
    cout<<"            Algoritmi elementari in informatica si probleme de matematica"<<endl<<endl<<endl;
    cout<<"1.Algoritmi cu cifrele unui numar"<<endl;
    cout<<"2.Algoritmi cu divizorii unui numar introdus"<<endl;
    cout<<"3.Algoritmi cu un singur numar"<<endl;
    cout<<"4.Algoritmi cu 2 numere"<<endl;
    cout<<"5.Probleme de geometrie"<<endl;
    cout<<"6.Iesire"<<endl;
    cout<<"Alegeti optiunea dorita:";cin>>p;
  switch(p){

case 1:
      {while(p1!=5)
    {  system("cls");
    cout<<"               Algoritmi cu cifrele unui numar"<<endl<<endl;
    cout<<"1.Suma cifrelor unui numar"<<endl;
    cout<<"2.Numarul de cifre ale unui numar"<<endl;
    cout<<"3.Cifra maxima a unui numar"<<endl;
    cout<<"4.Cifra minima a unui numar"<<endl;
    cout<<"5.Iesire"<<endl;
    cout<<"Alegeti optiunea dorita:";cin>>p1;
    switch (p1){
    case 1:{cout<<"Introduceti numarul:";cin>>n;
    while(n!=0){c=n%10;s=s+c;n=n/10;}
    cout<<"Suma cifrelor:"<<s<<endl;
    break;}

    case 2:{cout<<"Introduceti numarul:";cin>>n;
    while(n!=0){s=s+1;n=n/10;}
    cout<<"Numarul de cifre:"<<s<<endl;
    break;}

    case 3:{cout<<"Introduceti numarul:";cin>>n;
    max=0;
    while(n!=0)
        {if(n%10>max){max=n%10;n=n/10;}}
        cout<<"Cifra maxima este:"<<max<<flush;
        system("pause");
    break;}

    case 4:{cout<<"Introduceti numarul:";cin>>n;
    min=9;
    while(n!=0){
        if(n%10<min){min=n%10;n=n/10;}
        cout<<"Cifra minima este:"<<min<<endl;
    break;}}
     }}}


system("cls");

case 2:while(p2!=4)
      {
          system("cls");

      {cout<<"              Algoritmi cu divizorii unui numar introdus"<<endl<<endl;
    cout<<"1.Divizorii proprii ai unui numar"<<endl;
    cout<<"2.Verificarea daca un numar este prim"<<endl;
    cout<<"3.Descompunerea in factori primi"<<endl;
    cout<<"4.Iesire"<<endl;
    cout<<"Alegeti optiunea dorita:";cin>>p2;

    switch(p2){
    case 1:{cout<<"Introduceti numarul:";cin>>n;
    cout<<"Divizorii proprii ai numarului sunt:";
    for(i=2;i<=n/2;i++)if(n%i==0)cout<<i<<" ";
    break;}

    case 2:{cout<<"Introduceti numarul:";cin>>n;
    for(i=2;i<=n/2;i++)if(n%i==0)ok=0;
    if(ok==1)cout<<"Numarul este prim"<<endl;
    else cout<<"Numarul nu este prim"<<endl;
    break;}

    case 3:{cout<<"Introduceti numarul:";cin>>n;
    b=2;
    while(n>1)
    {
        a=0;
        while(n%b==0){a++;n=n/10;}
        if(a)cout<<b<<" la puterea "<<a<<endl;
        b++;
        if(n>1&&b*b>n)b=n;}
        break;}

    }
     }}


case 3:while(p3!=3){

     system("cls");

    cout<<"               Algoritmi cu un singur numar"<<endl;
    cout<<"1.Verificarea daca un numar este palindrom"<<endl;
    cout<<"2.Verificarea paritatii unui numar"<<endl;
    cout<<"3.Iesire"<<endl;
    cout<<"Alegeti optiunea dorita:";cin>>p3;
    switch(p3){

    case 1:{cout<<"Introduceti numarul:";cin>>n;
    c=0;a=n;
    while(n!=0){c=c*10+n%10;n=n/10;}
    if(c==a)cout<<"Numarul este palindrom";
    else cout<<"Numarul nu este palindrom";
    break;}

    case 2:{cout<<"Introduceti numarul:";cin>>n;
    if(n%2==0)cout<<"Numarul este par"<<endl;
    else cout<<"Numarul este impar"<<endl;
    break;}
    }}


case 4:{while(p4!=5)
        {
        system("cls");

    cout<<"              Algoritmi cu 2 numere"<<endl;
    cout<<"1.CMMDC a doua numere"<<endl;
    cout<<"2.CMMMC a doua numere"<<endl;
    cout<<"3.Numarul minim"<<endl;
    cout<<"4.Numarul maxim"<<endl;
    cout<<"5.Iesire"<<endl;
    cout<<"Alegeti optiunea dorita:";cin>>p4;
     switch(p4){
    case 1:{cout<<"Introduceti numerele:";cin>>a>>b;
    while(a!=b)
    {if(a>b)a=a-b;
    else b=b-a;}cout<<"Cel mai mare dizivor comun este: "<<a;
    break;system("pause");}
    system("pause");

    case 2:{cout<<"Introduceti numerele:";cin>>n>>k;
    a=n;b=k;
    while(a!=b)
    {if(a>b)a=a-b;
    else b=b-a;} cout<<"Cel mai mic multiplu comun este: "<<(n*k)/a;
    break;}

    case 3:{cout<<"Introduceti numerele:";cin>>a>>b;
    if(a<b)cout<<"Numarul "<<a<<" este minim";
    else if(a==b)cout<<"Numerele sunt egale";
    else cout<<"Numarul "<<b<<" este minim";
    break;}

    case 4:{cout<<"Introduceti numerele:";cin>>a>>b;
    if(a>b)cout<<"Numarul "<<a<<" este maxim";
    else if(a==b)cout<<"Numerele sunt egale";
    else cout<<"Numarul "<<b<<" este maxim";
    break;}

  }}}




case 5:{while(p5!=10)
        {system("cls");
    cout<<"              Probleme de geometrie"<<endl;
    cout<<"1.Aria si perimetrul in triunghi"<<endl;
    cout<<"2.Aria si perimetrul in paralelogram"<<endl;
    cout<<"3.Aria si perimetrul in dreptunghi"<<endl;
    cout<<"4.Aria si perimetrul in patrat"<<endl;
    cout<<"5.Aria si diametrul in cerc"<<endl;
    cout<<"6.Aria si volumul in cub"<<endl;
    cout<<"7.Aria si volume in cilindru"<<endl;
    cout<<"8.Aria si volume in con"<<endl;
    cout<<"9.Aria si volumul in sfera"<<endl;
    cout<<"10.Iesire"<<endl;
    cout<<"Alegeti optiunea dorita:";cin>>p5;
    switch(p5){
    case 1:{cout<<"Introduceti laturile triunghiului:";cin>>n>>a>>b;
    cout<<"Introduceti inaltimea triunghiului:";cin>>k;
    cout<<"Perimetru:"<<(n+a+b);
    max=a;
    if(n>max)max=n;if(b>max)max=b;
    cout<<"Aria:"<<(max*k)/2;
    break;}

    case 2:{cout<<"Introduceti laturile paralelogramului:";cin>>a>>b;
    cout<<"Introduceti inaltimea paralelogramului:";cin>>k;
    cout<<"Perimetru:"<<(a*2+b*2);
    if(a>b)cout<<"Aria:"<<a*k;
    else cout<<"Aria:"<<b*k;
    break;}

    case 3:{cout<<"Introduceti laturile dreptunghiului:";cin>>a>>b;
    cout<<"Perimetru"<<(2*a+2*b);
    cout<<"Aria:"<<a*b;
    break;}

    case 4:{cout<<"Introduceti latura patratului:";cin>>a;
    cout<<"Perimetru:"<<4*a;
    cout<<"Aria:"<<a*a;
    break;}

    case 5:{cout<<"Introduceti raza cercului:";cin>>a;
    cout<<"Diamentrul cercului:"<<a*2;
    cout<<"Aria cercului:"<<a*a*pi;
    break;}

    case 6:{cout<<"Introduceti latura cubului:";cin>>a;
    cout<<"Aria:"<<6*a*a;
    cout<<"Volumul:"<<a*a*a;
    break;}

    case 7:{cout<<"Introduceti raza cilindrului:";cin>>a;
    cout<<"Introduceti inaltimea cilindrului:";cin>>b;
    cout<<"Aria:"<<2*pi*a*(a+b);
    cout<<"Volumul:"<<pi*a*a*b;
    break;}

    case 8:{cout<<"Introduceti raza conului:";cin>>a;
    cout<<"Introduceti inaltimea conului:";cin>>b;
    cout<<"Aria:"<<pi*a*(a+b);
    cout<<"Volumul:"<<(pi*a*a*b)/3;
    break;}

    case 9:{cout<<"Introduceti raza sferei:";cin>>a;
    cout<<"Aria:"<<4*pi*a*a;
    cout<<"Volumul:"<<4*pi*a*a*a/3;
    break;}
    system("pause");

} } }



  }
system("pause");


}


}
