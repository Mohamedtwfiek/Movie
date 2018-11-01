#include <iostream>
#include "Movie.h"
using namespace std;

int main()
{
    Movie m1("mmt","g");
    Movie m2("mmt2","the same g");
    for (int i =0;i<5;i++)
    {
        int x,y;
        cout << "rate the 1st movie" <<endl;
        cin>>x;
        m1.addrating(x);
        cout << "rate the 2nd movie" <<endl;
        cin>>y;
        m2.addrating(y);
    }
    cout << m1.get_name()<<m1.get_rating()<<" "<< m1.get_ave() << endl;
    cout << m2.get_name()<<m2.get_rating() <<" "<< m2.get_ave() << endl;
    return 0;
}
