#include<iostream>
#include<fstream>

using namespace std;

int main()
{
 fstream fd;
 fd.open("fdate.txt". ios::in);
 int s, c1, c2, n1, n2;
 n1 = n2 = 0;
 fd >> s >> c1 >> c2;
 while(fd.good())
      {
       n1+=c1;
       n2+=c2;
       fd >> s >> c1 >> c2;
       }
  fd.close();
  cout <<"n1 = " << n1 <<"n2 = " << n2 << endl;
  return 0;
}

