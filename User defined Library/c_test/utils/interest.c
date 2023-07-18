/*function to calculate simple interest 
    p - principal amount
    r - rate of interest
    t - time
*/

double sim_interest(double p, double r, double t){
    double interest;
    interest = (p*r*t)/100.0;
    return interest;
}

