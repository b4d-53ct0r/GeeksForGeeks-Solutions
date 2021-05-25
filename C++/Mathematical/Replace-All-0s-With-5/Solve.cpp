// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    int location = 1,result=0,final=n;
    if(n == 0)return n*location;
    int t = (int)floor(log10(abs(n))) + 1;
    while(t--){
        if(n%10 == 0){result += 5*location;}
        location*=10;
        n/=10;
    }
    return result+final;
}
