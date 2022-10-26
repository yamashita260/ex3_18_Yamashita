#include <iostream>
#include<iomanip>
#include"getBmi.h"
#include"getObesity.h"
using namespace std;

int main()
{
    const int STD_BMI = 22; // 標準BMI
    double height;  // 身長
    double weight;  // 体重
    double bmi;    // bmi
    double stdWeight;   // 標準体重

    //キー入力をheightに格納する
    cout << "身長(cm)を入力してください" << endl;
    cin >> height;

    //キー入力をweightに格納する
    cout << "体重(kg)を入力してください" << endl;
    cin >> weight;

    // 標準体重を計算する
    stdWeight = STD_BMI * (height / 100) * (height / 100);

    bmi = getBmi(height, weight);
    // bmiを画面に表示する
    cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi << "です。" << endl;

    // 標準体重を画面に表示する
    cout << "あなたの標準体重は、" << stdWeight << "です" << endl;


    if (getObesity(bmi) == -1) {
        cout << "あなたは低体重です" << endl;
    }
    else if (getObesity(bmi) == 0) {
        cout << "あなたは普通体重です" << endl;
    }
    else if (getObesity(bmi) == 1) {
        cout << "あなたは肥満(1度)です" << endl;
    }
    else if (getObesity(bmi) == 2) {
        cout << "あなたは肥満(2度)です" << endl;
    }
    else if (getObesity(bmi) == 3) {
        cout << "あなたは肥満(3度)です" << endl;
    }
    else {
        cout << "あなたは肥満(4度)です" << endl;
    }

}
