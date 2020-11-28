#include "pokemon.h"
#include <iostream>
#include <string>
#include <fstream>


int main()
{
    Pok1 PokOne("Pikachu", 10000,5000,12000,50000,"Thunderbolt","Thunder Barrier");
    std::cout << PokOne.getName() << "; " << PokOne.getHP() << " HP; " << PokOne.getAttack() << " Attacks; " << PokOne.getDefense() << " Defense; " << PokOne.getSpeed() << " Speed; " << PokOne.getSpec_attack() << "; " << PokOne.getSpec_defense() << std::endl;

    Pok2 PokTwo("Dno", 1000,500,1200,5000,"bottom impact","bottom barrier");
    Pok3 PokTre("Bog", 10500,5060,12340,90000,"Singularity of Terror","Denier of laws");

    std::ofstream myfile ("myfile.txt");

    if(!myfile.is_open()) {
        std::cout << "Error open" << std::endl;
    } else {
        std::cout << "open" << std::endl;
        myfile << "{\n";
        myfile << "\t\"pokemons\": [\n";
        myfile << "\t\t{\n";
        myfile << "\t\t\t\"Name\":" << PokOne.getName() << ",\n";
        myfile << "\t\t\t\"HP\":" << PokOne.getHP() << ",\n";
        myfile << "\t\t\t\"Attacks\":" << PokOne.getAttack() << ",\n";
        myfile << "\t\t\t\"Defense\":" << PokOne.getDefense() << ",\n";
        myfile << "\t\t\t\"Speed\":" << PokOne.getSpeed() << ",\n";
        myfile << "\t\t\t\"Spec_Attacks\":" << PokOne.getSpec_attack() << ",\n";
        myfile << "\t\t\t\"Spec_defense\":" << PokOne.getSpec_defense() << "\n";
        myfile << "\t\t},\n";
        myfile << "\t\t{\n";
        myfile << "\t\t\t\"Name\":" << PokTwo.getName() << ",\n";
        myfile << "\t\t\t\"HP\":" << PokTwo.getHP() << ",\n";
        myfile << "\t\t\t\"Attacks\":" << PokTwo.getAttack() << ",\n";
        myfile << "\t\t\t\"Defense\":" << PokTwo.getDefense() << ",\n";
        myfile << "\t\t\t\"Speed\":" << PokTwo.getSpeed() << ",\n";
        myfile << "\t\t\t\"Spec_Attacks\":" << PokTwo.getSpec_attack() << ",\n";
        myfile << "\t\t\t\"Spec_defense\":" << PokTwo.getSpec_defense() << "\n";
        myfile << "\t\t},\n";
        myfile << "\t\t{\n";
        myfile << "\t\t\t\"Name\":" << PokTre.getName() << ",\n";
        myfile << "\t\t\t\"HP\":" << PokTre.getHP() << ",\n";
        myfile << "\t\t\t\"Attacks\":" << PokTre.getAttack() << ",\n";
        myfile << "\t\t\t\"Defense\":" << PokTre.getDefense() << ",\n";
        myfile << "\t\t\t\"Speed\":" << PokTre.getSpeed() << ",\n";
        myfile << "\t\t\t\"Spec_Attacks\":" << PokTre.getSpec_attack() << ",\n";
        myfile << "\t\t\t\"Spec_defense\":" << PokTre.getSpec_defense() << "\n";
        myfile << "\t\t},\n";
        myfile << "\t]\n";
        myfile << "}\n";

    }
    myfile.close();

    /*std::ifstream fin;
    fin.open(path);

    if(!fin.is_open()) {
        std::cout << "Error open" << std::endl;
    } else {
        std::cout << "open" << std::endl;


        fin.read((char*)&PokTwo,sizeof(Pok1));

    }
    fin.close();

    std::cout << PokTwo.getName() << "; " << PokTwo.getHP() << " HP; " << PokTwo.getAttack() << " Attacks; " << PokTwo.getDefense() << " Defense; " << PokTwo.getSpeed() << " Speed; " << PokTwo.getSpec_attack() << "; " << PokTwo.getSpec_defense() << std::endl;
*/




    return 0;
}
