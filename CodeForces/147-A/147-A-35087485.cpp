#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctype.h>

using namespace std;


int main()
{
    string x="abcd";
    getline(cin,x);
    for(int i=0 ;i<x.length();i++)
        {
            int counter =0;

            if (x[i]==x[i+1] && x[i] == ' ')
            {
                int first =i;
                while (x[i]==x[i+1])
                {
                    counter ++;
                    i++;
                }
                x.erase(first,counter);
                i = i -counter;
            }
        }

     for(int i=0 ;i<x.length();i++)
        {

            if ((x[i]==' ') && (isalpha(x[i+1]) == false )  )
            {
                x[i] = x[i+1];
                x[i+1] = ' ';
            }
        }
         for(int i=0 ;i<x.length();i++)
        {

            if ((isalpha(x[i]) == false) && (x[i+1] != ' ') && (x[i] != ' '))
            {
                x.insert(i+1," ");


            }

        }

        for(int i=0 ;i<x.length();i++)
        {
            int counter =0;

            if (x[i]==x[i+1] && x[i] == ' ')
            {
                int first =i;
                while (x[i]==x[i+1])
                {
                    counter ++;
                    i++;
                }
                x.erase(first,counter);
                i = i -counter;
            }
        }

    cout<<x;


}