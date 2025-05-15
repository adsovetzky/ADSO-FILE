#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        vector<int> scores;
        void input(){
            for(int i = 0; i < 5; i++){
                int score;
                cin >> score;
                scores.push_back(score);
            }
        }
        int calculateTotalScore(){
            int sum = 0;
            for(int i = 0; i < 5; i++) sum += scores[i];
            return sum;
        }
};
int main(){
    int n;
    cin >> n;
    Student *s = new Student[n];
    for(int i = 0; i < n; i++){
        s[i].input();
    }
    int kristen_score = s[0].calculateTotalScore();
    int count = 0;
    for( int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score) count++;
    }
    cout << count << endl;
}