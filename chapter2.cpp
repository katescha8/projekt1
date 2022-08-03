#include <iostream>
#include <iomanip>
#include <ctype.h>
using namespace std;

void task21()
{
    const float var=7.481;
    float size;
    cout << "enter value gallon ";
    cin >>size ;
    float feetsize = size / var;
    cout << "value fut= " << feetsize << endl ;
}
void task22() //1990 135 1991 7290 1992 11300 1993 16200
{ cout << setw(4) << 1990 <<setw(12)<< 135<< endl <<
          setw(4) << 1991 << setw(12)<<7290<< endl <<
          setw(4) << 1992 << setw(12)<<11300 << endl <<
          setw(4) << 1993<< setw(12)<<16200<< endl;
}
void task23()
{
    const int var1=10;
    int var2=var1+10;
   int var3= var2--;
    cout << var1<< endl << var3 << endl<< var2<< endl;
}
void task24() /*
No man is an island,

Entire of itself,

Every man is a piece of the continent,

A part of the main.

If a clod be washed away by the sea,

Europe is the less.

As well as if a promontory were.

As well as if a manor of thy friend’s

Or of thine own were:

Any man’s death diminishes me,

Because I am involved in mankind,

And therefore never send to know for whom the bell tolls;

It tolls for thee.  */
{ cout << "No man is an island," << endl
       << "Entire of itself," << endl
       <<"Every man is a piece of the continent," << endl
         <<"A part of the main." << endl
           <<"If a clod be washed away by the sea," << endl
             <<"Europe is the less." << endl
               <<"As well as if a promontory were." << endl
                 <<"As well as if a manor of thy friend’s" << endl
                   <<"Or of thine own were:" << endl
                     <<"Any man’s death diminishes me," << endl
                      <<"Because I am involved in mankind," << endl
                       <<"And therefore never send to know for whom the bell tolls;" << endl
                        <<"It tolls for thee." << endl;
}
void task25()
{
    char x;
    cin >> x;
    cout << islower(x);
}
void task26()//1sterling=1.487$, 1franc=0,172$, 1mark=0.584$, 1yen=0.00955$
{
    float summ, ster,franc,mark, yen;
    cout << "enter sum ";
    cin >> summ;
    ster=summ/1.487;
    franc=summ/0.172;
    mark=summ/0.584;
    yen=summ/0.00955;
    cout << "sterling=" << ster << endl
         << "franc=" << franc <<endl
         << "mark=" << mark << endl
         << "yen=" << yen << endl;
}
void task27()
{
    float ctemp, ftemp;
    cout << "celsius temperature ";
    cin >> ctemp;
    ftemp=(ctemp*9/5)+32;
    cout << "fahrenheit temperature: " << ftemp << endl;
}
void task28()
{
   long pop1 = 8425785, pop2 = 47, pop3 = 9761 ;
    cout << setw(4) <<"city" << setw(20)<< setfill('.')<< "popularity" <<  endl
          << setw(5) <<"moskow " <<setw(14)<< setfill('.')<< pop1 <<  endl
          << setw(5) <<"kirov" <<setw(11)<< setfill('.')<< pop2 <<  endl
          << setw(5) <<"ugrumovka " <<setw(8)<< setfill('.')<< pop3 <<  endl;
}
void task29()
{
    int a, b, c, d, sumup, sumdown;
    char slash;
    cout << "enter first fractions " ;
    cin >> a >> slash >> b;
    cout << "enter second fractions ";
    cin >> c >> slash >> d;
    sumup=a*d + b*c;
    sumdown=b*d;
    cout << "sum= " << sumup << slash << sumdown;
}
void task210() //1ster=20shill, 1shill=12pens=>1 ster=240 pens    1ster=100pens 1680 204 9 /240
{
    double ster, pens, shill;
    double sum;
    char ch='\x9C';
    cout << "enter sterling ";
    cin >> ster;
    cout << "enter shilling ";
    cin >> shill;
    cout << "enter pens ";
    cin >> pens;
    sum=(240*ster+12*shill+pens)/240;
    cout << "sum="  << ch <<  sum;
}
void task211()
{
    setiosflags(ios::left);
    cout <<setw(5)<< "lastname" << setw(15)<<"firstname" << setw(15) << "adres" << setw(20)<< "city" << endl
         <<"------------------------------------------------------------------------" << endl
         <<setw(5)<< "petrov" << setw(15)<<"vasiliy" << setw(24) << "klenovaya 16" << setw(25)<< "sankt-petersburg" << endl
         <<setw(5)<< "ivanov" << setw(14)<<"sergey" << setw(24) << "osinovaya 3" << setw(17)<< "nahodka" << endl
         <<setw(5)<< "sidorov" << setw(11)<<"ivan" << setw(28) << "beresovaya 21" << setw(19)<< "kaliningrad" << endl;
}
void task212()
{
    cout << "enter decimal sum ";
    float decsum,sum,shill,fpens;
    int sterling, shilling,pens;
    char point='.';
    cin  >> decsum;
    sum=decsum*240;
    sterling=static_cast<int>(decsum);
    shill=sum-240*sterling;
    shilling=static_cast<int>(shill/12);
    fpens=shill-12*shilling;
    pens=static_cast<int>(fpens);
    cout << "old sum " << sterling<<point << shilling<< point<<pens<< endl;
}
int main()
{
    task212();
   return 0;
}
