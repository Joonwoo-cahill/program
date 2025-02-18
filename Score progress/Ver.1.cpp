/*
 Author: Joonwoo Cho
 Date: 2/18/2025
 */
#include <iostream>
using namespace std;
int scores[100];
int number = 1;
int choice, idx, average, tmp;
int main() {
    
    while(true)
    {
        cout << "1. show ranking & mean of scores" << "\n";
        cout << "2. Add scores" << "\n";
        cout << "3. Delete a score" << "\n";
        cout << "4. Exit" << "\n";
        cout << "choice : ";
        
        cin >> choice;
        if(choice == 1)
        {
            sort(scores, scores+idx);
            cout << "Score board" << "\n\n";
            cout << "================================\n";
            number = 1;
            
            for(int i = idx-1; i >=0; i--)
            {
                if(scores[i] != 0)
                {
                    cout << number << ".\t" << scores[i] <<"\n";
                    number++;
                }
            }
            
            cout << "================================\n";
            
            for(int t = 0; t < idx; t++)
            {
                average = average + scores[t];
            }
            average = average / idx;
            cout << "Score mean :  " << average << "\n";
        }
        if(choice == 2)
        {
            while(true)
            {
                cout << "Enter score (0..100) (otherwise exit)\n";
                cout << "score :";
                cin >> tmp;
                if(tmp == -1)
                {
                    break;
                }
                else
                {
                    scores[idx] = tmp;
                }
                cout << "[";
                for(int i = 0 ; i <= idx; i++)
                {
                    cout << scores[i] << ", ";
                }
                cout << "]\n";
                idx++;
            }
            
        }
        if(choice == 3)
        {
            int k = 0;
            cin >> k;
            for(int u = 0; u < idx; u++)
            {
                if(k == scores[u])
                {
                    scores[u] = 0;
                    break;
                }
            }
        }
        if(choice == 4)
        {
            return 0;
        }
    }
    return 0;
}


