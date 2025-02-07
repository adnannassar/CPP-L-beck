#include <string>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Instrument{
    private:
        string hersteller;
        double lautstaerke;

    protected:
        Instrument(string hersteller, double lautstaerke){
            this->hersteller = hersteller;
            this-> lautstaerke = lautstaerke;
        }
    public:
           double getLautstaerke(){ return this -> lautstaerke;}
           void setLautstaerke(double lautstaerke){this -> lautstaerke = lautstaerke;}
           virtual string gibArt() = 0;
};

class Geige : public Instrument{
    public:
        Geige(string hersteller, double lautstaerke): Instrument(hersteller, lautstaerke){}
        string gibArt() override {return "Saiteninstrument";}
};

class Regelbar{
    public:
       virtual void lauter() = 0;
};

class Egeige : public Geige , Regelbar{
    public:
        Egeige(string hersteller, double lautstaerke): Geige(hersteller, lautstaerke){}
        void lauter() override {
            int lautstaerke = getLautstaerke();
            int neueLautstaerke = lautstaerke + 10;
            if(neueLautstaerke <= 100){
                setLautstaerke(neueLautstaerke);
            }
        }
};

class Band{
    private:
        string name;
        string herkunftsort;
        vector<Instrument*> instrumente;
    public:
        Band(string name, string herkunftsort, vector<Instrument*> instrumente){
            this->name = name;
            this->herkunftsort = herkunftsort; 
            this->instrumente = instrumente;
        }
        void bergruessung(){
          cout<<"Hallo, wir sind " << this->name << " aus " <<this->herkunftsort <<"!"<<endl;   
        }

        bool zurDinnerpartyGeeignet(){
            double gesamteLautstraerke = 0.0;
            double tempSumme = 0.0;
            for(size_t i = 0 ; i < instrumente.size(); i++){
                tempSumme = pow(10, (instrumente[i] -> getLautstaerke() /10));
            }
            gesamteLautstraerke = 10 * log10(tempSumme);

            return gesamteLautstraerke <= 55;
        }
};

int main(){
    Geige *g1 = new Geige("Thomann", 30);
    Geige *g2 = new Geige("Stradivari", 40);
    Egeige *eg1 = new Egeige("Yamaha", 50);

    eg1 -> lauter();

    vector<Instrument*> bandInstrumente = {g1, g2, eg1};

    Band *b1 = new Band("The Strings", "Beriln", bandInstrumente);

    b1->bergruessung();

    bool geeignet = b1->zurDinnerpartyGeeignet();
    if(geeignet){
        cout<<"Zur Dinnerparty geeignet: Ja."<<endl; 
    }else{
         cout<<"Zur Dinnerparty geeignet: Nein."<<endl; 
    }

    return 1;
}



