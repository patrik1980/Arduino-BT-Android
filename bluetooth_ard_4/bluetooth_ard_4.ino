#include <SoftwareSerial.h> // includo la libreria per la comunicazione seriale

int rxPin = 9;
int txPin = 8;
SoftwareSerial bluetooth(rxPin, txPin);
String message; //string that stores the incoming message

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
  Serial.begin(9600); // initialization
  bluetooth.begin(9600); //set baud rate
  //pinMode(LED, OUTPUT);
  Serial.println("Press 1 to LED ON or 0 to LED OFF...");
  //pinMode(4, OUTPUT);
  
}
void loop()
{
   while (bluetooth.available())
   message+=char(bluetooth.read());
   {
       char dato= bluetooth.read(); // "dato" è il valore che viene ricevuto dalla seriale
       switch(dato)
       {
         case 'A': // Se ricevo la lettera A,
         {
  digitalWrite(2, HIGH);
            bluetooth.println("  K1 OFF");
           break;
         }
         case 'a': 
         {
  digitalWrite(2, LOW); // Spenfo il relè
           bluetooth.println("  K1 ON");
           break;
         }    
         case 'B':
         {
  digitalWrite(3, HIGH);
            bluetooth.println("  K2 OFF");
           break;
         }
         case 'b':
         {
  digitalWrite(3, LOW);
           bluetooth.println("  K2 ON");
           break;
         }    
         case 'C':
         {
  digitalWrite(4, HIGH);
            bluetooth.println("  K3 OFF");
           break;
         }
         case 'c':
         {
  digitalWrite(4, LOW);
           bluetooth.println("  K3 ON");
           break;
         }    
                  case 'D':
         {
  digitalWrite(5, HIGH);
            bluetooth.println("  K4 OFF");
           break;
         }
         case 'd':
         {
  digitalWrite(5, LOW);
           bluetooth.println("  K4 ON");
           break;
         }    
                  case 'E':
         {
  digitalWrite(6, HIGH);
            bluetooth.println("  K5 OFF");
           break;
         }
         case 'e':
         {
  digitalWrite(6, LOW);
           bluetooth.println("  K5 ON");
           break;
         }    
                  case 'F':
         {
  digitalWrite(7, HIGH);
            bluetooth.println("  K6 OFF");
           break;
         }
         case 'f':
         {
  digitalWrite(7, LOW);
           bluetooth.println("  K6 ON");
           break;
         }    
                  case 'G':
         {
  digitalWrite(10, HIGH);
            bluetooth.println("  K7 OFF");
           break;
         }
         case 'g':
         {
  digitalWrite(10, LOW);
           bluetooth.println("  K7 ON");
           break;
         }    
                  case 'H':
         {
  digitalWrite(11, HIGH);
            bluetooth.println("  K8 OFF");
           break;
         }
         case 'h':
         {
  digitalWrite(11, LOW);
           bluetooth.println("  K8 ON");
           break;
         }    
       }       
   } 
}

