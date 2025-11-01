#include <iostream>

using namespace std;

int main() {
    int eded;
    int max_eded=0;

    cout<<"ededleri daxil edin:"<<endl;
    
 
    cout<<"daxil et:";
    cin>>eded;

    if (eded!=0) {
        max_eded=eded; 
    }

    while (eded!=0) {
        
        if (eded>max_eded) {
            max_eded = eded;
        }

        cout<<"daxil et:";
        cin>>eded;
    }

    if (max_eded==0) {
.
        cout<<"hec bir eded daxil edilmedi"<<endl;
    } else {
        cout<<"daxil edilen en boyuk eded: "<<max_eded<<endl;
    }
    
    return 0;
}



      

