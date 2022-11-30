#include <string>

using namespace std;

class Television{
private:
    //les attributs
    int volume;
    bool estAllumee;
    int chaine=0;
    string marque;

public:
    void Allumer();
    void Eteindre();
    int getVolume();
    int getChaine();
    void ChangerChaine(int c);
    void setVolume(int vol);
    string getMarque();
    // constructeur de ma classe
    Television(string marque);
};
