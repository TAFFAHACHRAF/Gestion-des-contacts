#include <iostream>
#include "annuaire.hpp"

using namespace std;


int main(){
    Annuaire an = Annuaire();
    an.ajouter("VVV","2352135325","test@mail.com");
    an.ajouter("AAA","12351235","ahmed@mail.com");  
    an.ajouter("ZZZ","1241321","ismail@mail.com");  
    an.getByMail("PPP@mail.com"); 
    cout<<endl;
    an.getByName("ZZZ"); 
    cout<<endl;
    an.getByName("DDD"); 
    cout<<endl;
    an.getByTel("12351235"); 
    cout<<endl;
    an.supprimer("test");
    cout<<endl;
    an.getByName("test"); 
}
