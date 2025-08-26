// Variables Estáticas
const int dirPin = 10;
const int stepPin = 11;
const int stepsPerRevMotor = 200; // 1.8°
const float gearRatio = 40.0 / 24.0; // Relación de engranajes
const int delayEscaneo = 2000; // Tiempo entre mediciones
const int delayPasos = 100; // Tiempo entre pasos

// Variables
int muestras = 0; // N° de muestras en 360°, obtenido de Python
float pasoCamara = 0.0; // Grados a moverse entre cada muestra

void setup() {
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin, OUTPUT);
  Serial.begin(115200);

  digitalWrite(dirPin, HIGH); // Giro Antihorario
  Serial.println("Arduino listo.");
}

void loop() {

  // Recibir numero de muestras
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');
    input.trim();

    if (input.startsWith("NUM_ESCANEOS")) {

      muestras = input.substring(12).toInt();  // Obtener numero de muestras

      if (muestras > 0) {
        pasoCamara = 360.0 / muestras;
        Serial.print("Iniciando escaneo con ");
        Serial.print(muestras);
        Serial.println(" muestras...");
        Escaneo();
      }
    }
  }
}

void Escaneo() {
  bool escaneo = true; // Indica a la funcion moverMotor 

  delay(5000); // Delay inicial, para evitar ruido en motores

  Serial.println("start"); // Inicio del escaneo

  for (int i=0; i < muestras; i++) {
    float anguloCamara = i * pasoCamara;

    delay(1000); // Para evitar vibraciones en el escaneo

    Serial.println(anguloCamara, 2); // Enviar angulo actual, 2 decimales

    delay(delayEscaneo); // Esperar mientras Python escanea

    if (i < muestras - 1) {
      float pasosMotor = (pasoCamara / 360.0) * stepsPerRevMotor * gearRatio;
      moverMotor(pasosMotor, escaneo);
    }
  }

  Serial.println("end"); // Fin del escaneo

  // Vuelta a 0
  escaneo = false;

  float pasosVuelta = stepsPerRevMotor * gearRatio; // 360°

  moverMotor(pasosVuelta, escaneo);

  delay(5000);

}

// Funcion para mover motor, recibe los pasos a mover y el sentido
void moverMotor(float pasos,bool escaneo) {
  int pasosEnteros = round(pasos);

  if(escaneo == true){
    digitalWrite(dirPin, HIGH); // Sentido antihorario

    for (int i = 0; i < pasosEnteros; i++) {
      digitalWrite(stepPin, HIGH);
      delay(delayPasos);
      digitalWrite(stepPin, LOW);
      delay(delayPasos);
    }
  }
  else{
    digitalWrite(dirPin, LOW); // Sentido horario

    // Movimiento más rapido para regreso
    for (int i = 0; i < pasosEnteros; i++) {
      digitalWrite(stepPin, HIGH);
      delay(delayPasos / 4); 
      digitalWrite(stepPin, LOW);
      delay(delayPasos / 4);
    }
  }
}

