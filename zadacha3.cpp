#include <iostream>
using namespace std;
int main()
{
    double A=0;
    double B=0;
    cout<<"Введите стоимость покупки(для выхода введите любую букву): ";
    
    while(cin>>A)
{
        if(A>500.0){
            B=A*0.03;
            cout<<"Стоимость со скидкой: "<<(A-B)<<endl;}
        else if(A>1000.0){
                B=A*0.05;
                cout<<"Стоимость со скидкой: "<<(A-B)<<endl;}
        else cout<<"Сумма покупки не предусматривает скидку."<<endl;
    }
    cout<<"Пока\n";
}