#include<iostream>
using namespace std;

int Percentual(int Total, int Votos)
{
    double x;
    x= Votos*100/Total;
    return x;
}

main()
{
    int Votos[24], i ,j, Num;
    int Maior=0, MaisVotado;
    double Taxa[24], VotosD, Total=0;
    for(i=0;i<=23;i++)
    {
        Votos[i]=0;
        Taxa[i]=0;
    }
    do
    {
        cout<<"Digite o jogador que vc achou melhor:  ";
        cin>>Num;
        if(Num>0 && Num<23)
        {
            Votos[Num]++;
            Total++;
        }
    }while(Num!=0);

    for(j=1; j<=23; j++)
    {
        if(Maior<Votos[j])
        {
            Maior=Votos[j];
            MaisVotado=j;
        }
    }

    for(j=1; j<=23; j++)
    {
        VotosD=Votos[j];
        Taxa[j]=VotosD/Total*100;
        if(MaisVotado==j)
        {
            cout<<"O jogador mais votado foi "<<j<<", que teve "<<Votos[j]<<" votos -> "<<Taxa[j]<<"%"<<endl;
        }else
        {
            cout<<"Jogador "<<j<<" teve "<<Votos[j]<<" votos -> "<<Taxa[j]<<"%d"<<endl;
        }
    }
}
