# include <iostream>
using namespace std;



void otherStructureDatas(){
    struct PERSON {
        int age;
        float height;
    };

    PERSON dad;
    dad.age = 75;
    dad.height = 1.89;
    
    cout << endl << dad.age << " " << dad.height;
    
};

int main(){
    otherStructureDatas();
}