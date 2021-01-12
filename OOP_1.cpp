//Калугин Кирилл М8О-207Б-19
//Создать класс Bottle для работы с емкостями. 
//Класс должен состоять из двух вещественных чисел: a- объем емкости в литрах и 
//b – процент наполнения емкости (0 – пустая, 1 – полная). Реализовать операции 
//сложения и вычитания, а также сравнения объектов класса бутылка. При сложении 
//должен складываться фактический объем заполнения бутылок.

#include <iostream>

using namespace std;

class Bottle {
    public:
        double  cap = 0;
        double full = 0;
        
        void setBottle (double a, double b) {
            cap = a;
            full = b;
        }
    
        void getBottle () {
            cout << "(" << cap << ", " << full << ")";
        }
        
};

void equality (Bottle a, Bottle b) {
  if ((a.cap == b.cap) && (a.full == b.full)) {
    cout << "\nБутылки равны.\n";
  }
  else 
    cout << "\nБутылки не равны.\n";
}

int main() {
    double a;
    double b;
    int aflag = 0;
    int bflag = 0;
    Bottle First;
    Bottle Second;
    Bottle Third;
    int c = 8;
    while (c != 7) {
        cout << "\n---\n1.Параметры первой бутылки \n2.Параметры второй бутылки \n3.Сложение бутылок \n4.Вычитание бутылок \n5.Сравнение бутылок \n6.Просмотр параметров \n7.Выход \n---";
        cout << "\nВведите комманду: ";
        cin >> c;
        switch (c) {
            case 1:
                cout << "\nЗадайте параметры первой бутылки: ";
                cin >> a >> b;
                First.setBottle(a, b);
                aflag = 1;
                break;
            case 2:
                cout << "\nЗадайте параметры второй бутылки: ";
                cin >> a >> b;
                Second.setBottle(a, b);
                bflag = 1;
                break;
            case 3:
                if (aflag == 1 && bflag == 1) {
                    Third.setBottle (First.cap + Second.cap, (First.cap * First.full + Second.cap * Second.full) / (First.cap + Second.cap));
                    cout << "\nСумма бутылок равна: ";
                    Third.getBottle();
                }
                else {
                    if (aflag != 1) {
                        cout << "\nПараметры первой бутылки не заданы!";
                    }
                    if (bflag != 1) {
                        cout << "\nПараметры второй бутылки не заданы!";
                    }
                }
                break;
            case 4:
                if (aflag == 1 && bflag == 1) {
                    if ((First.cap * First.full >= Second.cap * Second.full) && (First.cap >= Second.cap)) {
                        Third.setBottle (First.cap - Second.cap, (First.cap * First.full - Second.cap * Second.full) / (First.cap - Second.cap));
                        cout << "\nРазница бутылок равна: ";
                        Third.getBottle();
                    } 
                    else
                        cout << "\nПервая бутылка меньше второй!";
                }
                else {
                    if (aflag != 1) {
                        cout << "\nПараметры первой бутылки не заданы!";
                    }
                    if (bflag != 1) {
                        cout << "\nПараметры второй бутылки не заданы!";
                    }
                }
                
                break;
            case 5:
                if (aflag == 1 && bflag == 1) {
                    equality (First, Second);
                }
                else {
                    if (aflag != 1) {
                        cout << "\nПараметры первой бутылки не заданы!";
                    }
                    if (bflag != 1) {
                        cout << "\nПараметры второй бутылки не заданы!";
                    }
                }
                break;
            case 6:
                if (aflag == 1 && bflag == 1) {
                    cout << "\nПервая бутылка:";
                    First.getBottle();
                    cout << "\nВторая бутылка:";
                    Second.getBottle();
                }
                else {
                    if (aflag != 1) {
                        cout << "\nПараметры первой бутылки не заданы!";
                    }
                    if (bflag != 1) {
                        cout << "\nПараметры второй бутылки не заданы!";
                    }
                }
                
                break;
            case 7:
                break;
            default:
                cout << "Неверная комманда\n";
            break;
        }
    }
    return 0;
}

