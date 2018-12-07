#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;

    diff = 0.0;
    int_cte = 0.0;
    prev_cte = 0.0;
    steer = 0.0;
}

void PID::UpdateError(double cte) {
    //steer =  -tau_p * cte - tau_d * diff - tau_i * int_cte

    diff = cte - prev_cte;
    int_cte += cte;

    steer = -this->Kp * cte - this->Kd * diff - this->Ki * int_cte;

    prev_cte = cte;
}

double PID::TotalError() {

    if(steer > 1)
    {
        steer = 1;
    }
    if(steer < -1)
    {
        steer = -1;
    }

    return steer;
}

