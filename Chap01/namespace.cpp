#include <iostream>
#include <string>

using namespace std;

namespace bw {
    
    const string prefix1 = "(bw::string) ";
    
    class string1 {
        string _s = "";
        string1 ();
    public:
        string1 ( const string & s ) : _s( prefix1 + s) {}
        string get_S() {return _s;};
        friend ostream& operator <<(ostream& other,string1& dt); 
        const char * c_str() const { return _s.c_str(); }
        operator string & () { return _s; }
        operator const char * () const { return _s.c_str(); }
    };
    
};

int main() {
    const string s1("This is a string ");
    cout<<s1<<endl;
    
    const bw::string1 s2(s1);
    cout<<s2<<endl;
    
    return 0;
}

ostream& operator <<(ostream& COUT,bw::string1& dt)
{
    COUT<<"La impresion es la siguiente: \n"<<dt.get_S()<<endl;
    return COUT;
}