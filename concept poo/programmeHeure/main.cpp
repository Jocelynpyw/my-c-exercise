#include <iostream>

using namespace std;
//using namespace std::string;
// Declaration et definition de la classe montre debut
class Montre {
private:
    int heure=0;
    int minute=0;

public:
    void setHeure(int heure);
    void setMinute(int minute);
    void getTime ();
    Montre(int heure, int minute);
    Montre();
    void avancerHeure();

};

void Montre::setHeure(int heure ){
 this->heure=heure;
}
void Montre::setMinute(int minute){
 this->minute=minute;
}

void Montre::getTime(){
    cout<<"l'heure est : "<<this->heure<<"h "<<this->minute<<"min"<<endl;
}

Montre::Montre(int heure, int minute ){
    this->heure=heure;
    this->minute=minute;
}
Montre::Montre(){
this->heure=0;
this->minute=0;
};

void Montre::avancerHeure(){
    this->minute+=1;
    if(this->minute>=60 ){

        this->heure+=1;
        this->minute=this->minute%60;
    }
}
// Declaration et definition de la classe Montre Fin
// Declaration et definition de la classe Personne debut
class Personne {
private:
    string nom;
    Montre m;

public:
    string getNom();
    void porterMontre(Montre m);
    void retirerMontre();
    void demanderHeure (Personne P);
    Personne (string nom);

};

Personne::Personne(string name){
    this->nom = name;
}


string Personne::getNom(){
    return this->nom;
}
void Personne::retirerMontre(){
   // this->m;
}
void Personne::porterMontre(Montre m){
    this->m = m;
}

void Personne::demanderHeure(Personne p){
    p.m.getTime();
}



// Declaration et definition de la classe Personne Fin

int main()
{
    /*Montre m2(0,0);
    Montre m1(20,59);
    m1.getTime();
    m1.avancerHeure();
    m1.getTime();
    m2=m1;
    m2.getTime();
    return 0;*/
    Montre m1(10,49);
    Personne p1("parfait");
    p1.porterMontre(m1);

    Personne p2("Parfait");
    p2.demanderHeure(p1);

    Montre m3(13,40);
}
