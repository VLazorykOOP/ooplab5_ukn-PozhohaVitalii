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





// second Task

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


// third task

enum BODYSTATE
{
    STRONG,
    slim,
    athletic,
    fat,
    huge

};

class HUMAN {
    string NAME;
    int age;
    int height;
    BODYSTATE H;
    int salary;

public:
    void setName(string N) {
        NAME = N;
    }
    void setAge(int N) {
        age = N;
    }
    void setHaight(int N) {
        height = N;
    }
    void setState(BODYSTATE N) {
        H = N;
    }
    void setSarary(int N) {
        salary = N;
    }

    string getName() {
        return NAME;
    }
    int getAge() {
        return age;
    }
    int getHeight() {
        return height;
    }
    BODYSTATE getState() {
        return H;
    }
    int getSalary() {
        return salary;
    }

    HUMAN() {
        NAME = "Pol";
        age = 24;
        height = 179;
        H = athletic;
        salary = 12000;
    }
    HUMAN(string N, int a, int h, BODYSTATE F, int s) {
        NAME = N;
        age = a;
        height = h;
        H = F;
        salary = s;
    }
    HUMAN(const HUMAN& OBJ) {
        this->H = OBJ.H;
        this->NAME = OBJ.NAME;
        this->age = OBJ.age;
        this->height = OBJ.height;
        this->salary = OBJ.salary;

    }

};

class STUDENT :public HUMAN {
    string University;
    string Speciality;
    int AverMark;
public:



    STUDENT() {
        University = "CHNU";
        Speciality = "Computer science";
        AverMark = 83;
    }
    STUDENT(string U, string S, int A, string N, int a, int h, BODYSTATE B, int s) {
        University = U;
        Speciality = S;
        AverMark = A;
        setName(N);
        setAge(a);
        setHaight(h);
        setState(B);
        setSarary(s);
    }
    STUDENT(const STUDENT& obj) {
        this->AverMark = obj.AverMark;
        this->Speciality = obj.Speciality;
        this->University = obj.University;


        this->HUMAN::HUMAN(obj);
    }

    void printALL() {

        cout << University << " " << getSalary() << " " << getAge() << " " << getHeight() << " " << getState() << " " << getName() << endl;
    }

};



//fourth task

class vector3D {
    vector<double> F;
public:
    double getF(int index) {
        return F[index];

    }
    void setF(int index, int value) {
        F[index] = value;
    }
    vector3D() {

        F.emplace_back(0);
        F.emplace_back(0);
        F.emplace_back(0);
    }

    vector3D(double a, double b, double c) {

        F.emplace_back(a);
        F.emplace_back(b);
        F.emplace_back(c);
    }

    vector3D operator + (vector3D A) {
        vector3D C(this->F[0] + A.getF(0), this->F[1] + A.getF(1), this->F[2] + A.getF(2));

        return C;
    }
    void operator = (vector3D C) {
        this->F[0] = C.getF(0);
        this->F[1] = C.getF(1);
        this->F[2] = C.getF(2);
    }

};

class Triad {
    double x = 0, y = 0, z = 0;
    vector3D Object1;
public:

    double getObject1(int ind) {
        return Object1.getF(ind);
    }

    Triad(double a, double b, double c) :Object1(a, b, c) {
        x = a;
        y = b;
        z = c;

    }
    void multiplication(double scail) {
        x *= scail;
        Object1.setF(0, x);
        y *= scail;
        Object1.setF(1, y);
        z *= scail;
        Object1.setF(2, z);
    }

    void addiction(double scail1) {
        x += scail1;
        Object1.setF(0, x);
        y += scail1;
        Object1.setF(1, y);
        z += scail1;
        Object1.setF(2, z);
    }
    bool compair(double scail2) {
        if (x == scail2 || y == scail2 || z == scail2) return 1;
        else  return 0;
    }


};



//function managment 

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

    HUMAN A1("Oleg", 26, 190, STRONG, 18000), A2(A1),A3;
    STUDENT B1("CHNO", "CS", 78, "Kiria", 23, 164, slim, 0), B2(B1), B3;


    B1.printALL();
    B2.printALL();
    B3.printALL();
    return 1;

}int mainTask4() {

    vector3D D, K(3, 4, 1), N(7, 2, 9);
    D = K + N;
    cout << D.getF(1) << endl;
    Triad ExperementObl(1, 7, 4);
    ExperementObl.multiplication(4);
    ExperementObl.addiction(28);
    cout << ExperementObl.getObject1(2) << endl;
    return 1;

}





// Main Func
int main()
{
    std::cout << " Lab #5  !\n";
    again:
    cout << "choose task: "<<endl;
   

    int chain;
    cin >> chain;
    
    cout << endl << endl;

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
    if (chain < 5)goto again;
}
