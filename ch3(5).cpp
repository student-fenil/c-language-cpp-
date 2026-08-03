#include <iostream>
using namespace std;

class time
{
    int hours;
    int min;

public:
    void gettime(int h, int m)
    {
        hours = h;
        min = m;
    }

    void puttime()
    {
        cout << "\nHours :- " << hours;
        cout << "\nMinutes :- " << min;
    }

    friend time sum(time, time);
};

time sum(time t1, time t2)
{
    time t;

    t.min = t1.min + t2.min;
    t.hours = t.min / 60;
    t.min = t.min % 60;
    t.hours = t.hours + t1.hours + t2.hours;

    return t;
}

int main()
{
    time t1, t2, t3;

    t1.gettime(1, 40);
    t2.gettime(1, 30);

    t3 = sum(t1, t2);
      cout << "\n\t\tTIME T1 :-";
    t1.puttime();

    cout << "\n\n\t\tTIME T2 :-";
    t2.puttime();

    cout << "\n\n\t\tTHE ADDITION OF TWO TIMES";

    cout << "\n\n\t\tTIME T3 :-";
    t3.puttime();

    return 0;
}


/*output
                TIME T1 :-
Hours :- 1
Minutes :- 40

                TIME T2 :-
Hours :- 1
Minutes :- 30

                THE ADDITION OF TWO TIMES

                TIME T3 :-
Hours :- 3
Minutes :- 10
PS D:\c++ language> 
*/