#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    private:
    int age;
    int standard;
    string first_name;
    string last_name;

    public:
    void set_age(int n)
    {
        age = n;
    }

    int get_age()
    {
        return age;
    }

    void set_standard(int n)
    {
        standard = n;
    }

    int get_standard()
    {
        return standard;
    }

    void set_first_name(string s)
    {
        first_name = s;
    }

    string get_first_name()
    {
        return first_name;
    }

    void set_last_name(string s)
    {
        last_name = s;
    }

    string get_last_name()
    {
        return last_name;
    }

    string get_as_string()
    {
        char comma{','};
        return to_string(age) + comma + first_name + comma + last_name + comma + to_string(standard);
    }
};

int main() 
{
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.get_as_string();
    
    return 0;
}

