#include <iostream>
using namespace std;

int main()
{
    start:

    cout << "Make sure the score is between 100 & 0" << endl;

    int n;
    cout << "Insert the Score: ";
    cin >> n;

    if(n>100){
        goto start;
    }

    if(n<0){
        goto start;
    }

    if(n>=80){
        cout << "Your grade is A" << endl;
    }else{
        if(n>=70){
            cout << "Your grade is B" << endl;
        }else{
            if(n>=60){
                cout << "Your grade is C" << endl;
            }else{
                if(n>=50){
                    cout << "Your grade is D" << endl;
                }else{
                    cout << "Your grade is F" << endl;
                }
            }
        }
    }
    return 0;
}
