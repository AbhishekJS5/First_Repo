#ifndef PATIENTMONITORINGSYSTEM_H
#define PATIENTMONITORINGSYSTEM_H
#include <iostream>
using namespace std;

class PatientMonitoringSystem
{
    PatientMonitoringSystem();
public:
    static void getMe()
    {
        cout<<"in call me static fun"<<endl;
    }
   static  PatientMonitoringSystem *getSelf() ;
    void setSelf(PatientMonitoringSystem *self);

private:
    static PatientMonitoringSystem *self;
    static int x;
};

#endif // PATIENTMONITORINGSYSTEM_H
