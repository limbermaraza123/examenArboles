 #include <iostream>
 #include <ctime>
 #include <cstdlib>
 #include <set>
 using namespace std;
 void mostrar(set<char>lim)
 {
    cout<<"Datos del arbol"<<endl;
    set<char>::iterator i=lim.begin();
     while(i!=lim.end())
     {
         cout<<*i<<" , ";
         i++;
     }
 }
 int main()
 {
     set<char>lim;
     string ecua;
     cout<<"x=";
     cin>>ecua;
     for(int i=0;i<ecua.size();i++)
     {
         char b=ecua[i];
         lim.insert(b);
     }
     mostrar(lim);
     return 0;
 }
