/*
Linked List
Advantage of a linked list is that we can go on for as long as we have commands
Disadvatange is the fact that we cant pop into a random spot in the list, we would have to go to the Head all the way to whichever coomand we want

Arrays
Advatage of an array is that you can access any p[arts of the array at any time without having to go through a line of data like a linked list
Disadvantage is that you have limited space when using an array and must know what your cap is in order to use an array or you get an error.

*/
#include "player.cpp"
#include "List.cpp"
string name;
int points = 0;
int numOfCommands = 0;
int numOfPlayers = ;
struct player profile[50];
List<string> list;

void playGame()
{
    int rounds, answer, num , select;
    int operator, option = 0, integer, w,x,y,z = 0;
    int order[3];
    string description [3];

    Node<string>* questions;
    Node<string>* options;
    
    cout << "how many rounds would you like to play choose from 5 - 30" << endl;
    cin rounds;
    while (rounds > 30 || rounds < 5)
    {
      cout << "how many rounds would you like to play choose from 5 - 30"<< endl;
    cin rounds;  
    }
    system("CLS");
    for (integer = 0; integer < rounds; integer++)
    {
        cout << "round:" << i+1 << endl;
        num = rand() % numOfCommands;
        question = list.add(num);

        description[option++] = questions->Description;
    while (option < 3)
    {
        operator = rand() % numOfCommands;
        if (operator != num)
        {
            options = list.add(operator);
            description[options++] = options->Description;
        }
    }

    while(x <3)
    {
        operator = rand()% 3;
        for (w = 0; w < x; w++)
        {
            if (operator == order[w])
            {
                z++;
            }
        }
         if (z== 0)
            {
                order[x++] = operator;
            }
    }
    system("cls");
    cout << "options:" << endl;
    for(w = 0; w < x; w++)
    {
        if (order[w] == 0)
        {
            answer = w+1;
        }
        cout << w+1 <<":"<< description[order[w]] << endl;
    }

    cin << select;
    while (select < 1 || select > 3)
    {
        cout << "please insert an actual answer from 1 - 3" << endl;
        cin << select;
    }
    if(select == answer)
    {
        points++;
        cout << questions->Word <<":"<< questions->Description<< endl;
        cout << "you have gotten the correct answer +1" << endl;
        cout << "your total is:"<< points<< endl;
    }
    else
    {
        points--;
        cout << questions->Word <<":"<< questions->Description<< endl;
        cout<< "you have gitten the wrong answer -1"<< endl;
        cout << "your total is:" << points << endl;
    }
}   
}

int main()
{
    string commandnames = "commands.cvs";
    string playernames = "player.cvs";
    string curLine , newCommands, newDescriptions;

    int integer = 0;
    fstream infile(commandnames, ios::in);
    if (infile.is_open())
    {
        while (getline(infile, curLine))
        {
            word.clear()
            while(curLine[integer]!= ',')
            {
                word.push_back(line[integer]);
                integer++;
            }
            newCommands = word;
            word.clear();
            while (curLine[integer] != '"')
            {
                 word.push_back(line[integer]);
                integer++;
            }
            newDescriptions= word;
            word.clear();
            numOfCommands++;
        }
         infile.close();
    }
    int choice = 0;

    cout << "What would you like to do" << endl;
    cout << "1)Game Rules" << endl;
    cout <<"2)Play New Game";
    cout <<"3)Load Previous Game"<< endl;
    cout <<"4)Add Command" << endl;
    cout <<"5)Remove Command" << endl;
    cout <<"6)Display  ALl Commands" << endl;
    cout <<"7)Save And Exit" << endl;
    while (choice != 0)
    {
    if (choice == 1)
    {
        cout << "Game rules" << endl;
        cout << "When given a command, you will be given 3 descriptions" << endl;
        cout << "You will have to choose the correct description for that command" << endl;
        cout << "If you choose correctly you will gain the amount of points that description says" << endl;
        cout << "If you choose incorrectly you will be deducted that descriptions amount of points" << endl;
        choice = 0;
    }

    if (choice == 2) // play new game
    {
        playGame();
    }
    if (choice == 3) //Load Previous Game
    {
        
    }
    if (choice == 4) // add command
    {
        string word, description;
        cout<< "please give a word first then the description" << endl;
        cin << word;
        cin << description;
        add(string word, string description);
        system("pause");
        system("CLS");
    }
    if (choice == 5)// remove command
    {
        string word;
        cout << "please give a word you would like to remove";
        cin << word;
        remove(string word);
        system("pause");
        system("CLS");
    }
    if (choice == 6)// display all commands
    {
        int number;
        cout << "What number of words do you want to see" << endl;
        cin << number;
        Display(int number);
        system("pause");
        system("CLS");
    }
    if (choice == 7) // save and exit
    {


        return 0;
    }
    }

   
}

