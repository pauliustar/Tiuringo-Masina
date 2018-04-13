#include <iostream>
#include <fstream>

using namespace std;
int index(1);
class tiuringas
{
  private:
    int pozicija;
    string eilute, pavadinimas, esama_busena[100], nauja_busena[100];
    char esamas_simb[100], naujas_simb[100], kryptis[100];
  public:
    void ived()
    {
    cout << "Iveskite skaitomo failo pavadinima, pvz: 2.txt: ";
    cin >> pavadinimas;
    ifstream duom(pavadinimas.c_str());
    duom >> pozicija;
    duom >> eilute;
    cout << "Pradine eilute = " << eilute << endl;
    duom >> esama_busena[0] >> esamas_simb[0] >> naujas_simb[0] >> kryptis[0] >> nauja_busena[0];
    while(!duom.eof()){
    duom >> esama_busena[index] >> esamas_simb[index] >> naujas_simb[index] >> kryptis[index] >> nauja_busena[index];
    index++;
    }
    index--;
    duom.close();
    }
    void masina()
    {
        int ilgis = eilute.length();
        string laikina = "0";
        while(pozicija!=eilute[ilgis-1])
        {
            for(int i = 0; i<index; i++){
                if(esama_busena[i] == laikina){
                    if(esamas_simb[i] == eilute[pozicija]){
                        eilute[pozicija] = naujas_simb[i];
                        laikina = nauja_busena[i];
                            if(kryptis[i] == 'R')
                                pozicija++;
                            else if(kryptis[i] == 'L')
                                pozicija--;
                    }
                }
            }
        cout << eilute << endl;
        }

    }
    void isved()
    {
    cout << "Pradine pozicija = " << pozicija << endl;
    for(int i= 0; i<index; i++)
    {
    cout << esama_busena[i] << " " <<esamas_simb[i] << " " <<naujas_simb[i] << " " << kryptis[i] << " " << nauja_busena[i] << endl;
    }
    }
};
int main()
{
    tiuringas veiksmas;
    veiksmas.ived();
    veiksmas.isved();
    veiksmas.masina();
}
