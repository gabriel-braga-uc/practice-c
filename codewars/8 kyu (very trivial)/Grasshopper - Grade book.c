char get_grade(int a, int b, int c) {
  int avg = (a+b+c);
  char* score;
  if(avg >= 270){
    score = "A";
  }
  else if(avg >= 240){
    score = "B";
  }
  else if(avg >= 210){
    score = "C";
  }
  else if(avg >= 180){
    score = "D";
  }
  else{
    score = "F";
  }
  return(*score);
}