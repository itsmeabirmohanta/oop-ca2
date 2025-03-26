# Hospital Management System

## Project Details
**Project Title:** Hospital Management System  
**Project Guide:** Dr. Reema Rallan  
**Designation:** Assistant Professor  
**Department:** Computer Applications  
**Institute:** Lovely Professional University  
**Address:** Lovely Professional University, Jalandhar-Delhi, G.T. Road, Phagwara, Punjab (INDIA) - 144411  

## Project Team
### Team Leader
**Name:** Salif Jahangir  
### Team Members
1. Kuputo H Chishi  
2. Abir Mahanta  

## GitHub Repository
**C++ Source Code Files:** [GitHub Repository Link](https://github.com/itsmeabirmohanta/oop-ca2) (To be updated)

---

## Synopsis

### Introduction
The **Hospital Management System** is designed to efficiently manage and organize key hospital operations such as doctor management, patient management, and appointment scheduling. It aims to eliminate inefficiencies caused by manual handling of hospital records. This system provides a structured approach through **object-oriented programming (OOP) in C++**, ensuring smooth day-to-day operations and better coordination among hospital staff.

### System Modules
1. **Doctor Management**
   - Stores doctor details such as ID, name, specialization, and availability.
   - Provides functions to add, view, and check doctor availability.

2. **Patient Management**
   - Stores patient details such as ID, name, age, and gender.
   - Allows adding, searching, and removing patient records.

3. **Appointment Management**
   - Schedules appointments between patients and doctors.
   - Stores details such as appointment ID, doctor ID, patient ID, date, time, and status.
   - Allows booking, viewing, and canceling appointments.

### Scope
The **Hospital Management System** aims to streamline hospital operations by:
- Managing **doctor information**, including specialization and availability.
- Handling **patient records** for quick access and retrieval.
- Scheduling and managing **appointments** to avoid conflicts.

### Limitations
- **No Automation:** Manual data entry and management.
- **No Database Integration:** Uses arrays for storage, meaning data is lost upon program closure.
- **Single-User Access:** Not designed for multi-user collaboration.
- **Limited Features:** Does not include billing, inventory management, or medical history tracking.
- **Basic Error Handling:** Limited input validation and conflict management.

---

## Class Structure

### 1. Doctor Class
**Data Members:**
- `id` (int) – Unique Doctor ID
- `name` (string) – Doctor's Name
- `speciality` (string) – Specialization
- `phone` (string) – Contact Number
- `availability` (bool) – Doctor's Availability

**Member Functions:**
- `add_doctor()` – Adds a new doctor.
- `display_doctor()` – Displays doctor details.
- `update_status()` – Updates availability status.
- `is_available()` – Checks doctor availability.

### 2. Patient Class
**Data Members:**
- `id` (int) – Unique Patient ID
- `name` (string) – Patient's Name
- `age` (int) – Patient's Age
- `gender` (string) – Patient's Gender

**Member Functions:**
- `add_patient()` – Adds a new patient.
- `display_patient()` – Displays patient details.
- `remove_patient()` – Removes patient record.

### 3. Appointment Class
**Data Members:**
- `appointment_id` (int) – Unique Appointment ID
- `patient_id` (int) – Linked Patient ID
- `doctor_id` (int) – Linked Doctor ID
- `date` (string) – Appointment Date
- `time` (string) – Appointment Time
- `status` (string) – Appointment Status/Reason

**Member Functions:**
- `new_appointment()` – Schedules a new appointment.
- `view_appointment()` – Displays appointment details.
- `cancel()` – Cancels an appointment.

---

## Conclusion
The **Hospital Management System** provides a structured and efficient way to handle hospital operations, ensuring accurate record-keeping and better management of doctors, patients, and appointments. Future enhancements may include **database integration, automation, and multi-user support** to further improve functionality and usability.
