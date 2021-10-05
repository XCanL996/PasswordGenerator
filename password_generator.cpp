#include<iostream>
#include<string>
#include <fstream>

using namespace std;

char RandomChar(int y);
void DataIntoTextFile(int NumberOfPasswords);

int main(){

  DataIntoTextFile(1000);

  return 0;
}

char RandomChar(int y){

  char ListOfCharacters[] = "abcdefghijklmnopqrstuvwxyz1234567980ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$";
  char RandomChar1;

      RandomChar1 = ListOfCharacters[y];

  return RandomChar1;
}

void DataIntoTextFile(int NumberOfPasswords){

  srand(time(0));

  ofstream myfile;
    myfile.open ("Words.txt");
    for (int i = 1; i < (NumberOfPasswords + 1); i++) {
      myfile << i << ". ";
      for (int x = 0; x < ((rand()%10)+20); x++) {
        myfile << RandomChar(rand()%66);
      }
      myfile << endl;
    }
    myfile.close();
}
