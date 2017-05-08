#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

typedef struct {
  int studentID;
  int math;
  int chinese;
  int english;
  int sum;
  int ave;
}Student_Scores;

int main(){
  srand(time(NULL));
  Student_Scores student[SIZE];

  //fill default values
  for(int i=0;i<SIZE;++i){
    student[i].studentID = 0;
    student[i].chinese = 0;
    student[i].english = 0;
    student[i].math = 0;
  }

  //fill student ID and scores
  for(int i=0;i<SIZE;++i){
    student[i].studentID = i + 1;
    student[i].chinese = rand() % 100;
    student[i].english = rand() % 100;
    student[i].math = rand() % 100;
  }

  //calculate sum of scores
  for(int i=0;i<SIZE;++i){
    student[i].sum = student[i].chinese + student[i].english + student[i].math;
  }

  //calculate average of scores
  for(int i=0;i<SIZE;++i){
    student[i].ave = student[i].sum / 3;
  }

  //display all
  for(int i=0;i<SIZE;++i){
    printf("Student %03d, scores chinese:%03d, english: %03d, math: %03d, sum: %03d, ave: %03d\n",
      student[i].studentID,
      student[i].chinese,
      student[i].english,
      student[i].math,
      student[i].sum,
      student[i].ave);
  }

  return 0;
}
