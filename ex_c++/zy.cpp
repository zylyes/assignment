# include<iostream>
using namespace std;
class Country
{
public:
    void China(int n1,int n2){
        Gjcs=n1;
        Gjl=n2;
        cout<<"chinese"<<" "<<Gjcs<<" "<<Gjl<<endl;
    }
    void America(int n1,int n2){
        Gjcs=n1;
        Gjl=n2;
        cout<<"america"<<" "<<Gjcs<<" "<<Gjl<<endl;
    }
private:
    int Gjcs;
    int Gjl;
};
int main(){
    Country a;
    a.China(71,451);
    a.America(114,514);
}