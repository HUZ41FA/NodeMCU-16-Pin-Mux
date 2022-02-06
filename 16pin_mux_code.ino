#define S0 D0                             /* Assign Multiplexer pin S0 connect to pin D0 of NodeMCU */
#define S1 D1                             /* Assign Multiplexer pin S1 connect to pin D1 of NodeMCU */
#define S2 D2                             /* Assign Multiplexer pin S2 connect to pin D2 of NodeMCU */
#define S3 D3                             /* Assign Multiplexer pin S3 connect to pin D3 of NodeMCU */
#define SIG A0                            /* Assign SIG pin as Analog output for all 16 channels of Multiplexer to pin A0 of NodeMCU */



void setup() {                                /* Put your codes here to run only once during micro controller startup */

    /* 0- General */
    
pinMode(S0,OUTPUT);                       /* Define digital signal pin as output to the Multiplexer pin SO */        
pinMode(S1,OUTPUT);                       /* Define digital signal pin as output to the Multiplexer pin S1 */  
pinMode(S2,OUTPUT);                       /* Define digital signal pin as output to the Multiplexer pin S2 */ 
pinMode(S3,OUTPUT);                       /* Define digital signal pin as output to the Multiplexer pin S3 */  
pinMode(SIG, INPUT);                      /* Define analog signal pin as input or receiver from the Multiplexer pin SIG */  
    
Serial.begin(9600);                       /* to display readings in Serial Monitor at 9600 baud rates */

}

void loop() {                                 /* Put your codes here to run over and over again endlessly */

    /* 0- General */

    // Channel 0 (C0 pin - binary output 0,0,0,0)
    digitalWrite(S0,LOW); digitalWrite(S1,LOW); digitalWrite(S2,LOW); digitalWrite(S3,LOW);
    Serial.println(analogRead(SIG));
  
    // Channel 1 (C1 pin - binary output 1,0,0,0)
    digitalWrite(S0,HIGH); digitalWrite(S1,LOW); digitalWrite(S2,LOW); digitalWrite(S3,LOW);
    Serial.println(analogRead(SIG));    // Channel 2 (C2 pin - binary output 0,1,0,0)
    digitalWrite(S0,LOW); digitalWrite(S1,HIGH); digitalWrite(S2,LOW); digitalWrite(S3,LOW);
    Serial.println(analogRead(SIG));  
    // Channel 3 (C3 pin - binary output 1,1,0,0)
    digitalWrite(S0,HIGH); digitalWrite(S1,HIGH); digitalWrite(S2,LOW); digitalWrite(S3,LOW);
    Serial.println(analogRead(SIG));  
    // Channel 4 (C4 pin - binary output 0,0,1,0)
    digitalWrite(S0,LOW); digitalWrite(S1,LOW); digitalWrite(S2,HIGH); digitalWrite(S3,LOW);
    Serial.println(analogRead(SIG));  
    // Channel 5 (C5 pin - binary output 1,0,1,0)
    digitalWrite(S0,HIGH); digitalWrite(S1,LOW); digitalWrite(S2,HIGH); digitalWrite(S3,LOW);
    Serial.println(analogRead(SIG));
    // Channel 6 (C6 pin - binary output 0,1,1,0)
    digitalWrite(S0,LOW); digitalWrite(S1,HIGH); digitalWrite(S2,HIGH); digitalWrite(S3,LOW);
    Serial.println(analogRead(SIG));
    // Channel 7 (C7 pin - binary output 1,1,1,0)
    digitalWrite(S0,HIGH); digitalWrite(S1,HIGH); digitalWrite(S2,HIGH); digitalWrite(S3,LOW);
    Serial.println(analogRead(SIG));
    // Channel 8 (C8 pin - binary output 0,0,0,1)
    digitalWrite(S0,LOW); digitalWrite(S1,LOW); digitalWrite(S2,LOW); digitalWrite(S3,HIGH);
    Serial.println(analogRead(SIG));
    // Channel 9 (C9 pin - binary output 1,0,0,1)
    digitalWrite(S0,HIGH); digitalWrite(S1,LOW); digitalWrite(S2,LOW); digitalWrite(S3,HIGH);
    Serial.println(analogRead(SIG));
    // Channel 10 (C10 pin - binary output 0,1,0,1)
    digitalWrite(S0,LOW); digitalWrite(S1,HIGH); digitalWrite(S2,LOW); digitalWrite(S3,HIGH);
    Serial.println(analogRead(SIG));
    // Channel 11 (C11 pin - binary output 1,1,0,1)
    digitalWrite(S0,HIGH); digitalWrite(S1,HIGH); digitalWrite(S2,LOW); digitalWrite(S3,HIGH);
    Serial.println(analogRead(SIG));
    // Channel 12 (C12 pin - binary output 0,0,1,1)
    digitalWrite(S0,LOW); digitalWrite(S1,LOW); digitalWrite(S2,HIGH); digitalWrite(S3,HIGH);
    Serial.println(analogRead(SIG));
    // Channel 13 (C13 pin - binary output 1,0,1,1)
    digitalWrite(S0,HIGH); digitalWrite(S1,LOW); digitalWrite(S2,HIGH); digitalWrite(S3,HIGH);
    Serial.println(analogRead(SIG));
    // Channel 14 (C14 pin - binary output 0,1,1,1)
    digitalWrite(S0,LOW); digitalWrite(S1,HIGH); digitalWrite(S2,HIGH); digitalWrite(S3,HIGH);
    Serial.println(analogRead(SIG));
    // Channel 15 (C15 pin - binary output 1,1,1,1)
    digitalWrite(S0,HIGH); digitalWrite(S1,HIGH); digitalWrite(S2,HIGH); digitalWrite(S3,HIGH);
    Serial.println(analogRead(SIG));
    
    delay(1000);                                                  // Read the value every second

}
