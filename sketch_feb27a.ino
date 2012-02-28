
void led(int x, int y, int z)
{
  char * binary;
  binary = map(x,y,z);
  
  if(binary[0] == '0'){
    digitalWrite(5,LOW);    
  }
  else{
    digitalWrite(5,HIGH);
  }
  
  if(binary[1] == '0'){
    digitalWrite(4,LOW);    
  }
  else{
    digitalWrite(4,HIGH);
  }
  
  if(binary[2] == '0'){
    digitalWrite(3,LOW);    
  }
  else{
    digitalWrite(3,HIGH);
  }
  
  if(binary[3] == '0'){
    digitalWrite(2,LOW);    
  }
  else{
    digitalWrite(2,HIGH);
  }
  
  if(binary[4] == '0'){
    digitalWrite(1,LOW);    
  }
  else{
    digitalWrite(1,HIGH);
  }
  
  if(binary[5] == '0'){
    digitalWrite(0,LOW);    
  }
  else{
    digitalWrite(0,HIGH);
  }
}

char * map(int x, int y, int z)
{
    if(x==0 && y==1 && z==2){
    	return "000000";
    }if(x==1 && y==1 && z==3){
    	return "000001";
    }if(x==2 && y==1 && z==2){
    	return "000010";
    }if(x==0 && y==0 && z==1){
    	return "000011";
    }if(x==0 && y==1 && z==1){
    	return "000100";
    }if(x==1 && y==0 && z==3){
    	return "000101";
    }if(x==0 && y==0 && z==2){
    	return "000110";
    }if(x==1 && y==2 && z==1){
    	return "000111";
    }if(x==1 && y==0 && z==1){
    	return "001000";
    }if(x==1 && y==0 && z==2){
    	return "001001";
    }if(x==0 && y==3 && z==2){
    	return "001010";
    }if(x==0 && y==3 && z==1){
    	return "001011";
    }if(x==1 && y==3 && z==1){
    	return "001100";
    }if(x==0 && y==2 && z==2){
    	return "001101";
    }if(x==1 && y==3 && z==2){
    	return "001110";
    }if(x==0 && y==2 && z==1){
    	return "001111";
    }if(x==2 && y==2 && z==3){
    	return "010000";
    }if(x==2 && y==2 && z==1){
    	return "010001";
    }if(x==3 && y==0 && z==3){
    	return "010010";
    }if(x==2 && y==1 && z==3){
    	return "010011";
    }if(x==3 && y==3 && z==3){
    	return "010100";
    }if(x==2 && y==3 && z==2){
    	return "010101";
    }if(x==3 && y==3 && z==2){
    	return "010110";
    }if(x==2 && y==3 && z==1){
    	return "010111";
    }if(x==3 && y==2 && z==2){
    	return "011000";
    }if(x==3 && y==3 && z==1){
    	return "011001";
    }if(x==3 && y==2 && z==1){
    	return "011010";
    }if(x==2 && y==0 && z==3){
    	return "011011";
    }if(x==2 && y==0 && z==2){
    	return "011100";
    }if(x==1 && y==1 && z==2){
    	return "011101";
    }if(x==3 && y==0 && z==2){
    	return "011110";
    }if(x==3 && y==1 && z==2){
    	return "011111";
    }if(x==0 && y==1 && z==3){
    	return "100000";
    }if(x==0 && y==3 && z==3){
    	return "100001";
    }if(x==0 && y==0 && z==3){
    	return "100010";
    }if(x==1 && y==2 && z==3){
    	return "100011";
    }if(x==0 && y==2 && z==3){
    	return "100100";
    }if(x==1 && y==3 && z==3){
    	return "100101";
    }if(x==2 && y==2 && z==0){
    	return "100110";
    }if(x==1 && y==1 && z==1){
    	return "100111";
    }if(x==2 && y==2 && z==2){
    	return "101000";
    }if(x==2 && y==1 && z==1){
    	return "101001";
    }if(x==2 && y==1 && z==0){
    	return "101010";
    }if(x==3 && y==2 && z==0){
    	return "101011";
    }if(x==0 && y==2 && z==0){
    	return "101100";
    }if(x==0 && y==0 && z==0){
    	return "101101";
    }if(x==3 && y==1 && z==0){
    	return "101110";
    }if(x==2 && y==3 && z==3){
    	return "101111";
    }if(x==3 && y==1 && z==1){
    	return "110000";
    }if(x==2 && y==0 && z==1){
    	return "110001";
    }if(x==1 && y==2 && z==2){
    	return "110010";
    }if(x==1 && y==2 && z==0){
    	return "110011";
    }if(x==1 && y==1 && z==0){
    	return "110100";
    }if(x==3 && y==0 && z==1){
    	return "110101";
    }if(x==1 && y==0 && z==0){
    	return "110110";
    }if(x==0 && y==1 && z==0){
    	return "110111";
    }if(x==1 && y==3 && z==0){
    	return "111000";
    }if(x==2 && y==3 && z==0){
    	return "111001";
    }if(x==2 && y==0 && z==0){
    	return "111010";
    }if(x==0 && y==3 && z==0){
    	return "111011";
    }if(x==3 && y==0 && z==0){
    	return "111100";
    }if(x==3 && y==3 && z==0){
    	return "111101";
    }if(x==3 && y==1 && z==3){
    	return "111110";
    }if(x==3 && y==2 && z==3){
    	return "111111";
    }
}

void setup(){
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
//  digitalWrite(5,HIGH);
//  digitalWrite(4,LOW);
//  digitalWrite(3,LOW);
//  digitalWrite(2,LOW);
//  digitalWrite(1,HIGH);
//  digitalWrite(0,HIGH);
  for(int x = 0; x < 4; x++)
  {
    for(int y = 0; y < 4; y++)
    {
      for(int z = 0; z < 4; z++)
      {
        led(x,y,z);
        delay(8);
      }
    }
  }
//led(3,2,3);
//delay(2);
//led(0,0,1);
//delay(2);
}

