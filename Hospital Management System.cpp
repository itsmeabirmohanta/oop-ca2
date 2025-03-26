#include <iostream>
using namespace std;

/*member functions depict the basic functionality that they will perform and their working may be further refined
in the future when the program is completed
*/

//doctor class
class doctor{
    int id;
    string name;
    string speciality;
    string phone;
    bool availability;

    public:
        void add_doctor(){
            cout << "Enter doctor id (1-20): ";
            cin >> id;
            cout << "Enter doctor name: ";
            getline(cin >> ws, name);
            cout << "Enter speciality: ";
            getline(cin >> ws, speciality);
            cout << "Enter phone: ";
            getline(cin >> ws, phone);
            cout << "Availibility status (1 = Yes, 0 = No): ";
            cin >> availability;

        }

        void display_doctor(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Speciality: " << speciality << endl;
            cout << "Phone: " << phone << endl;
            cout << "Availability: " << availability << endl << endl;


        }

        void update_status(){
            cout << "Set availability status\n";
            cout << "1 = Available 0 = Not available\n";
            cin >> availability;
            cout << "Success!\n\n";
        }

        void is_available(){
            if(availability == 1){
                cout << "Doctor is available.\n\n";
            }
            else{
                cout << "Doctor is unavailable.\n\n";
            }
        }

};

// patient class
class patient {
    int id;
    string name;
    int age;
    string gender;

public:
    void add_patient() {
        cout << "Enter patient ID: ";
        cin >> id;
        cout << "Enter patient name: ";
        getline(cin >> ws, name);
        cout << "Enter patient age: ";
        cin >> age;
        cout << "Enter patient gender: ";
        cin >> gender;
    }

    void display_patient() const {
        cout << "Patient ID: " << id << ", Name: " << name << ", Age: " << age << ", Gender: " << gender;
    }

    void remove_patient() {
        id = 0;
        name = "";
        age = 0;
        gender = "";
    }
};

//appointment class
class appointment
{
    public:
    int appointment_id;
    int patient_id;
    int doctor_id;
    string date;
    string time;
    string status;

    void new_appointment() //To schedule new appointment
    {
        cout << "Enter appointment id (1-40): ";
        cin >> appointment_id;
        cout<< "Enter patient id (1-40): ";
        cin >> patient_id;
        cout<< "Enter doctor id (1-20): ";
        cin >> doctor_id;
        cout<< "Enter date: ";
        getline(cin>>ws, date);
        cout<< "Enter time: ";
        getline(cin>>ws, time);
        cout<<"Enter Reason for appointment: ";
        getline(cin>>ws, status);
        

    }
    void view_appointment() //To view all appointments
    {
       
            cout << "Appointment id: "<< appointment_id << endl;
            cout << "Patient id: "<< patient_id << endl;
            cout << "Doctor id: "<< doctor_id << endl;
            cout << "Date: "<< date << endl;
            cout << "Time: "<< time << endl;
            cout << "Status: "<< status << endl;
    
    }
    void cancel() //Cancel existing appointment
    {
        appointment_id=-1;
        patient_id=0;
        doctor_id=0;
        date="";
        time="";
        status="";
    }

};

//separate functions for 3 basic funtionalities: doctor, patient and appointment management
/*these functions are only meant to illustrate the functioning of the program for now and are not yet equipped to
handle exceptions or address undefined behaviour*/

void doctor_management(doctor doc[], int &doc_count);
void patient_management(patient patients[], int &patient_count);
void appointment_menu(appointment appointments[], int &count);

int main(){
    //array of doctor objects
    doctor doctors[20];
    int doctor_count = 0;

    //array of patient objects
    patient patients[40];
    int patient_count = 0;

    //array of appointment objects
    int count = 0;
    appointment appointments[40];

    doctor_management(doctors, doctor_count); //only calling the doctor management function

    //funtions calls shown just for illustration, final program will provide options to call the needed function
    //for now, only one function may be called at a time manually

    //patient_management(patients, patient_count);
    //appointment_menu(appointments, count);

    return 0;
}


