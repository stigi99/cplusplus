#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Tabliczka mnozenia" << endl;
    cout<<"   ";
    for (int i=1; i<=10; i++)
        cout<<i<<"  ";

    cout<<endl;

    for (int i=1; i<=10; i++)
    {
        if (i==10){
            cout<<i<<" ";
        }
        else {
        cout<<i<<"  ";
        }
        for (int j=1; j<=10; j++)
        {   x=i*j;
        if (x<10){
            cout<<x<<"  ";
        }
        else {
            cout<<x<<" ";
        }
        }
        cout<<endl;
    }

    return 0;
}
