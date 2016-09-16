 #include <map>
 #include <set>
 #include <vector>
 #include <list>
 #include <cmath>
 #include <cstring>
 #include <string>
 #include <sstream>
 #include <iostream>
 #include <algorithm>
 #include <fstream>

 #define  x first
 #define  y second

 #define sz(a) int((a).size())
 #define all(c) (c).begin(),(c).end()
 #define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
 #define present(c,x) ((c).find(x) != (c).end())
 #define cpresent(c,x) (find(all(c),x) != (c).end())
 #define FOR(a,b,i) for(int i=a; i<=b; i++)
 #define RFOR(a,b,i) for(int i=b; i>=a; i--)
 #define SET(c,x) memset(c,x,sizeof(c))
 #define pb push_back
 #define mp make_pair

 using namespace std;
 typedef vector<int> vi;
 typedef vector<vi> vvi;
 typedef pair<int,int> ii;
 typedef long long ll;


 int main(){
    ofstream output;
    ifstream input;
    output.open("magic");
    input.open("magic.in");
    int c;

    input >> c;
    FOR(1,c,t){
        int ans1,ans2,ans;
        int arr1[4][4],arr2[4][4];
        input >> ans1;
        FOR(0,3,i) FOR(0,3,j) input >> arr1[i][j];
        input >> ans2;
        FOR(0,3,i) FOR(0,3,j) input >> arr2[i][j];

        int count = 0;

        FOR(0,3,i) FOR(0,3,j){
  //          output << "hey " << endl;
            if(arr1[ans1-1][i] == arr2[ans2-1][j]){
                ans = arr1[ans1-1][i];
                count++;
            }
        }

        if(count == 0){
            output << "Case #" << t << ": " << "Volunteer cheated!" << endl;

        }else if(count == 1){
                output << "Case #" << t << ": " << ans << endl;
        }else{
            output << "Case #" << t << ": " << "Bad magician!" << endl;

        }

    }

 return 0;
 }
