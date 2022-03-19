#include "patientmonitoringsystem.h"

int PatientMonitoringSystem::x=100;
PatientMonitoringSystem* PatientMonitoringSystem::self=nullptr;
PatientMonitoringSystem::PatientMonitoringSystem()
{
cout<<"in con of pms "<<endl;
}

PatientMonitoringSystem *PatientMonitoringSystem::getSelf()
{
    if(self==nullptr)
    self = new PatientMonitoringSystem;
    return self;
}

void PatientMonitoringSystem::setSelf(PatientMonitoringSystem *self)
{
    this->self = self;
}
