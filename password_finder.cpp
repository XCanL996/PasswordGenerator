#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

int main(){

  vector<string>myVector;
  string line;
  string inputtedLine;
  string myPassword;
  size_t found;

  int i = 0;

  ifstream myfile;
  myfile.open("Words.txt");
  if(myfile.is_open()){
    while ( getline (myfile,line) )
      {
        myVector.insert(myVector.begin() + i,line);
        //cout << line;
        i++;
      }
    myfile.close();
  }
  else cout << "Unable to open file";

  cout << "Please enter a number to find your password" << endl;
  cin >> inputtedLine;

  for (int i=0; i < myVector.size() ;i++) {
    found  = myVector[i].find(inputtedLine);
      if (found  == 0){
        cout << myVector[i] << '\n';
      }
    }

  return 0;
}
