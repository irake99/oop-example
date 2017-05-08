#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

class Student_Scores {
public:
  int studentID;
  int math;
  int chinese;
  int english;
  int sum;
  int ave;

  Student_Scores(){
    this->studentID = 0;
    this->chinese = 0;
    this->english = 0;
    this->math = 0;
    this->sum = 0;
    this->ave = 0;
  }

  void fillData(int studentID){
    this->studentID = studentID;
    this->chinese = rand() % 100;
    this->english = rand() % 100;
    this->math = rand() % 100;
  }

  int calcSum(){
    this->sum = this->chinese + this->english + this->math;
    return this->sum;
  }

  int calcAve(){
    this->ave = this->sum / 3;
    return this->ave;
  }

  void show(){
    printf("Student %03d, scores chinese:%03d, english: %03d, math: %03d, sum: %03d, ave: %03d\n",
      this->studentID,
      this->chinese,
      this->english,
      this->math,
      this->sum,
      this->ave
    );
  }
};

int main(){
  srand(time(NULL));
  Student_Scores student[SIZE];

  //fill student ID and scores
  for(int i=0;i<SIZE;++i){
    student[i].fillData(i + 1);
  }

  //calculate sum of scores
  for(int i=0;i<SIZE;++i){
    student[i].calcSum();
  }

  //calculate average of scores
  for(int i=0;i<SIZE;++i){
    student[i].calcAve();
  }

  //display all
  for(int i=0;i<SIZE;++i){
    student[i].show();
  }

  return 0;
}
