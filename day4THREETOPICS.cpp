#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int A, B, C, X;
    // Input the three topics Chef has prepared and the topic he gets
    cin >> A >> B >> C >> X;

    // Check if the given topic is one of the prepared topics
    if (X == A || X == B || X == C) {
        cout << "Yes" << endl;  // Chef can win the contest
    } else {
        cout << "No" << endl;   // Chef cannot win the contest
    }

    return 0;


}
