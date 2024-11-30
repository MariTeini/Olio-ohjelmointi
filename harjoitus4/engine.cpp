#include "engine.h"

Engine::Engine(int hp, double displ) : horsepower(hp), displacement(displ) {}


int Engine::getHorsepower() const{
    return horsepower;

}


void Engine::setHorsepower(int hp){ horsepower = hp;}


double Engine::getDisplacement()const{
    return displacement;
}

void Engine::setDisplacement(double displ) {
    displacement = displ;
}
