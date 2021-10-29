// SOLO BEBIDAS
void ron(){
  digitalWrite(bombaRon, RELE_ON);
  Serial.println("releRon ON");
  delay(15000);
  digitalWrite(bombaRon, RELE_OFF);
  Serial.println("releRon OFF");
  delay(800);
}
void whiskey(){
  digitalWrite(bombaWhiskey, RELE_ON);
  Serial.println("releWhiskey ON");
  delay(15000);
  digitalWrite(bombaWhiskey, RELE_OFF);
  Serial.println("releWhiskey OFF");
  delay(800);
}

void coca(){
  digitalWrite(bombaCoca, RELE_ON);
  Serial.println("releCoca ON");
  delay(35000);
  digitalWrite(bombaCoca, RELE_OFF);
  Serial.println("releCoca OFF");
  delay(800);
}

void seven(){
  digitalWrite(bombaSeven, RELE_ON);
  Serial.println("releSeven ON");
  delay(35000);
  digitalWrite(bombaSeven, RELE_OFF);
  Serial.println("releSeven OFF");
  delay(800);
}

//RECETAS
void ronCoca(){
  ron();
  delay(500);
  coca();
}

void RonSeven(){
  ron();
  delay(500);
  seven();
}

void whiskeySour(){
  whiskey();
  delay(500);
  seven();
}

void whiskeyCoca(){
  whiskey();
  delay(500);
  coca();
}
