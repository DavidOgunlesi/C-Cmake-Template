namespace ECS
{

class Archetype {

  private:
      unsigned int* components;

    public:   
      Archetype(unsigned int components[], int size);

};

struct TransformComponent{
  float x;
  float y;
  float z;
};

}