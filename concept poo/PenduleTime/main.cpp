#include <iostream>

using namespace std;

class Time{
private:
     int heure=05;
     int minute=38;
     int seconde=40;
public:
    void setHeure(int a );
    void setMinute( int a);
    void setSeconde( int a);
    int getHeure();
    int getSeconde( );
    int getMinute();
    void getTime();
    Time(int heure , int minute , int seconde );



};

int Time::getHeure(){
    return this->heure;
}
int Time::getMinute(){
    return this->minute;
}
int Time::getSeconde(){
    return this->seconde;
}

void Time::setHeure(int a){
  this->heure=a;
}

void Time::setMinute(int a){
  this->minute=a;
}

void Time::setSeconde(int a){
  this->seconde=a;
}

void Time::getTime(){
    cout<<"Il est: " << this->heure<<"h "<<this->minute<<"min "<<this->seconde<<"seconde"<< endl;

}
 Time::Time(int a ,int b ,int c){

    this->heure=heure;
    this->minute=minute;
    this->seconde=seconde;
 }
int main()
{
    Time t1(11,22,44);
    t1.getTime();
    t1.setHeure(10);
    t1.getTime();
    t1.setMinute(50);
    t1.getTime();
    //cout << "Hello world!" << endl;
    return 0;
}
