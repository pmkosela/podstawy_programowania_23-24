#include <iostream>
#include <cmath>

using namespace std;

class Point{
    float x, y;
public:
    float getX(){
        return x;
    };

    void setX(float x){
        this->x = x;
    };

    float getY(){
        return this->y;
    };

    void setY(float y){
        this->y = y;
    };

    float distance(Point & point2){
        //point1.x = 7;
        return sqrt(pow(point2.getX() - this->getX(), 2) + pow(point2.getY() - this->getY(), 2));
    }
};

//obiekt automatyczny tej klasy
void objects(const int l){

    Point q1;

    Point* w1 = new Point;

    Point arr[l];

    Point* arr1[l];
    for(int i=0; i<l; i++){
        arr1[i]= new Point;
    }

    Point* arr2 = new Point[l];

    Point* *arr3 = new Point*[l];
    for(int i=0; i<l; i++){

        arr3[i] = new Point;

    }

    delete w1;
    for(int i=0; i<l; ++i)
    {
        delete arr1[i];
    }
    delete[] arr2;
    for(int i=0; i<l; ++i)
    {
        delete arr3[i];
    }
    delete[] arr3;


}
void readArrays(Point points1[], Point points2[], int size)
{
    for(int i=0; i<size; ++i)
    {
        points2[i] = points1[i];
    }
}

void readPoint(Point & point){
    float x, y;
    cin >> x >> y;
    point.setX(x);
    point.setY(y);
}
/* ----
 * float getY(){
 * return this->y;
 * };
 * ----
 */

float distance(Point & point1, Point & point2){
    //point1.x = 7;
    return sqrt(pow(point2.getX() - point1.getX(), 2) + pow(point2.getY() - point1.getY(), 2));
}
int main()
{
    /*
    Point point1, point2;
    readPoint(point1);
    readPoint(point2);
    //cin >> point1.x >> point1.y >> point2.x >> point2.y;
    //float result = distance(point1, point2);
    float result = point1.distance(point2);
    cout << result << endl;
*/
    int size;
            cin>> size;
    Point points1[size], points2[size];
    for(int i=0; i<size; ++i)
    {
        points2[i].setX(0);
        points1[i].setX(i);
    }
    for(int i=0; i<size; ++i)
    {
        points2[i].setY(0);
        points1[i].setY(i);
    }
    readArrays(points1, points2, size);
    for(int i=0; i<size; ++i)
    {
        cout << points2[i].getX() << " " << points2[i].getY() << endl;
    }




    return 0;
}
