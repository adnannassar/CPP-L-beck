#include <iostream>

using namespace std;

class Essbar{
    public:
        virtual int ermittleNaehwert() = 0;
};

class Trockenfutter : public Essbar{
    private:
        int kohlenhydrate;

    public:
        Trockenfutter(int kohlenhydrate);
        int ermittleNaehwert() override;
        
        int getKohlenhydrate(){return kohlenhydrate;}
        void setKohlenhydrate(int kohlenhydrate) {this-> kohlenhydrate = kohlenhydrate;}
};

Trockenfutter::Trockenfutter(int kohlenhydrate){
    this -> kohlenhydrate = kohlenhydrate;
}

int Trockenfutter::ermittleNaehwert(){
    return kohlenhydrate;
}



class Nassfutter : public Essbar{
    private:
        int protiene;
        int fett;

    public:
        Nassfutter(int protiene, int fett);
        int ermittleNaehwert() override;
        
        int getProtiene(){return protiene;}
        void setProtiene(int protiene) {this -> protiene =  protiene;}
       
        int getFett(){return fett;}
        void setFett(int fett) {this-> fett = fett;}
};

Nassfutter::Nassfutter(int protiene, int fett){
    this -> protiene = protiene;
    this-> fett = fett;
}

int Nassfutter::ermittleNaehwert(){
    return protiene + fett;
}


class Tier{
    private:
        string name;
        int hunger;

    protected:
        int alter;
        Tier(string name, int alter);

    public:
        string getName() { return name;}
        void setName(string name) { this -> name = name ;}
        
        int getHunger(){return hunger;}
        void setHunger(int hunger) {this -> hunger = hunger;}

        virtual bool istAusgewachsen() = 0;
        void futtern(Essbar* futter);
        void verdauen();
};

Tier::Tier(string name, int alter){
    this -> name = name;
    this -> alter = alter;
    this -> hunger = 100;
}

void Tier::futtern(Essbar* futter){
   int futterNeahrwert = futter-> ermittleNaehwert();
   if(futterNeahrwert > 0){
        this -> hunger -= futterNeahrwert;
   }
}

void Tier::verdauen(){
    this -> hunger += 100;
    cout<<name << " hat noch " << hunger << " Hunger" <<endl;
}


class Tiger : public Tier{
    public:
        Tiger(string name, int alter);
    
    public:
        bool istAusgewachsen() override;
};
Tiger::Tiger(string name, int alter): Tier(name, alter){}
bool Tiger::istAusgewachsen(){return alter >= 6;}

class Elefant : public Tier{
    public:
        Elefant(string name, int alter);
    
    public:
        bool istAusgewachsen() override;
};

Elefant::Elefant(string name, int alter): Tier(name, alter){}
bool Elefant::istAusgewachsen(){return alter >= 20;}


int main(){
    Tiger *tiger = new Tiger("Tiger", 5);
    
    Elefant *elfant = new Elefant("Elefant", 22);

    Trockenfutter *trockenfutter = new Trockenfutter(50);

    Nassfutter* nassfutter = new Nassfutter(20, 20);

    cout << "Tiger hat " << tiger->getHunger() << " Hunger"<<endl;
    
    tiger -> futtern(nassfutter);

    cout << "Tiger hat " << tiger->getHunger() << " Hunger" <<endl;

    tiger -> verdauen();

    cout << (tiger -> istAusgewachsen() ? "Tiger ist Ausgewachsen" : "Tiger ist nicht Ausgewachsen") << endl;
    
    return 0;
}