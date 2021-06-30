#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long egn, temp;
    short int num_count = 0, ctrl_num, sex, region, dd, mm, yy, reg_min_num, valid_check = 0, ctrl_num_helper = 512;
    cin >> egn;
    temp = egn;
    ctrl_num = temp % 10;
    temp = temp / 10;
    sex = temp % 10;
    bool isFemale = sex % 2;
    region = temp % 1000;
    temp  /= 1000;
    dd = temp % 100;
    temp /= 100;
    mm = temp % 100;
    temp  /= 100;
    yy = temp;
    temp = egn;
    while(temp != 0){
        int x = temp % 10;
        temp = temp / 10;
        num_count++;
        if(num_count > 1){
            valid_check += x* ctrl_num_helper;
            ctrl_num_helper = ctrl_num_helper / 2;
        }
    }
    valid_check = (valid_check % 11) % 10;
    if(valid_check != ctrl_num){
        cout << "Invalid EGN" << endl;
        return 0;
    }
    if (num_count < 10) {
            cout << "0";
            if (num_count < 9) {
                cout << "0";
                if (num_count < 8) {
                    cout << "0";
                }
            }
        }
        cout << egn << " is the EGN of a " << ((isFemale) ? "woman" : "man") << ", born on ";
        if (dd > 0 && dd < 10) {
            cout << "0";
        }
        cout << dd << ".";
        if (mm >= 21 && mm <= 32) {
            mm = mm - 20;
            yy = yy + 1800;
        } else {
            if (mm >= 41 && mm <= 52) {
                mm = mm - 40;
                yy = yy + 2000;
            } else {
                yy = yy + 1900;
            }
        }
        if (mm > 0 && mm < 10) {
            cout << "0";
        }
        cout << mm << "." << yy << " in";
        if (region >= 0 && region <= 43) {
            reg_min_num = 0;
            cout << " Blagoevgrad, ";
        }
        if (region >= 44 && region <= 93) {
            reg_min_num = 44;
            cout << " Burgas, ";
        }
        if (region >= 94 && region <= 139) {
            reg_min_num = 94;
            cout << " Varna, ";
        }
        if (region >= 140 && region <= 169) {
            reg_min_num = 140;
            cout << " Veliko Tarnovo, ";
        }
        if (region >= 170 && region <= 183) {
            reg_min_num = 170;
            cout << " Vidin, ";
        }
        if (region >= 184 && region <= 217) {
            reg_min_num = 184;
            cout << " Vratsa, ";
        }
        if (region >= 218 && region <= 233) {
            reg_min_num = 218;
            cout << " Gabrovo, ";
        }
        if (region >= 234 && region <= 281) {
            reg_min_num = 234;
            cout << " Kardzhali, ";
        }
        if (region >= 282 && region <= 301) {
            reg_min_num = 282;
            cout << " Kyustendil, ";
        }
        if (region >= 302 && region <= 319) {
            reg_min_num = 302;
            cout << " Lovech, ";
        }
        if (region >= 320 && region <= 341) {
            reg_min_num = 320;
            cout << " Montana, ";
        }
        if (region >= 342 && region <= 377) {
            reg_min_num = 342;
            cout << " Pazardzhik, ";
        }
        if (region >= 378 && region <= 395) {
            reg_min_num = 378;
            cout << " Pernik, ";
        }
        if (region >= 396 && region <= 435) {
            reg_min_num = 396;
            cout << " Pleven, ";
        }
        if (region >= 436 && region <= 501) {
            reg_min_num = 436;
            cout << " Plovdiv, ";
        }
        if (region >= 502 && region <= 527) {
            reg_min_num = 502;
            cout << " Razgrad, ";
        }
        if (region >= 528 && region <= 555) {
            reg_min_num = 528;
            cout << " Ruse, ";
        }
        if (region >= 556 && region <= 575) {
            reg_min_num = 556;
            cout << " Silistra, ";
        }
        if (region >= 576 && region <= 601) {
            reg_min_num = 576;
            cout << " Sliven, ";
        }
        if (region >= 602 && region <= 623) {
            reg_min_num = 602;
            cout << " Smolyan, ";
        }
        if (region >= 624 && region <= 721) {
            reg_min_num = 624;
            cout << " Sofia City Province, ";
        }
        if (region >= 722 && region <= 751) {
            reg_min_num = 722;
            cout << " Sofia Province, ";
        }
        if (region >= 752 && region <= 789) {
            reg_min_num = 752;
            cout << " Stara Zagora, ";
        }
        if (region >= 790 && region <= 821) {
            reg_min_num = 790;
            cout << " Dobrich(Tolbuhin), ";
        }
        if (region >= 822 && region <= 843) {
            reg_min_num = 822;
            cout << " Targovishte, ";
        }
        if (region >= 844 && region <= 871) {
            reg_min_num = 844;
            cout << " Haskovo, ";
        }
        if (region >= 872 && region <= 903) {
            reg_min_num = 872;
            cout << " Shumen, ";
        }
        if (region >= 904 && region <= 925) {
            reg_min_num = 904;
            cout << " Yambol, ";
        }
        if (region >= 926 && region <= 999) {
            reg_min_num = 926;
            cout << " Other/Unknown, ";
        }
        cout << "having ";
        if (isFemale) {
            if (((region - reg_min_num - 1) / 2) > 1 || (region - reg_min_num - 1) == 0) {
                cout << (region - reg_min_num - 1) / 2 << " girls";
            } else {
                cout << "1 girl";
            }
        } else {
            if (((region - reg_min_num) / 2) > 1 || (region - reg_min_num - 1) == 0) {
                cout << (region - reg_min_num) / 2 << " boys";
            } else {
                cout << "1 boy";
            }
        }
        cout << " being born before " << ((isFemale) ? "her" : "him") << " in that day." << endl;   
    return 0;
}
