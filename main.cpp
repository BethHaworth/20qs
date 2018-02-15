#include <iostream>

using namespace std;

int main()
{
    int max=100;
    int min=0;
    char ans;
    int num=0;
    int guess;
    int numGuess=0;

    cout<< "20 QUESTIONS" << endl;
    cout<< ".........................................................."<<endl;

    cout<< "Do you have what it takes to take me on?" << endl;
    cout<<"..........................................................."<<endl;
    cout<<"                                                           "<<endl;

    cout<< "It's showtime..." << endl;

    cout<< "Think of an integer between 1 and 100." << endl; //user prompt

    /*
    Game Logic
    */

    do{
        guess=min+((max-min)/2); //start guessing with median
        cout<< "Is the number greater than or equal to " << guess <<"?(Y/N)" <<endl;
        cin>>ans;
        if (ans=='y' || ans=='Y'){

            numGuess++;
            cout<< "Is your number "<<guess<<"? (Y/N)" <<endl;
            cin>> ans;
            if (ans=='y'||ans=='Y'){
                num=guess;
                break;
            }
            else{
                min=guess;
            }
        }
        else{
            numGuess++;
            max=guess;
        }
    }while(num==0&&numGuess<20);

/*
Winner's outcome
*/
if (numGuess == 20 && num == 0)
    cout << "Damn you! I'm just not smart enough to guess your number in 20 guesses. You win the game :( :( " <<endl;
else
cout << "Your number is " <<num<< ". Your efforts have proven futile. Consider me your master." <<endl;


}


