#include <iostream>
using namespace std;

main()
{
    int score;

    cout << "Enter Your Score :" << endl;
    cin >> score;

    char grade = (score > 90 && score <= 100)
                     ? 'A'
                 : (score > 80 && score <= 90)
                     ? 'B'
                 : (score > 70 && score <= 80)
                     ? 'C'
                 : (score > 50 && score <= 70)
                     ? 'D'
                 : (score > 33 && score <= 50)
                     ? 'E'
                 : (score >= 0 && score <= 33)
                     ? 'F'
                     : 'I';
    if (grade == 'I')
    {
        cout << "Invaild Score..";
    }

    switch (grade)
    {
    case 'A':
        cout << "Your Grade is A.Excellent Work!" << endl;
        break;
    case 'B':
        cout << "Your Grade is B. Well Deone!" << endl;
        break;
    case 'C':
        cout << "Your Grade is c. Good job!" << endl;
        break;
    case 'D':
        cout << "Your Grade is D.nice try more then try !" << endl;
        break;
    case 'E':
        cout << "Your Grade is E. You passed,but you colud do better!" << endl;
        break;
    case 'F':
        cout << "Your Grade is F.Sorry,you Failed!" << endl;
        break;
    }

    if (grade >= 'A' && grade <= 'E')
    {
        cout << "You Are Eligible For Next Level!" << endl;
    }
    else
    {
        cout << " Please try aging next time " << endl;
    }
}