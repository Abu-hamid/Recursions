#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution{

private:
void solve(string digits , string output , int index , vector<string> & ans ,string mapped[]){


    // base case ;
    if(index>=digits.length()){

        ans.push_back(output);

        return;
    }

    int number =digits[index]-'0';//int number =digits[index] --> gives the char value of our digits becz it passes as string so minus '0' to convert into int;

    string value =mapped[number];

    for(int i=0;i<value.length();i++){

        output.push_back(value[i]);

        solve(digits ,output ,index+1 ,ans ,mapped);

        output.pop_back();
    }

}
    public:
    vector<string>LetterCombination(string digits){


        vector<string>ans;
        if(digits.length()==0)
        return ans;

        string output =" ";

        int index =0;

        string mapped[10] ={"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};

        solve(digits ,output ,index , ans ,mapped);

        return ans;



    }
};


int main(){

return 0;
}