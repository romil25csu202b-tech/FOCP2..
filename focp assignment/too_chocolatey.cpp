#include<bits/stdc++.h>
using namespace std;

string solve (int n, vector<int> arr) {
   // Write your code here
   sort(arr.begin(), arr.end(), greater<int>()); 
   long long Alex = 0;
   long long Bob = 0;
   long long Alex_turn = true;
   long long Bob_turn = false;
   long long Alex_eat =0;
   long long Bob_eat =0;
   for(int i =0;i<n;i++){
    if(Alex_turn == true){
        if(arr[i]==Alex_eat){continue;}
        else{Alex = Alex+Alex_eat;Alex_eat = arr[i];Bob_turn = true;Alex_turn = false;}
        }
    else if(Bob_turn==true){
        if(arr[i]==Bob_eat){continue;}
        else{Bob = Bob + Bob_eat;Bob_eat = arr[i];Alex_turn = true;
Bob_turn = false;}
   }
}
    if (Alex > Bob){return "Alex";}
    else{return "Bob";}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i_arr = 0; i_arr < n; i_arr++)
        {
        	cin >> arr[i_arr];
        }

        string out_;
        out_ = solve(n, arr);
        cout << out_; 
        cout << "\n";
    }
}