#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
using namespace std;
class Movie
{
    public:
        Movie( string ,string );
        void set_name(string ); /// set the name of the movie
        void set_rating(string ); /// set the rating of the movie

        string get_name( ); /// get the name of the movie
        string get_rating( ); /// get the rating of the movie

        void addrating (int num);
        float get_ave();

        virtual ~Movie();
    protected:
        int terrible ,bad , ok , good , great; ///the ratings of the movie
    private:
        string name,MPAA; ///name and rating of the movie
};

#endif // MOVIE_H
