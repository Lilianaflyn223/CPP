#include <bits/stdc++.h>

using namespace std;

class thoigian
{
    private: int gio;
    private: int phut;
    public: thoigian()
    {

    }
    public: thoigian( int gio, int phut )
    {
        this->gio = gio;
        this->phut = phut;
    }
    public: thoigian( string s )
    {
        int m_gio = 0;
        int m_phut = 0;
        int vt = 0;
        for ( int i = 0 ; i<s.size() ;i++ )
        {
            if ( s[i] == ' ' )
            {
                vt = i;
                break;
            }
        }
        for ( int i = 0 ; i< vt ; i++ )
        {
            m_gio = m_gio*10 + ( s[i] -'0');
        }
        vt+=5;
        int vt2 = vt;
        for ( int i = vt ; i < s.size() ; i++ )
        {
            if ( s[i] == ' ' )
            {
                vt2 = i;
                break;
            }
        }
        for ( int i = vt ; i < vt2 ; i++ )
        {
            m_phut = m_phut*10+ (s[i]-'0');
        }
        gio = m_gio;
        phut = m_phut;
    }

    friend istream& operator >> ( istream &in, thoigian &tg )
    {
        in >> tg.gio;
        in >> tg.phut;
        return in;
    } 
    public: void rutgon()
    {
        int dem = 0;
        int tmp = phut % 60;
        while ( phut >= 60 )
        {
            dem++;
            phut/=60;
        }
        gio+=dem;
        phut = tmp;
    }
    public: void getTg()
    {
        cout << gio << " " << phut;
    }




};
int main()
{
    thoigian tg = thoigian("2 gio 10 phut");
    tg.getTg();
}