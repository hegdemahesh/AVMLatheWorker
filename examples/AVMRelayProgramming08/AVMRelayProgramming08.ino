


const int SI = A0;
const int EI = A1;

const int P1 = 4;
const int P2 = 5;
const int P3 = 6;
const int P4 = 7;


boolean endReached = false;
boolean startReached = true;

int endPoint = 0;
int startPoint = 0;


boolean setupDone = false;



#define ON   1
#define OFF  0

void setup() {

  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode( P1 , OUTPUT);
  pinMode( P2 , OUTPUT);
  pinMode( P3 , OUTPUT);
  pinMode( P4 , OUTPUT);
  
  
  digitalWrite( P1, OFF );
  digitalWrite( P2, ON );
  digitalWrite( P3, ON );
  digitalWrite( P4, ON );
  
  endReached = false;
  startReached = true;
  
}

void loop() {
  if( setupDone == false ){
    delay(500);
    setupDone = true;
  }

  endPoint =  analogRead( EI );
  Serial.print(endPoint);
  Serial.print("-endpoint\n");
  Serial.print(startReached);
  Serial.print("-startReached\n");
  if( endPoint > 600 && startReached == true ){
    Serial.print("backward motor started\n");
    startReached = false;
    endReached = true;
    delay(800);
    digitalWrite( P1, ON );
    digitalWrite( P2, ON );
    digitalWrite( P3, ON );
    digitalWrite( P4, ON );
    delay(800);
    digitalWrite( P2, OFF );
    delay(800);
    
    
  }

  startPoint = analogRead( SI );
  Serial.print(startPoint);
  Serial.print("-startPoint\n");
  if(  startPoint > 600  &&  endReached == true  ){
    Serial.print("forward Motor Started\n");
    endReached = false;
    startReached = true;
    delay( 800 );
    digitalWrite( P1, ON );
    digitalWrite( P2, ON );
    digitalWrite( P3, OFF );
    delay( 5000 );
    digitalWrite( P3, ON );
    delay( 500 );
    digitalWrite( P1, OFF );
    delay( 500 );
    
  }
  

}
