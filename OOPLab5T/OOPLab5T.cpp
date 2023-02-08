// OOPLab5T.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <string>
#include <vector>
#include <iostream>

// Ваші файли загловки 
//
#include "Lab5Exmaple.h"

class CAR {
    int power, piston;
protected:
    string brand;

public:
    CAR() {
        cout << "constract CAR" << endl;
        power = 150;
        piston = 4;
    }
    void setPOWER(int P) { power = P; }
    int getPOWER() { return power; }
    void setPISTON(int Pi) { piston = Pi; }
    int getPISTON() { return piston; }
    ~CAR() { cout << "DEstract CAR" << endl; }
};
class LORRY :protected CAR {
private:
    double weight;
public:
    LORRY() {
        cout << "constract LORRY" << endl;
        setPOWER(500);
        setPISTON(6);
        weight = 1500;
        brand = "semiTRACK";
    }
    void setBRAND(string B) { brand = B; }
    string getBRAND() { return brand; }
    void setWEIGHT(double W) { weight = W; }
    double getWEIGHT() { return weight; }
    ~LORRY() { cout << "DEstract LORRY" << endl; }
};




class BUTTON {
    int height, weidth;
public:
    BUTTON() {
        height = 300;
        weidth = 50;
    }
    void setHEIGHT(int param1) { height = param1; }
    int getHEIGHT() { return height; }
    void setWEIDTH(int param2) { weidth = param2; }
    int getWEIDTH() { return weidth; }
};

class WINDOW {
    int coordx, coordy;
protected:
    BUTTON abutton;
public:
    WINDOW() {
        coordx = 0;
        coordy = 0;
        abutton.setHEIGHT(250);
        abutton.setWEIDTH(47);
    }
    WINDOW(int a, int b) {
        coordx = a;
        coordy = b;
    }
    WINDOW(int a, int b, int d, int c) {
        coordx = a;
        coordy = b;
        abutton.setHEIGHT(d);
        abutton.setWEIDTH(c);
    }
    void showBUTTON() {
        cout << abutton.getHEIGHT() << endl;
    }
};

class WINDOWwithmenuBUTTON :public WINDOW {
    string MENUATRIBUTE;
   
public:

    WINDOWwithmenuBUTTON() {

        MENUATRIBUTE = "ratatatattaa";
        abutton.setHEIGHT(190);
    }
    WINDOWwithmenuBUTTON(string ASD) {

        MENUATRIBUTE = ASD;
        abutton.setHEIGHT(190);

    }
    void printing() {

       
 
        cout << MENUATRIBUTE << endl;

    }
    ~WINDOWwithmenuBUTTON() {


    }
};




class HUMAN {
    string NAME;
    int age;
    int height;
    enum BODYSTATE
    {STRONG,
        slim,
        athletic,
        fat,
        huge

    };
    int salary;

public:





};

class STUDENT :public HUMAN {

public:

};



class vector3D {
    vector<double> F;
public:
    double getF(int index) {
        return F[index];

    }
    vector3D() {

        F.emplace_back(0);
        F.emplace_back(0);
        F.emplace_back(0);
    }
    
    vector3D(double a, double b, double c){

        F.emplace_back(a);
        F.emplace_back(b);
        F.emplace_back(c);
    }

    vector3D operator + (vector3D A){
        vector3D C(this->F[0] + A.getF(0),this->F[1]+ A.getF(1),this->F[2]+ A.getF(2));

        return C;
    }
    void operator = (vector3D C) {
        this->F[0] = C.getF(0);
        this->F[1] = C.getF(1);
        this->F[2] = C.getF(2);
    }

};


class Triad {
    double x=0, y=0, z=0;
public:
    void multiplication(double scail) {
        x *= scail;
        y *= scail;
        z *= scail;
    }

    void addiction(double scail1) {
        x += scail1;
        y += scail1;
        z += scail1;
    }
    bool compair(double scail2) {
        if (x == scail2 || y == scail2 || z == scail2) return 1;
        else  return 0 ;
    }
//    vector3D A(x,y,z);

};



int mainTask1() {
    string name;
    LORRY DAF;
    //DAF.setBRAND("DAF1");
    name = DAF.getBRAND();

    cout << name << endl;
    return 1;

}
int mainTask2() {

    string ahet = "isia";
    WINDOW REESTRATION;
    WINDOWwithmenuBUTTON MENUPAGE, binto(ahet);
    REESTRATION.showBUTTON();
    MENUPAGE.printing();
    binto.printing();
 
   
    return 1;

}
int mainTask3() {

    LORRY DAF;
    return 1;

}int mainTask4() {

    vector3D D, K(3,4,1), N(7,2,9);
    D = K + N;
    cout << D.getF(1) << endl;
    return 1;

}
int mainTask5() {

    LORRY DAF;
    return 1;

}
int main()
{
    std::cout << " Lab #5  !\n";
    //  Код виконання завдань
    //  Головне меню завдань
    //  Функції та класи можуть знаходитись в інших файлах проекту

    int chain;
    cin >> chain;
    /*
     if (chain == 1) chain = mainExample1();
     if (chain == 2) chain = mainExample2();
     if (chain == 3) chain = mainExample3();
     if (chain == 4) chain = mainExample4();
     if (chain == 5) chain = mainExample5();
     int chain;
     cin >> chain;
     */


    if (chain == 1) chain = mainTask1();
    if (chain == 2) chain = mainTask2();
    if (chain == 3) chain = mainTask3();
    if (chain == 4) chain = mainTask4();
    if (chain == 5) chain = mainTask5();

}
