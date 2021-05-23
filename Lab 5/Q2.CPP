#include <iostream>
using namespace std;
class Rectangle
{
    int x[2],y[2];
    public:
       Rectangle(int x1, int y1, int x2, int y2){
           x[0] = x1;
           y[0] = y1;
           x[2] = x2;
           y[2] = y2;
           cout<< "Rectangle is constructed sucessfully. "<< endl;

       }
        ~Rectangle(){
            x[0] = 0;
            x[1] = 0;
            y[0] = 0;
            y[1] = 0;
            cout<<"Rectange is destructed successfully. "<< endl;

        }
};

int main(){
    int x1, y1, x2, y2;
    cout<<"Enter coordinates of top left corner: ";
    cin>>x1>>y1;
    cout<<"Enter coordinated of bottom right corner: ";
    cin>>x2>>y2;
    Rectangle p1(x1, y1, x2, y2);
    return 0;
}