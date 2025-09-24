#include <iostream>
using namespace std;

class SinivelCap
{

public:
    void Take() const {cout << "SinivelCap!" << endl;}
};

class SneezeCap
{
public:
    void Take() const {cout << "SneezeCap!" << endl;}
};

class ColdPatient
{
public:
    void TakeSinivel(const SinivelCap &medicine) const {medicine.Take();}
    void TakeSneeze(const SneezeCap &medicine) const {medicine.Take();}
    void TakeSnuffleCap(const SnuffleCap &cap) const{cap.Take();}
}

int main(void)
{
    ColdPatient sufferer;

    SinivelCap scap;
    SneezeCap zcap;
    SnuuffleCap ncap;
 
    suffer.TakeSinivel(scap);
    suffer.TakeSneeze(zcap);
    suffer.TakeSnuffleCap(ncap);

    return 0;
}
