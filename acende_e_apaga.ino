void setup() {
// configurando pinos como input
// ao configurar um pino digital como input, podemos verificar no programa se há ou não um corrente elétrica chegando até o pino. para isso fazemos a leitura se há pino com a função 
// digitalRead(). A função retorna 1 quando existe corrwnte elética até o pino, e retorna 0 quando não há corrente. 

pinMode (3 ,  INPUT);

Serial.begin (9600);


}

void loop() {
  for (int i = 0; i <255; i++){
  analogWrite (3, i);
  delay (10);
}
  for (int j = 255; j>0; j--){
    analogWrite (3, j);
    delay (10);
  }

  
  }
  
