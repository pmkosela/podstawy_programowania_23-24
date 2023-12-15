#include <iostream>
#include <algorithm>
#include <cmath>

const int A=5;

struct vec2d
{
    float x, y;
};

float length(vec2d vector){

    return sqrt((vector.x * vector.x)+(vector.y * vector.y));
}

void normalize(vec2d &vector){
    float length1 = length(vector);
    vector.x /= length1;
    vector.y /= length1;
}

void filling(vec2d array[], const int size){
    for(int i=0; i<size; ++i){
        array[i] = {(float)rand(), (float)rand()};
        normalize(array[i]);
    }
}

char* to_string(vec2d vector){
    char *array = new char[100];
    sprintf(array,"(%f,%f)", vector.x, vector.y);

    return array;
}

int main()
{
    vec2d array[A];

    filling(array, A);
    for(int i=0; i<A; ++i){
        std::cout << to_string(array[i]) << ' ';
    }

    return 0;
}
