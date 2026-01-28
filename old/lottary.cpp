#include <iostream>
#include <vector>
using namespace std;

int main(){
int days=0;
cin >> days;
vector <int> pv;
int winner;

for (size_t i = 0; i < days; i++)
{
   int ppl=0;
   cin >> ppl;
   pv.clear();
   vector<int> vwin;
    for (size_t j = 0; j < ppl; j++)
    {
        int partisipnt;
        cin >> partisipnt;
        if(pv.empty()&& partisipnt != winner){
        pv.push_back(partisipnt);
        winner=partisipnt;
        }
        else if (partisipnt != winner)
        {
        pv.push_back(partisipnt);
        winner = partisipnt;
        }else{
        pv.push_back(partisipnt);
        }
        
        vwin.push_back(winner);

    }
   for (int k = 0; k < vwin.size(); k++) {
        cout << vwin[k] << " ";
    }
}




    return 0;
}