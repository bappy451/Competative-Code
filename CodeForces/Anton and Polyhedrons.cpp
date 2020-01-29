#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    string Tetrahedron = "Tetrahedron";
    string Cube = "Cube";
    string Dodecahedron = "Dodecahedron";
    string Icosahedron = "Icosahedron";
    string Octahedron = "Octahedron";
    while(cin>>n)
    {
        string tem;
        int faces = 0;
        for(int i=0; i<n; i++)
        {
            cin>>tem;
            if(tem == Tetrahedron) faces += 4;
            else if(tem == Cube) faces += 6;
            else if(tem == Octahedron) faces += 8;
            else if(tem == Dodecahedron) faces += 12;
            else if(tem == Icosahedron) faces += 20;
        }
        cout<<faces<<endl;
    }

    return 0;
}
