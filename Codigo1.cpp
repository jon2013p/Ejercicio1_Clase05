#include<iostream>
using namespace std;

int main()
{
    double tllamada,ptotal,pinicial,cdia,chor,impd,imph;

    cout<<"Que día de la semana se realizó la llamada? (1-7)"<<endl;
    cin>>cdia;
    cout<<"En que horario se realizó la llamada ? (1=matutino,2=vespertino) "<<endl;
    cin>>chor;
    cout<<"Cuántos minutos duró la llamada? "<<endl;
    cin>>tllamada;

    if(tllamada>0 && tllamada<5){
        pinicial=tllamada;
    }
    else if (tllamada>5 && tllamada<8){
        pinicial=((tllamada-4)*0.80)+5;
    }
    else if (tllamada>8 && tllamada<10){
        pinicial=((tllamada-7)*0.70)+5+2.4;
    }
    else if (tllamada>10){
        pinicial=((tllamada-9)*0.50)+5+2.4+2.1;
    }        

    if (cdia=7){
        impd=pinicial*0.03;
    }
    else {
        impd=0;
    }

    if (chor=1){
        imph=pinicial*0.15;
    }
    else{
        imph=pinicial*0.10;
    }

    ptotal=pinicial+impd+imph;

    cout<<"El valor a pagar es: "<<ptotal;

    return 0;
}