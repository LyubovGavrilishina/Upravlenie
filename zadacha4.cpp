#include <iostream>
using namespace std;
int main()
{
    double s,T,u;
    int tm,ts,t;
    cout <<" Вычисление скорости бега:\n";
    cout <<" Введите дистанцию в метрах:";
    cin >>s;
    cout <<" Введите время (мин.сек):";
    cin >> T;
    tm = (int)T;
    ts = (T-(double)tm)*100;
    t = tm*60+ts;
    double tch = (double)t/3600;
    double skm = (double)s/1000;
    cout << " Вы бежали со скоростью " << skm/tch << " км/ч \n" ;
    cin.get();
    return 0;
}
    
   
