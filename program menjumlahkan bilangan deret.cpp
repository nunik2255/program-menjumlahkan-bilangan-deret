#include <iostream>
#include <conio.h>

using namespace std;
int main ()
{
    int a=0, b, c, jumlah=0, i, n;

    cout<<"Masukan Jumlah Deret bilangan"<<endl;
    cout<<"Masukan Bilangan awal"<<endl;
    cin>>a;
    cout<<"Masukan Beda "<<endl;
    cin>>b;
    cout<<"Masukan nilai ke-n"<<endl;
    cin>>n;

    cout<<"Deret ke- "<<n<<endl;
    cout<<a<<",";
    jumlah=jumlah+a;
    for (int i=0; i<n - 1 ; i++)
    {
        c=a+b;
        a=c;
        cout<<c<<endl;
        jumlah=jumlah+c;
    }
    cout<<"\n Jumlah deret ke-" <<n<<" : " ;
    cout<<jumlah<<endl;

    getch();
    return 0;

}