void doctor_management(doctor doc[], int &doc_count){
    bool running  = true;
    while(running){
        cout << "******DOCTOR MANAGEMENT PORTAL******\n";
        int choice;
        cout << "Select an option: \n";
        cout << "1 = Add a doctor\n2 = Display doctor details\n3 = Check availability\n4 = Update availability status\n5 = Exit\n";
        cin >> choice;
        switch(choice){
            case 1: if(doc_count < 20){
                    doc[doc_count].add_doctor();
                    doc_count++;
                    } else{
                        cout << "Doctor list is full\n";
                    }
                    break;
                    

            case 2: if(doc_count == 0){
                    cout << "No doctors available\n";
                    } else{
                        int temp_id;
                        cout << "Enter doctor ID (1-20): ";
                        cin >> temp_id;
                        doc[temp_id - 1].display_doctor();
                    }
                    break;


            case 3: if(doc_count == 0){
                    cout << "No doctors available\n";
                    } else{
                        int temp_id;
                        cout << "Enter doctor ID (1-20): ";
                        cin >> temp_id;
                        doc[temp_id - 1].is_available();
                    }
                    break;


            case 4: if(doc_count == 0){
                    cout << "No doctors available\n";
                    } else{
                        int temp_id;
                        cout << "Enter doctor ID (1-20): ";
                        cin >> temp_id;
                        doc[temp_id - 1].update_status();
                    }
                    break;
            case 5: cout << "Thank you!";
                    running  = false;
                    break;
            
            default: cout << "Invalid input. Try again!.\n";
                     break;
        }   


    }
}

void patient_management(patient patients[], int &patient_count) {
    bool running = true;
    while (running) {
        cout << "\n****** PATIENT MANAGEMENT ******\n";
        cout << "1. Add Patient\n2. Display Patients\n3. Remove Patient\n4. Exit\n";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                if (patient_count < 10) {
                    patients[patient_count].add_patient();
                    patient_count++;
                } else {
                    cout << "Patient list is full.\n";
                }
                break;


            case 2:
                for (int i = 0; i < patient_count; i++) {
                    patients[i].display_patient();
                }
                break;


            case 3: {
                int id;
                cout << "Enter patient ID to remove: ";
                cin >> id;
                for (int i = 0; i < patient_count; i++) {
                    if ((i + 1) == id) {
                       patients[i].remove_patient();
                        patient_count--;
                        cout << "Patient removed successfully.\n";
                        break;
                        
                    }
                }
                break;
            }
            case 4:
                running = false;
                break;


            default:
                cout << "Invalid choice. Try again.\n";
                break;
        }
    }
}

void appointment_menu(appointment appointments[], int &count)
{
    int choice;
    bool running = true;
    while(running)
    {
        cout<<"------Appointment Menu------"<<endl;
        cout<<"1. Add Appointment"<<endl;
        cout<<"2. View Appointment"<<endl;
        cout<<"3. Cancel Appointment"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: 
            if(count<40)
            {
                appointments[count].new_appointment();
                count++;
            }
            else
            {
                cout<<"Appointment full"<<endl;
            }
            break;


            case 2:
             if(count==0)
             {
                cout<<"No appointments"<<endl;
             }
             else{
                int temp;
                cout<<"Enter appointment id (1-40): "<<endl;
                cin>>temp;
                appointments[temp-1].view_appointment();

             } break;


            case 3:
            if(count>0)
            {
                int id;
                cout<<"Enter ID to cancel appointment: "<<endl;
                cin>>id;
                for(int i=0;i<count;i++)
                {
                if((i+1) == id){
                    appointments[i+1].cancel();
                    count--;
                    cout << "Appointment removed successfully.";
                    break;
                }
                }
            }
            break;


            case 4: running = false;
                    break;


            default: cout<<"Invalid choice";
                     break;
            

        }
    }
}
