void mvt(int x, int y){

  if(x==1){
    Ag1.attach(3);
    Ag1.write(y);
    delay(500);
    Ag1.detach();
    Pos1 = y;
  }
  if(x==2){
    Ag2.attach(5);
    Ag2.write(y);
    delay(500);
    Ag2.detach();
    Pos2 = y;
  }
  if(x==3){
    Ag3.attach(6);
    Ag3.write(y);
    delay(500);
    Ag3.detach();
    Pos3 = y;
  }
  if(x==4){
    Ag4.attach(9);
    Ag4.write(y);
    delay(500);
    Ag4.detach();
    Pos4 = y;
  }
  if(x==5){
    Ag5.attach(10);
    Ag5.write(y);
    delay(500);
    Ag5.detach();
    Pos5 = y;
  }
  if(x==6){
    Ag6.attach(11);
    Ag6.write(y);
    delay(500);
    Ag6.detach();
    Pos6 = y;
  }


}

