// https://www.codechef.com/viewsolution/1287963152
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
	    if(x % 5 == 0 ){
	        cout << "no" << endl ;
	    }
	    else{
        cout << "yes" << endl;
	    }
}


// https://www.codechef.com/viewsolution/1287995467

using namespace std;
#include <iostream>
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        string A , B;
        cin >> A >> B;
        string ans ="";
        
        for(int i=0; i<min(n,m); i++)
        {
            if(A[i] == B[i])
            {
                ans = ans + A[i];
            }
            else
            {
                break;
            }
        }
        
        cout << ans << endl;
    }
}