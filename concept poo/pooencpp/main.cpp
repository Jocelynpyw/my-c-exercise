#include <iostream>
#include "Television.h"

//using namespace std::string;
void Television::Allumer(){
 this->estAllumee=true;
}

void Television::Eteindre(){
    this->estAllumee=false;
}
int Television::getVolume(){
    return this->volume;
}
void Television::ChangerChaine(int c){
 this->chaine=this->chaine + c;
}

void Television::setVolume(int vol){
    this->volume =vol;
}
string Television::getMarque(){
    return this->marque;
}
int Television::getChaine(){
    return this->chaine;
}
Television::Television(string marque){
    this->marque=marque;
}

int main()
{
    Television tv1("Jocelyn Television");
    tv1.setVolume(23);
    cout<<"Nous sommes actuellement au volume tour 1 : "<<tv1.getVolume()<<endl;
    tv1.setVolume(100);
    cout<<"Nous sommes actuellement au volume tour 2 : "<<tv1.getVolume()<<endl;

    cout<<"La marque de la television est"<<" "<<tv1.getMarque()<<endl;

   // cout << "Hello world!" << endl;
    return 0;
}
