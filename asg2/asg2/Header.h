#pragma once


class Employee { 
    //default employee class

protected:

    int salary;

public:

    Employee(int s = 40000) {

        salary = s;

    }

    virtual int getsalary() {

        return salary;

    }

    virtual int getvacation() {

        return 0;

    }

    virtual int getinsurance() {

        return 0;

    }
};


class Professional :public Employee { // class professional under employee

protected:

    int days;

public:

    Professional(int d = 0) :Employee(10000) {

        days = d;

    }

    int getvacation() {

        return days;


    }
};

class Nonprofessional :public Employee { // class nonprofessional under employee
protected:

    int hours;

public:

    Nonprofessional(int h = 0) :Employee(6500) {

        hours = h;

    }


    int getvacation() {

        int r;
        r = rand() % 10; // their time off is up to the computer dice roll because we are an evil coorporation
        return r;
    }

    int getinsurance() {

        return 100;

    }
};