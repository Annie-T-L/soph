#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void sophiePr(int n1)
    {
        QVector<int>ve1;
        int re1, j1=0, si1=0;
        for(int i1=1;i1<n1;i1++)
        {
            int k1=0;
            for(int i2=1;i2<n1;i2++)
            {
                if(i1%i2 ==0)
                {   k1++;   }
            }
            if(k1 == 2)
            {
                si1++;
                ve1.resize(si1);
                ve1[j1] =i1;
                j1++; }
        }
        QVector<int>ve2;
        int si2=0,j2=0;
        for(int i3=0;i3<si1;i3++)
        {
            for(int i4=0;i4<si1;i4++)
            {
                if(ve1[i4]*2+1 == ve1[i3])
                {
                    si2++;
                    ve2.resize(si2);
                    ve2[j2]=ve1[i4];
                    j2++;
                }
            }
        }
        qDebug() << "primes: " << ve1 << "\n sophie primes: " << ve2;
    }

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.sophiePr(100);

    for(int i1=1;i1<20;i1++)
    {

    }
    return a.exec();
}
