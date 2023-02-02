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
    CAR() { cout << "constract CAR" << endl;
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
        LORRY() { cout << "constract LORRY" << endl; 
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
    BUTTON abutton;
public:
    void showBUTTON() {
        cout << abutton.getHEIGHT() << endl;
    }
};


int mainTask1() {
    string name;
    LORRY DAF;
    //DAF.setBRAND("DAF1");
    name=DAF.getBRAND();
    cout << name << endl;
    return 1;

}
int mainTask2() {

    WINDOW REESTRATION;
    REESTRATION.showBUTTON();
    return 1;

}int mainTask3() {

    LORRY DAF;
    return 1;

}int mainTask4() {

    LORRY DAF;
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
