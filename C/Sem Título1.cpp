#include <iostream>
using namespace std; 

int main()
{
    int max= 5;
    for(int i=0; i<max;i++){
        cout << (2 * pow(2,i))<< "," << (7 * pow(3,i)) << "," <<(3 * pow(4,i));
        
        if(i!=(max-1))
            cout<<",";
        else
            cout<<"..."<<endl;
    }
    
    system("Pause");
}

