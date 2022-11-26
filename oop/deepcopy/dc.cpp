#include <iostream>

class Deep
{
private:
    int *data;

public:
    void set_data(int d) { *data = d; }
    int get_data() { return *data; }
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
    : Deep(*source.data)
{
    std::cout << "Copy constructed" << std::endl;
}

void Display(Deep s)
{
    std::cout<<s.get_data()<<std::endl;
}
Deep::~Deep()
{
    delete data;
    std::cout<<"Destructor Deleting data"<<std::endl;
}
int main()
{
    Deep obj1{100};
    Display(obj1);

    Deep obj2{obj1};
    Display(obj2);
    obj2.set_data(1000);
    Display(obj2);
    return 0;
}