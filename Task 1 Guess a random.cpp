#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int user_input, random_number;
    cout<<"Guess a random number:";
    srand(time(0));
    cin>>user_input;
    random_number=(rand()%100);
    while(user_input!=random_number)
    {
        if(user_input<random_number)
        {
            if((random_number-user_input)<10)
            {
                cout<<"Your guess is low"<<endl;
            }
            else
            {
                cout<<"Your guess is too low"<<endl;
            }
        }
        else
        {
            if((user_input-random_number)<10)
            {
                cout<<"Your guess is high"<<endl;
            }
            else
            {
                cout<<"Your guess is too high"<<endl;
            }
        }
        cout<<"Once again guess the random number:";
        cin>>user_input;
    }
    cout<<"Your guess is exactly correct!";
    return 0;
}
