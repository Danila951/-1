#include "pokemon.h"
#include <iostream>

Pokemon::Pokemon() {

}

Pokemon::Pokemon(std::string l_Name) {
    m_Name = l_Name;
}

Pokemon::Pokemon(std::string l_Name, int l_HP) {
    m_Name = l_Name;
    m_HP = l_HP;
}

Pokemon::Pokemon(std::string l_Name, int l_HP, float l_attack) {
    m_Name = l_Name;
    m_HP = l_HP;
    m_attack = l_attack;
}

Pokemon::Pokemon(std::string l_Name, int l_HP, float l_attack, float l_defense) {
    m_Name = l_Name;
    m_HP = l_HP;
    m_attack = l_attack;
    m_defense = l_defense;
}

Pokemon::Pokemon(std::string l_Name, int l_HP, float l_attack, float l_defense, float l_speed) {
    m_Name = l_Name;
    m_HP = l_HP;
    m_attack = l_attack;
    m_defense = l_defense;
    m_speed = l_speed;
}

Pokemon::~Pokemon() {

}

    void Pokemon::setName(std::string l_Name) {
        m_Name = l_Name;
    }


    void Pokemon::setHP(int l_HP) {
        m_HP = l_HP;
    }


    void Pokemon::setAttack(float l_attack) {
        m_attack = l_attack;
    }


    void Pokemon::setDefense(float l_defense){
        m_defense = l_defense;
    }


    void Pokemon::setSpeed(float l_speed) {
        m_speed = l_speed;
    }
