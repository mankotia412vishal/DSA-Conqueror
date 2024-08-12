#include <bits/stdc++.h>
using namespace std;
class Bottle
{
private:
    string BottleBrand;

public:
    int weight;
    string color;
    int vol;
    Bottle(int weight, string color, int vol)
    {
        this->weight = weight;
        this->vol = vol;
        this->color = color;
    }
    Bottle(Bottle &obj)
    {
        this->weight = obj.weight;
        this->vol = obj.vol;
        this->color = obj.color;
        cout << "I am sinside Copy constructor \n";
    }

    string getBottleBrand()
    {
        return BottleBrand;
    }
    void setBottleBrand(string brand)
    {
        this->BottleBrand = brand;
    }

    void Drinking()
    {
        cout << "This Bottle helps me in drinking water \n";
    }
};
int main()
{
    Bottle *obj1 = new Bottle(1, "Blue", 2);
    // Bottle obj1(1, "Blue", 2);
    // cout << "The Color of the Bootle is " << obj1->color << endl;
    // obj1->setBottleBrand("Vishal");
    // cout << "The Bottle Brand is " << obj1->getBottleBrand() << endl;
    // cout << "Printing the vlaues before the copy Constructor\n";
    // cout << obj1.color << endl;
    // cout << obj1.vol << endl;
    // cout << obj1.weight << endl;

    // Bottle obj2 = obj1;
    // cout << "Printing the vlaues after the copy Constructor\n";
    // cout << obj2.color << endl;
    // cout << obj2.vol << endl;
    // cout << obj2.weight << endl;
    // cout << "Abb ayage mja \n";
   
    Bottle *obj2=new Bottle(*obj1);
     obj2->color = "Pink";

    cout << obj2->color << endl;
    cout << obj1->color << endl;

    return 0;
}