#include "Movie.h"
using namespace std;
#include <iostream>
//////////////////////////////////////////////////////////////////////////////////////////////////

Movie::Movie(string n,string r) /// def constructor to the ratings
{
    name=n;
    MPAA=r;
    terrible=0;
    bad=0;
    ok=0;
    good=0;
    great=0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////

void Movie::set_name(string n) /// set the name of the movie
{
    name =n;
}
//////////////////////////////////////////////////////////////////////////////////////////////////

void Movie::set_rating(string r) /// set the rating of the movie
{
    r=MPAA;
}
//////////////////////////////////////////////////////////////////////////////////////////////////

string Movie::get_name( ){return name;}/// get the name of the movie
//////////////////////////////////////////////////////////////////////////////////////////////////

string Movie::get_rating( ){return MPAA;} /// get the rating of the movie
//////////////////////////////////////////////////////////////////////////////////////////////////

void Movie::addrating ( int num) /// increasing the number of ratings bay 1
{
    if (num > 0 && num < 6)
    {
        if (num == 1)
        {
            terrible++;
        }
        if (num == 2)
        {
            bad++;
        }
        if (num == 3)
        {
            ok++;
        }
        if (num == 4)
        {
            good++;
        }
        if (num == 5)
        {
            great++;
        }
    }
    else{cout << "Error!"<<endl;}
}
//////////////////////////////////////////////////////////////////////////////////////////////////

float Movie::get_ave() ///get the average of the movie ratings
{
float ave = (terrible+ bad + ok + good + great)/5.0;
    return ave;
}
//////////////////////////////////////////////////////////////////////////////////////////////////


Movie::~Movie()
{
    //dtor
}
