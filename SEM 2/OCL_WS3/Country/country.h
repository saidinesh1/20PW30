#ifndef COUNTRY_H_INCLUDED
#define COUNTRY_H_INCLUDED
class Country
{
    private:
        std::string name;
        float area;
        int population;
        int *c;
    public:
        Country();
        Country(int n);
        void get_info();
        void bigger_area(Country[]);
        void bigger_population(Country[]);
}
#endif // COUNTRY_H_INCLUDED
