#include <iostream>
using namespace std;

double rerata (double a, double b){
    return (a + b)/2;
}

    string status (double r){

    if (r >= 60){
        return  "lulus";
    }else {
        return  "gagal";
    }
    }
    string status1 (double r, double n){

    if (r >= 60 and n >= 70){
        return  "lulus";
    }else {
        return  "gagal";
    }
}
    string status2 (double r, double n){

    if (r >= 60 or n >= 70){
        return  "lulus";
    }else {
        return  "gagal";
    }
    }
    int main (){
        double nilM, nilB, rata;
        

        cout << "Masukan nilai matematika : ";
        cin >> nilM;
        cout << "Masukan nilai B inggris : ";
        cin >> nilB;
        
        cout  << "Status kelulusan anda : " << rerata (nilM, nilB);
        cout  << "\nstatus kelulusan anda : " << status (rerata(nilM, nilB));
        cout  << "\nstatus kelulusan anda : " << status1 (rerata(nilM, nilB), nilM);
        cout  << "\nstatus kelulusan anda : " << status2 (rerata(nilM, nilB), nilM);

    
}