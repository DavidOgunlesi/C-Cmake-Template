#include "ecs.h"
#include <iostream>

ECS::Archetype::Archetype(unsigned int components[], int size)
{
     //component array is a list of component sizes
        // we then use this to allocate memory for the components
        std::printf("Archetype created\n");
        // std::printf((char*)(sizeof(components) / size));

        // for (int i = 0; i < sizeof(components) / size; i++) {
        //   std::cout << components[i] << std::endl;
        // }
}