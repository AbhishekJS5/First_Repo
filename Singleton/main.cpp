#include <iostream>
#include <patientmonitoringsystem.h>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
     PatientMonitoringSystem* self = PatientMonitoringSystem::getSelf();
      PatientMonitoringSystem* self1 = PatientMonitoringSystem::getSelf();
       PatientMonitoringSystem* self2 = PatientMonitoringSystem::getSelf();
        PatientMonitoringSystem* self3 = PatientMonitoringSystem::getSelf();
         PatientMonitoringSystem* self4 = PatientMonitoringSystem::getSelf();
          cout << self << endl;
           cout << self1 << endl;
            cout << self2 << endl;
             cout << self3 << endl;
              cout << self4 << endl;
    return 0;
}
