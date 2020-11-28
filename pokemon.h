#ifndef POKEMON_H_INCLUDED
#define POKEMON_H_INCLUDED

#pragma once

#include <iostream>
#include <string>

class Pokemon
{
protected:
    std::string m_Name;
    int m_HP;
    float m_attack;
    float m_defense;
    float m_speed;
public:
    Pokemon();
    Pokemon(std::string l_Name);
    Pokemon(std::string l_Name, int l_HP);
    Pokemon(std::string l_Name, int l_HP, float l_attack);
    Pokemon(std::string l_Name, int l_HP, float l_attack, float l_defense);
    Pokemon(std::string l_Name, int l_HP, float l_attack, float l_defense, float l_speed);
    ~Pokemon();


    void setName(std::string l_Name);

    std::string getName() { return m_Name; };

    void setHP(int l_HP);

    int getHP() { return m_HP; };

    void setAttack(float l_attack);

    float getAttack() { return m_attack; };

    void setDefense(float l_defense);

    float getDefense() { return m_defense; };

    void setSpeed(float l_speed);

    float getSpeed() { return m_speed; };
};

class Pok1: public Pokemon {
protected:
    std::string spec_attack;
    std::string spec_defense;
public:
    Pok1();
    Pok1(std::string l_Name, std::string l_spec_attack, std::string l_spec_defense);
    Pok1(std::string l_Name, int l_HP,std::string l_spec_attack, std::string l_spec_defense);
    Pok1(std::string l_Name, int l_HP,  float l_attack,std::string l_spec_attack, std::string l_spec_defense);
    Pok1(std::string l_Name, int l_HP,  float l_attack, float l_defense,std::string l_spec_attack, std::string l_spec_defense);
    Pok1(std::string l_Name, int l_HP,  float l_attack, float l_defense, float l_speed,std::string l_spec_attack, std::string l_spec_defense);


    ~Pok1();



    void setSpec_attack(std::string l_spec_attack);
    std::string getSpec_attack() { return spec_attack; };
    void setSpec_defense(std::string l_spec_defense);
    std::string  getSpec_defense() {return spec_defense;};

};

class Pok3: public Pokemon {
protected:
    std::string spec_attack;
    std::string spec_defense;
public:
    Pok3();
    Pok3(std::string l_Name, std::string l_spec_attack, std::string l_spec_defense);
    Pok3(std::string l_Name, int l_HP,std::string l_spec_attack, std::string l_spec_defense);
    Pok3(std::string l_Name, int l_HP, float l_attack,std::string l_spec_attack, std::string l_spec_defense);
    Pok3(std::string l_Name, int l_HP, float l_attack, float l_defense,std::string l_spec_attack, std::string l_spec_defense);
    Pok3(std::string l_Name, int l_HP, float l_attack, float l_defense, float l_speed,std::string l_spec_attack, std::string l_spec_defense);


    ~Pok3();



    void setSpec_attack(std::string l_spec_attack);
    std::string getSpec_attack() { return spec_attack; };
    void setSpec_defense(std::string l_spec_defense);
    std::string  getSpec_defense() {return spec_defense;};

};

class Pok2: public Pokemon {
protected:
    std::string spec_attack;
    std::string spec_defense;
public:
    Pok2();
    Pok2(std::string l_Name, std::string l_spec_attack, std::string l_spec_defense);
    Pok2(std::string l_Name, int l_HP,std::string l_spec_attack, std::string l_spec_defense);
    Pok2(std::string l_Name, int l_HP,  float l_attack,std::string l_spec_attack, std::string l_spec_defense);
    Pok2(std::string l_Name, int l_HP,  float l_attack, float l_defense,std::string l_spec_attack, std::string l_spec_defense);
    Pok2(std::string l_Name, int l_HP,  float l_attack, float l_defense, float l_speed,std::string l_spec_attack, std::string l_spec_defense);


    ~Pok2();



    void setSpec_attack(std::string l_spec_attack);
    std::string getSpec_attack() { return spec_attack; };
    void setSpec_defense(std::string l_spec_defense);
    std::string  getSpec_defense() {return spec_defense;};

};

#endif // POKEMON_H_INCLUDED
