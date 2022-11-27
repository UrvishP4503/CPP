#include <bits/stdc++.h>
#include "movies.h"

void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

void increment_watched(Movies &movies, std::string name)
{
    if (movies.increment_watched(name))
    {
        std::cout << name << " watch incremented" << std::endl;
    }
    else
    {
        std::cout << name << " not found" << std::endl;
    }
}

void add_movie(Movies &movies, std::string name, std::string rating, int watched)
{
    if (movies.add_movie(name, rating, watched))
    {
        std::cout << name << " added" << std::endl;
    }
    else
    {
        std::cout << name << " already exists" << std::endl;
    }
}

int main()
{

    Movies my_movies;

    my_movies.display();

    add_movie(my_movies, "Lord of the rings", "PG-13", 20);
    add_movie(my_movies, "Star Wars", "PG", 5);
    add_movie(my_movies, "End Game", "PG-13", 7);
    add_movie(my_movies, "Gangs of wasseypur","R",10);

    my_movies.display();

    add_movie(my_movies, "Gangs of wasseypur", "R", 10);
    add_movie(my_movies, "Ice Age", "PG", 12);

    my_movies.display();

    increment_watched(my_movies, "End Game");
    increment_watched(my_movies, "Ice Age");

    my_movies.display();

    increment_watched(my_movies, "Iron man");

    return 0;
}