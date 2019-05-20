void loop() {

  // mvt(x : Numero servo de 1 à 6, y : angle à prendre de 0 à 180);
  //mvt(1, 165); //160



  /////////////////////////////////////////////////////////// GESTION DES BP //////////////////////////////////////////////////////////
  if (digitalRead(A0) == 0) {
    mvt(1,165);//180
    CAg1 = true;
    delay(1000);
  }
  if (CAg1 && digitalRead(A0) == 1) {    
    mvt(1,180);//165
    CAg1 = false;
  }
  if (digitalRead(A1) == 0) {  
    mvt(2,165);
    CAg2 = true;
    delay(1000);
  }
  if (CAg2 && digitalRead(A1) == 1) {    
    mvt(2,180);
    CAg2 = false;
  }
  if (digitalRead(A2) == 0) {
    mvt(3,165);
    CAg3 = true;
    delay(1000);
  }
  if (CAg3 && digitalRead(A2) == 1) {    
    mvt(3,180);
    CAg3 = false;
  }
  if (digitalRead(A3) == 0) {
    mvt(4,165);
    CAg4 = true;
    delay(1000);
  }
  if (CAg4 && digitalRead(A3) == 1) {    
    mvt(4,180);
    CAg4 = false;
  }
  if (digitalRead(A4) == 0) {
    mvt(5,165);
    CAg5 = true;
    delay(1000);
  }
  if (CAg5 && digitalRead(A4) == 1) {    
    mvt(5,180);
    CAg5 = false;
  }
  if (digitalRead(A5) == 0) {
    mvt(6,165);
    CAg6 = true;
    delay(1000);
  }
  if (CAg6 && digitalRead(A5) == 1) {    
    mvt(6,180);
    CAg6 = false;
  }



}
