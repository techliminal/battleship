/* 
 *  Reading switches and tell to Serial.
 *
 */
 
int numPins = 2;
int out[] = {4,5};
int in[] = {2,3};


void setup(){
   // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  Serial.println("Initializing!");
  Serial.println("Pins: ");

  // make the pushbutton's pin an input:
  for (int i=0; i < numPins; i++){
    pinMode(in[i], INPUT);
    pinMode(out[i], OUTPUT);
    Serial.print("{");
    Serial.print(in[i]);
    Serial.print(" ");
    Serial.print(out[i]);
    Serial.println("}");
  }
    delay(100);
}

 
void loop(){
    digitalWrite(4,LOW);
    
    digitalWrite(5,LOW);
   checkSwitch();
   delay(100);
  
}


int checkSwitch(){  
  
if (digitalRead(0)==LOW){
   Serial.println("low pin0");
}
if (digitalRead(1)==LOW){
   Serial.println("low pin1");
}
if (digitalRead(2)==LOW){
   Serial.println("low pin2");
}
if (digitalRead(3)==LOW){
   Serial.println("low pin3");
  }
}
 
 //  int val, row, column = 0;
//  
//  for(int i =0; i<numPins; i++){
//      digitalWrite(out[i], LOW);
//  }
//  
//  
//  for(int i=0; i<numPins; i++){
//    row = i;
//    // get the row
//    digitalWrite(out[i], HIGH);
//    for(int j=0; j<numPins; j++){
//     
//      val = digitalRead(in[j]);
//      if (val == HIGH){
//        column = j;
//        break;
//      }
//    }    
//    if (column > 0){
//       break;
//    } 
//    digitalWrite(out[i], LOW);
//  }
//  if (column > 0){
//    Serial.print("Pushed: {");
//    Serial.print(row);
//    Serial.print(" ");
//    Serial.print(column);
//    Serial.println("}");
//  }
//  return 1;
//}

//int checkSwitches(){  
// 
//  int val, row, column = 0;
//  
//  for(int i =0; i<numPins; i++){
//      digitalWrite(out[i], LOW);
//  }
//  
//  
//  for(int i=0; i<numPins; i++){
//    row = i;
//    // get the row
//    digitalWrite(out[i], HIGH);
//    for(int j=0; j<numPins; j++){
//     
//      val = digitalRead(in[j]);
//      if (val == HIGH){
//        column = j;
//        break;
//      }
//    }    
//    if (column > 0){
//       break;
//    } 
//    digitalWrite(out[i], LOW);
//  }
//  if (column > 0){
//    Serial.print("Pushed: {");
//    Serial.print(row);
//    Serial.print(" ");
//    Serial.print(column);
//    Serial.println("}");
//  }
//  return 1;
//}
