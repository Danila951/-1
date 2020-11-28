#include "pokemon.h"
#include <iostream>

Pok1::Pok1() {

}

Pok1::Pok1(std::string l_Name,std::string l_spec_attack, std::string l_spec_defense
        ):Pokemon(l_Name) {
    spec_attack=l_spec_attack;
    spec_defense=l_spec_defense;
}

Pok1::Pok1(std::string l_Name, int l_HP,std::string l_spec_attack, std::string l_spec_defense
        ):Pokemon(l_Name, l_HP) {
    spec_attack=l_spec_attack;
    spec_defense=l_spec_defense;
}

Pok1::Pok1(std::string l_Name, int l_HP,  float l_attack,std::string l_spec_attack, std::string l_spec_defense
        ):Pokemon(l_Name, l_HP, l_attack) {
    spec_attack=l_spec_attack;
    spec_defense=l_spec_defense;
}

Pok1::Pok1(std::string l_Name, int l_HP,  float l_attack, float l_defense,std::string l_spec_attack, std::string l_spec_defense
        ):Pokemon(l_Name, l_HP, l_attack, l_defense) {
    spec_attack=l_spec_attack;
    spec_defense=l_spec_defense;
}

Pok1::Pok1(std::string l_Name, int l_HP,  float l_attack, float l_defense, float l_speed,std::string l_spec_attack, std::string l_spec_defense
        ):Pokemon(l_Name, l_HP, l_attack, l_defense, l_speed) {
    spec_attack=l_spec_attack;
    spec_defense=l_spec_defense;
}

Pok1::~Pok1() {

}

void Pok1::setSpec_attack(std::string l_spec_attack){
    spec_attack=l_spec_attack;
}

void Pok1::setSpec_defense(std::string l_spec_defense){
    spec_defense=l_spec_defense;
}
