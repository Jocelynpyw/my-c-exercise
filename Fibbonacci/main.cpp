#include <iostream>

using namespace std;

void sac_a_dos (int poid[],int valeur[],int taille,int valeur_max){
    int w=0;
    int i=0;
    int valeur_total=0;
    float rpv[taille];
    for ( i=0 ;i<=taille;i++){
        rpv[i]=valeur[i]/poid[i];
        //cout<<rpv[i]<<endl;
    }
    //sort(rpv.begin(),rpv.end(),ordre_descendant);
    //std::sort(std::begin(rpv), std::end(rpv), std::greater<>());


    for (int i=0 ;i<=taille;i++){
        if(valeur_max - w >= poid[i]){
          w=w+poid[i];
          valeur_total=valeur_total+valeur[i];
          cout<<rpv[i]<<endl;

       }
    }
    cout<<"La Valeur Maximale du sac est de : "<<valeur_total<<endl;

}
int main()
{
    int poid[5] = {1000, 2, 3, 17, 50};
    int valeur[5] = {1000, 200, 123, 117, 500};
    sac_a_dos (poid,valeur,5,23);

    return 0;
}
