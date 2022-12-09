#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(double deg){
    return (deg * M_PI)/180;
}

double rad2deg(double rad){
    return (rad * 180)/M_PI;
}

double findXComponent(double v1_len, double v1_dir, double v2_len, double v2_dir){
    double v1_x = v1_len * cos(v1_dir);
    double v2_x = v2_len * cos(v2_dir);
    double v_x = v1_x + v2_x;
    return v_x;
}

double findYComponent(double v1_len, double v1_dir, double v2_len, double v2_dir){
    double v1_y = v1_len * sin(v1_dir);
    double v2_y = v2_len * sin(v2_dir);
    double v_y = v1_y + v2_y;
    return v_y;
}

double pythagoras(double v_x, double v_y){
    double v_len, pre_sqrt; 
    pre_sqrt = (v_x * v_x) + (v_y * v_y);
    v_len = sqrt(pre_sqrt);
    return v_len;
}

void showResult(double v_len, double v_dir){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << v_len << "\n";
    cout << "Direction of the resultant vector (deg) = " << v_dir << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,a1,l2,a2);
    ycomp = findYComponent(l1,a1,l2,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
